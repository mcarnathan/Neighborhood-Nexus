<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function nn_geoblog_default_fe_block_settings() {
  $export = array();

  // opensourcery
  $theme = array();

  $theme['block-nn_geoblog_corner'] = array(
    'module' => 'block',
    'theme' => 'opensourcery',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Neighborhood Corner',
    'cache' => '-1',
    'machine_name' => 'nn_geoblog_corner',
  );

  $theme['block-nn_geoblog_resources'] = array(
    'module' => 'block',
    'theme' => 'opensourcery',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Resources',
    'cache' => '-1',
    'machine_name' => 'nn_geoblog_resources',
  );

  $export['opensourcery'] = $theme;

  // simply_modern
  $theme = array();

  $theme['block-nn_geoblog_corner'] = array(
    'module' => 'block',
    'theme' => 'simply_modern',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Neighborhood Corner',
    'cache' => '-1',
    'machine_name' => 'nn_geoblog_corner',
  );

  $theme['block-nn_geoblog_resources'] = array(
    'module' => 'block',
    'theme' => 'simply_modern',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Resources',
    'cache' => '-1',
    'machine_name' => 'nn_geoblog_resources',
  );

  $export['simply_modern'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
