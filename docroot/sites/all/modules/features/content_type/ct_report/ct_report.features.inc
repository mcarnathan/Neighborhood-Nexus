<?php
/**
 * @file
 * ct_report.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_report_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ct_report_node_info() {
  $items = array(
    'report' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Report Name'),
      'help' => '',
    ),
  );
  return $items;
}
