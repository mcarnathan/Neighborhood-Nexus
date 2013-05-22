<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function nn_geoblog_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'neighborhood_corner: Neighborhood Corner';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'nn_geoblog_corner';
  $fe_block_boxes->body = 'PLACEHOLDER';

  $export['nn_geoblog_corner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'neighborhood_corner: Resources';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'nn_geoblog_resources';
  $fe_block_boxes->body = 'PLACEHOLDER';

  $export['nn_geoblog_resources'] = $fe_block_boxes;

  return $export;
}
