<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nn_geoblog_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access display suite
  $permissions['access display suite'] = array(
    'name' => 'access display suite',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer comment notify
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer janrain engage
  $permissions['administer janrain engage'] = array(
    'name' => 'administer janrain engage',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer nd
  $permissions['administer nd'] = array(
    'name' => 'administer nd',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer styles
  $permissions['administer styles'] = array(
    'name' => 'administer styles',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: configure layout for nd
  $permissions['configure layout for nd'] = array(
    'name' => 'configure layout for nd',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: create story content
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any story content
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete own story content
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit any story content
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit own story content
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: export and import settings
  $permissions['export and import settings'] = array(
    'name' => 'export and import settings',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: manage own identities
  $permissions['manage own identities'] = array(
    'name' => 'manage own identities',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: revert overridden settings
  $permissions['revert overridden settings'] = array(
    'name' => 'revert overridden settings',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to comments
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: upload files
  $permissions['upload files'] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: use PHP in custom fields
  $permissions['use PHP in custom fields'] = array(
    'name' => 'use PHP in custom fields',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view imagecache story_teaser_thumbnail
  $permissions['view imagecache story_teaser_thumbnail'] = array(
    'name' => 'view imagecache story_teaser_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache story_thumbnail
  $permissions['view imagecache story_thumbnail'] = array(
    'name' => 'view imagecache story_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache user_image
  $permissions['view imagecache user_image'] = array(
    'name' => 'view imagecache user_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache user_thumbnail
  $permissions['view imagecache user_thumbnail'] = array(
    'name' => 'view imagecache user_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view uploaded files
  $permissions['view uploaded files'] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  return $permissions;
}
