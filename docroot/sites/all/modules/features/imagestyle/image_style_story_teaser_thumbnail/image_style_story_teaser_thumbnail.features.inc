<?php
/**
 * @file
 * image_style_story_teaser_thumbnail.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_story_teaser_thumbnail_image_default_styles() {
  $styles = array();

  // Exported image style: story_teaser_thumbnail.
  $styles['story_teaser_thumbnail'] = array(
    'name' => 'story_teaser_thumbnail',
    'label' => 'Story teaser thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 113,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
