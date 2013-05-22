<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function nn_geoblog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-user-admin:logout
  $menu_links['menu-user-admin:logout'] = array(
    'menu_name' => 'menu-user-admin',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-user-admin:node/add/story
  $menu_links['menu-user-admin:node/add/story'] = array(
    'menu_name' => 'menu-user-admin',
    'link_path' => 'node/add/story',
    'router_path' => 'node/add/story',
    'link_title' => 'Create a story',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-user-admin:user/%
  $menu_links['menu-user-admin:user/%'] = array(
    'menu_name' => 'menu-user-admin',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-user-admin:user/login
  $menu_links['menu-user-admin:user/login'] = array(
    'menu_name' => 'menu-user-admin',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-user-admin:user/password
  $menu_links['menu-user-admin:user/password'] = array(
    'menu_name' => 'menu-user-admin',
    'link_path' => 'user/password',
    'router_path' => 'user/password',
    'link_title' => 'Forgot Password',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-user-admin:user/register
  $menu_links['menu-user-admin:user/register'] = array(
    'menu_name' => 'menu-user-admin',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create Account');
  t('Create a story');
  t('Forgot Password');
  t('Log in');
  t('Log out');
  t('My account');


  return $menu_links;
}
