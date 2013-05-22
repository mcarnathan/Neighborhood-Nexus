<?php
// $Id: template.php 511 2008-12-01 19:51:25Z jhedstrom $

/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 */


/**
 * Implementation of HOOK_theme().
 */
function opensourcery_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/**
 * Implements theme_node_submitted()
 */
function opensourcery_node_submitted($node) {
  $return = '';

  $user = user_load($node->uid);
  if ($node->type == 'story' && !empty($user->picture) && $node->build_mode != 'bubble') {
    $return .= theme('imagecache', 'user_thumbnail', $user->picture);
  }

  $return .= t('Submitted by !username on @datetime', 
    array(
      '!username' => theme('username', $user), 
      '@datetime' => format_date($node->created),
    )
  );

  return '<span class="submitted">' . $return . '</span>';
} // opensourcery_node_submitted()

/**
 * Implements theme_comment_submitted()
 */
function opensourcery_comment_submitted($comment) {
  $return = '';

  $user = user_load($comment->uid);
  $node = node_load($comment->nid);
  if ($node->type == 'story' && !empty($user->picture)) {
    $return .= theme('imagecache', 'user_thumbnail', $user->picture);
  }

  $return .= '<div class="user">' . theme('username', $comment) . '</div>';
  $return .= '<div class="date">' . format_date($comment->timestamp) . '</div>';

  return $return;
} // opensourcery_comment_submitted

/**
 * Implements hook_preprocess_node()
 */
function opensourcery_preprocess_node(&$vars) {
  if ($vars['type'] == 'story' && $vars['build_mode'] == 'bubble') {
    // original teaser
    $teaser = $vars['ds_fields']['body']['content'];
    // truncated teaser
    $new_teaser = node_teaser(strip_tags($teaser), NULL, 200);
    // substitute
    $vars['content'] = str_replace($teaser, '<p>' . $new_teaser . '</p>', $vars['content']);
  } // if
} // opensourcery_preprocess_node()

/**
 * Implements theme_menu_item_link()
 */
function opensourcery_menu_item_link($link) {
  if (empty($link['localized_options'])) {
    $link['localized_options'] = array();
  }

  if ($link['menu_name'] == 'menu-user-admin' && strlen($link['link_title']) < 9) {
    $link['localized_options']['attributes']['class'] = 'single';
  }

  return l($link['title'], $link['href'], $link['localized_options']);
} // opensourcery_menu_item_link()

/**
 * Implements hook_preprocess_page()
 */
function opensourcery_preprocess_page(&$vars) {
  drupal_add_js(drupal_get_path('theme', 'opensourcery') . '/hide_terms.js', 'theme');
  $vars['scripts'] = drupal_get_js();
} // opensourcery_preprocess_page()

/**
 * Implements theme_username()
 */
function opensourcery_username($object) {
  if ($object->uid && $object->name) {
    $user = user_load($object->uid);
    $name = trim($user->profile_firstname . ' ' . $user->profile_lastname);
    if (empty($name)) $name = $user->name;

    if (user_access('access user profiles')) {
      $output = l($name, 'user/' . $object->uid, array('attributes' => array('title' => t('View user profile.'))));
    }
    else {
      $output = check_plain($name);
    }
  }
  else if ($object->name) {
    // Sometimes modules display content composed by people who are
    // not registered members of the site (e.g. mailing list or news
    // aggregator modules). This clause enables modules to display
    // the true author of the content.
    if (!empty($object->homepage)) {
      $output = l($object->name, $object->homepage, array('attributes' => array('rel' => 'nofollow')));
    }
    else {
      $output = check_plain($object->name);
    }

    $output .= ' (' . t('not verified') . ')';
  }
  else {
    $output = check_plain(variable_get('anonymous', t('Anonymous')));
  }

  return $output;
} // opensourcery_username()

