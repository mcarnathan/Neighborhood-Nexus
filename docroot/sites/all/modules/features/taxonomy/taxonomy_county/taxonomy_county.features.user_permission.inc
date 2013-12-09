<?php
/**
 * @file
 * taxonomy_county.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function taxonomy_county_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in county'.
  $permissions['delete terms in county'] = array(
    'name' => 'delete terms in county',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in county'.
  $permissions['edit terms in county'] = array(
    'name' => 'edit terms in county',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
