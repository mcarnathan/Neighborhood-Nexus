<?php
/**
 * @file
 * menu_neighborhood_corner_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_neighborhood_corner_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-neighborhood-corner-admin:node/add/story
  $menu_links['menu-neighborhood-corner-admin:node/add/story'] = array(
    'menu_name' => 'menu-neighborhood-corner-admin',
    'link_path' => 'node/add/story',
    'router_path' => 'node/add/story',
    'link_title' => 'Create a story',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-neighborhood-corner-admin:user
  $menu_links['menu-neighborhood-corner-admin:user'] = array(
    'menu_name' => 'menu-neighborhood-corner-admin',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-neighborhood-corner-admin:user/logout
  $menu_links['menu-neighborhood-corner-admin:user/logout'] = array(
    'menu_name' => 'menu-neighborhood-corner-admin',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create a story');
  t('Log out');
  t('My account');


  return $menu_links;
}
