<?php
/**
 * @file
 * asc_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function asc_people_node_info() {
  $items = array(
    'asc_people' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('People in your organization.'),
      'has_title' => '1',
      'title_label' => t('Last Name'),
      'help' => '',
    ),
  );
  return $items;
}
