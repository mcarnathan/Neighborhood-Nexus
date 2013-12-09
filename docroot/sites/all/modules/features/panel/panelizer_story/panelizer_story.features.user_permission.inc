<?php
/**
 * @file
 * panelizer_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function panelizer_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node story content'.
  $permissions['administer panelizer node story content'] = array(
    'name' => 'administer panelizer node story content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story context'.
  $permissions['administer panelizer node story context'] = array(
    'name' => 'administer panelizer node story context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story defaults'.
  $permissions['administer panelizer node story defaults'] = array(
    'name' => 'administer panelizer node story defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story layout'.
  $permissions['administer panelizer node story layout'] = array(
    'name' => 'administer panelizer node story layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story overview'.
  $permissions['administer panelizer node story overview'] = array(
    'name' => 'administer panelizer node story overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story settings'.
  $permissions['administer panelizer node story settings'] = array(
    'name' => 'administer panelizer node story settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
