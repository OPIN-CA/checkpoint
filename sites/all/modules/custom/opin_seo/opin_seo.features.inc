<?php
/**
 * @file
 * opin_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opin_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}