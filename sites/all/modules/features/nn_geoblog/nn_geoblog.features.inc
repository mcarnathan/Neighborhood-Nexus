<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function nn_geoblog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function nn_geoblog_imagecache_default_presets() {
  $items = array(
    'story_teaser_thumbnail' => array(
      'presetname' => 'story_teaser_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '113',
          ),
        ),
      ),
    ),
    'story_thumbnail' => array(
      'presetname' => 'story_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '220',
            'height' => '165',
          ),
        ),
      ),
    ),
    'user_image' => array(
      'presetname' => 'user_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '85',
            'height' => '85',
          ),
        ),
      ),
    ),
    'user_thumbnail' => array(
      'presetname' => 'user_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '40',
            'height' => '40',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function nn_geoblog_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Story'),
      'module' => 'features',
      'description' => t('Stories allow users to post geographically tagged information, photos, videos and more.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Tell Your Story'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function nn_geoblog_views_api() {
  return array(
    'api' => '2',
  );
}
