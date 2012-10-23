<?php
/**
 * @file
 * asc_people.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function asc_people_block_class_features_default_class() {
  return array(
    0 => array(
      'module' => 'views',
      'delta' => 'asc_people-people_block_large',
      'css_classes' => 'feature-whole',
    ),
    1 => array(
      'module' => 'views',
      'delta' => 'asc_people-people_block_small',
      'css_classes' => 'feature-half',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_people_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_people_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_config_features_default_settings().
 */
function asc_people_custom_breadcrumbs_config_features_default_settings() {
  $custom_breadcrumbs_configs = array();

  $custom_breadcrumbs_configs[] = array(
    'asc_people-1024830811' => array(),
  );
  return $custom_breadcrumbs_configs;
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
