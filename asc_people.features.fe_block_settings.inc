<?php
/**
 * @file
 * asc_people.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_people_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'asc_taxonomy_filter-people_terms_1' => array(
      'delta' => 'people_terms_1',
      'module' => 'asc_taxonomy_filter',
    ),
    'asc_taxonomy_filter-people_terms_2' => array(
      'delta' => 'people_terms_2',
      'module' => 'asc_taxonomy_filter',
    ),
    'asc_taxonomy_filter-people_terms_3' => array(
      'delta' => 'people_terms_3',
      'module' => 'asc_taxonomy_filter',
    ),
    'views-30af6a75d77fa7425d6fce7809330acd' => array(
      'delta' => '30af6a75d77fa7425d6fce7809330acd',
      'module' => 'views',
      'node_type' => array(
        'asc_people' => TRUE,
      ),
    ),
    'views-asc_people-people_block_large' => array(
      'delta' => 'asc_people-people_block_large',
      'module' => 'views',
    ),
    'views-asc_people-people_block_small' => array(
      'delta' => 'asc_people-people_block_small',
      'module' => 'views',
    ),
  );

  // q7
  $theme = array();

  $theme['asc_taxonomy_filter-people_terms_1'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'people_terms_1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-18',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'directory*',
    'title' => '',
    'cache' => '1',
  );

  $theme['asc_taxonomy_filter-people_terms_2'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'people_terms_2',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-18',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'directory*',
    'title' => '',
    'cache' => '1',
  );

  $theme['asc_taxonomy_filter-people_terms_3'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'people_terms_3',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-17',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'directory*',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-30af6a75d77fa7425d6fce7809330acd'] = array(
    'module' => 'views',
    'delta' => '30af6a75d77fa7425d6fce7809330acd',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-13',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_people-people_block_large'] = array(
    'module' => 'views',
    'delta' => 'asc_people-people_block_large',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-19',
    'region' => 'preface_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_people-people_block_small'] = array(
    'module' => 'views',
    'delta' => 'asc_people-people_block_small',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
