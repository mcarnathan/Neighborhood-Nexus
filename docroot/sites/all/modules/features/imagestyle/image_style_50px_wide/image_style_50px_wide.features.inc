<?php
/**
 * @file
 * image_style_50px_wide.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_50px_wide_image_default_styles() {
  $styles = array();

  // Exported image style: 50px_wide.
  $styles['50px_wide'] = array(
    'name' => '50px_wide',
    'label' => '50px Wide',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
