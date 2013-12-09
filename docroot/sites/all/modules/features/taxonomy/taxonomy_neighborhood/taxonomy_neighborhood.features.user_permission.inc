<?php
/**
 * @file
 * taxonomy_neighborhood.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function taxonomy_neighborhood_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in neighborhood'.
  $permissions['delete terms in neighborhood'] = array(
    'name' => 'delete terms in neighborhood',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in neighborhood'.
  $permissions['edit terms in neighborhood'] = array(
    'name' => 'edit terms in neighborhood',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
