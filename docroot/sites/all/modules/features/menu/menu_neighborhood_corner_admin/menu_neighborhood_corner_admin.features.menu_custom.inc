<?php
/**
 * @file
 * menu_neighborhood_corner_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_neighborhood_corner_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-neighborhood-corner-admin.
  $menus['menu-neighborhood-corner-admin'] = array(
    'menu_name' => 'menu-neighborhood-corner-admin',
    'title' => 'Neighborhood Corner Admin',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Neighborhood Corner Admin');


  return $menus;
}
