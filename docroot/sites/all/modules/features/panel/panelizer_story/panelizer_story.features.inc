<?php
/**
 * @file
 * panelizer_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panelizer_story_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
