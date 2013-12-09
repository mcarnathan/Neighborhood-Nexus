<?php
/**
 * @file
 * ct_report.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_report_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create report content'.
  $permissions['create report content'] = array(
    'name' => 'create report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any report content'.
  $permissions['delete any report content'] = array(
    'name' => 'delete any report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own report content'.
  $permissions['delete own report content'] = array(
    'name' => 'delete own report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any report content'.
  $permissions['edit any report content'] = array(
    'name' => 'edit any report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own report content'.
  $permissions['edit own report content'] = array(
    'name' => 'edit own report content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
