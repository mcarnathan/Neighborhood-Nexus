<?php
/**
 * @file
 * mini_panel_neighborhood_corner_sidebar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mini_panel_neighborhood_corner_sidebar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
