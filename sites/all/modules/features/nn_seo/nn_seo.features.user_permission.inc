<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nn_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: access seochecklist content
  $permissions['access seochecklist content'] = array(
    'name' => 'access seochecklist content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer page titles
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit canonical URL meta tag
  $permissions['edit canonical URL meta tag'] = array(
    'name' => 'edit canonical URL meta tag',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit meta tag ABSTRACT
  $permissions['edit meta tag ABSTRACT'] = array(
    'name' => 'edit meta tag ABSTRACT',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit meta tag COPYRIGHT
  $permissions['edit meta tag COPYRIGHT'] = array(
    'name' => 'edit meta tag COPYRIGHT',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit meta tag DESCRIPTION
  $permissions['edit meta tag DESCRIPTION'] = array(
    'name' => 'edit meta tag DESCRIPTION',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit meta tag KEYWORDS
  $permissions['edit meta tag KEYWORDS'] = array(
    'name' => 'edit meta tag KEYWORDS',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit meta tag REVISIT-AFTER
  $permissions['edit meta tag REVISIT-AFTER'] = array(
    'name' => 'edit meta tag REVISIT-AFTER',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit meta tag ROBOTS
  $permissions['edit meta tag ROBOTS'] = array(
    'name' => 'edit meta tag ROBOTS',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: set page title
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  return $permissions;
}
