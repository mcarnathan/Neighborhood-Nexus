<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function nn_geoblog_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nn_geoblog';
  $context->description = 'Adds blocks to Neighborhood Corner section of the site';
  $context->tag = 'Neighborhood Corner';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'story' => 'story',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'county/*' => 'county/*',
        'neighborhood/*' => 'neighborhood/*',
        'tags/*' => 'tags/*',
      ),
    ),
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
    'views' => array(
      'values' => array(
        'neighborhood_corner:page_1' => 'neighborhood_corner:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-user-admin' => array(
          'module' => 'menu',
          'delta' => 'menu-user-admin',
          'region' => 'content_right',
          'weight' => 0,
        ),
        'views-term_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'term_blocks-block_2',
          'region' => 'content_right',
          'weight' => 1,
        ),
        'views-term_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'term_blocks-block_1',
          'region' => 'content_right',
          'weight' => 2,
        ),
        'block-93' => array(
          'module' => 'block',
          'delta' => 93,
          'region' => 'content_right',
          'weight' => 3,
        ),
        'block-92' => array(
          'module' => 'block',
          'delta' => 92,
          'region' => 'content_right',
          'weight' => 4,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'neighborhood-corner',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds blocks to Neighborhood Corner section of the site');
  t('Neighborhood Corner');
  $export['nn_geoblog'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nn_geoblog_home';
  $context->description = 'Neighborhood corner home';
  $context->tag = 'Neighborhood Corner';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'neighborhood_corner:page_1' => 'neighborhood_corner:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-neighborhood_corner-block_2' => array(
          'module' => 'views',
          'delta' => 'neighborhood_corner-block_2',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'gmap_location-0' => array(
          'module' => 'gmap_location',
          'delta' => 0,
          'region' => 'content_left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Neighborhood Corner');
  t('Neighborhood corner home');
  $export['nn_geoblog_home'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nn_geoblog_user';
  $context->description = 'adds story list block to user page';
  $context->tag = 'Neighborhood Corner';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-neighborhood_corner-block_1' => array(
          'module' => 'views',
          'delta' => 'neighborhood_corner-block_1',
          'region' => 'content_left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Neighborhood Corner');
  t('adds story list block to user page');
  $export['nn_geoblog_user'] = $context;

  return $export;
}
