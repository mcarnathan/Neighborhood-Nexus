<?php
/**
 * @file
 * linkit_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linkit_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
