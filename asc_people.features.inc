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
    'asc_person-1689872192' => array(
      'name' => 'People',
      'machine_name' => 'asc_person-1689872192',
      'titles' => 'People
[node:field_asc_people_first_name] [node:title]',
      'paths' => 'directory
[node:url:path]',
      'visibility_php' => '',
      'node_type' => 'asc_people',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_configs;
}


/**
 * Implements hook_custom_breadcrumbs_views_config_features_default_settings().
 */
function asc_people_custom_breadcrumbs_views_config_features_default_settings() {
  $custom_breadcrumbs_views_configs = array();

  $custom_breadcrumbs_views_configs[] = array(
    -1670042653 => array(
      'name' => 'directory',
      'machine_name' => '-1670042653',
      'titles' => 'People',
      'paths' => 'directory',
      'visibility_php' => '',
      'views_path' => 'directory',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_views_configs;
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
