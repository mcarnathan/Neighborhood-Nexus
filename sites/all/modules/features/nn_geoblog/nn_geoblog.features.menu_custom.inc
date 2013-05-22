<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function nn_geoblog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-user-admin
  $menus['menu-user-admin'] = array(
    'menu_name' => 'menu-user-admin',
    'title' => 'User Admin',
    'description' => 'User admin menu contains contextual login/out and account links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('User Admin');
  t('User admin menu contains contextual login/out and account links');


  return $menus;
}
