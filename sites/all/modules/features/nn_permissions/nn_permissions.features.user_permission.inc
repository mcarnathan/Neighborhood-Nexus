<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nn_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access fckeditor
  $permissions['access fckeditor'] = array(
    'name' => 'access fckeditor',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: access protected content
  $permissions['access protected content'] = array(
    'name' => 'access protected content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'web admin',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer custom content
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer fckeditor
  $permissions['administer fckeditor'] = array(
    'name' => 'administer fckeditor',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer newsletters
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer pane visibility
  $permissions['administer pane visibility'] = array(
    'name' => 'administer pane visibility',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer quicktabs
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer sections
  $permissions['administer sections'] = array(
    'name' => 'administer sections',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer simplenews settings
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer simplenews subscriptions
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: allow fckeditor file uploads
  $permissions['allow fckeditor file uploads'] = array(
    'name' => 'allow fckeditor file uploads',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: assign all roles
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: assign node theme
  $permissions['assign node theme'] = array(
    'name' => 'assign node theme',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: assign site editor role
  $permissions['assign site editor role'] = array(
    'name' => 'assign site editor role',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: assign web admin role
  $permissions['assign web admin role'] = array(
    'name' => 'assign web admin role',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: bypass password protection
  $permissions['bypass password protection'] = array(
    'name' => 'bypass password protection',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(),
  );

  // Exported permission: create banner content
  $permissions['create banner content'] = array(
    'name' => 'create banner content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: create report content
  $permissions['create report content'] = array(
    'name' => 'create report content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: create simplenews content
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete any banner content
  $permissions['delete any banner content'] = array(
    'name' => 'delete any banner content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete any report content
  $permissions['delete any report content'] = array(
    'name' => 'delete any report content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete any simplenews content
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete own banner content
  $permissions['delete own banner content'] = array(
    'name' => 'delete own banner content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete own report content
  $permissions['delete own report content'] = array(
    'name' => 'delete own report content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete own simplenews content
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit any banner content
  $permissions['edit any banner content'] = array(
    'name' => 'edit any banner content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit any report content
  $permissions['edit any report content'] = array(
    'name' => 'edit any report content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit any simplenews content
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit own banner content
  $permissions['edit own banner content'] = array(
    'name' => 'edit own banner content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit own report content
  $permissions['edit own report content'] = array(
    'name' => 'edit own report content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit own simplenews content
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit protected banner
  $permissions['edit protected banner'] = array(
    'name' => 'edit protected banner',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit protected content
  $permissions['edit protected content'] = array(
    'name' => 'edit protected content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit protected page
  $permissions['edit protected page'] = array(
    'name' => 'edit protected page',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit protected panel
  $permissions['edit protected panel'] = array(
    'name' => 'edit protected panel',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit protected report
  $permissions['edit protected report'] = array(
    'name' => 'edit protected report',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit protected simplenews
  $permissions['edit protected simplenews'] = array(
    'name' => 'edit protected simplenews',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit protected story
  $permissions['edit protected story'] = array(
    'name' => 'edit protected story',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: manage nexus
  $permissions['manage nexus'] = array(
    'name' => 'manage nexus',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: manage nexus indicators
  $permissions['manage nexus indicators'] = array(
    'name' => 'manage nexus indicators',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: send newsletter
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to newsletters
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: upload nexus xls data
  $permissions['upload nexus xls data'] = array(
    'name' => 'upload nexus xls data',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: view all panes
  $permissions['view all panes'] = array(
    'name' => 'view all panes',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: view imagecache banner_full
  $permissions['view imagecache banner_full'] = array(
    'name' => 'view imagecache banner_full',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache banner_thumb
  $permissions['view imagecache banner_thumb'] = array(
    'name' => 'view imagecache banner_thumb',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view nexus reports
  $permissions['view nexus reports'] = array(
    'name' => 'view nexus reports',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  return $permissions;
}
