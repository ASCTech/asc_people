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

  $export['version'] = '2.0';

  $export['asc_taxonomy_filter-people_terms_1'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'people_terms_1',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'directory*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-37',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['asc_taxonomy_filter-people_terms_2'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'people_terms_2',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'directory*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-33',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['asc_taxonomy_filter-people_terms_3'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'people_terms_3',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'directory*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-32',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-30af6a75d77fa7425d6fce7809330acd'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '30af6a75d77fa7425d6fce7809330acd',
    'module' => 'views',
    'node_types' => array(
      0 => 'delta',
      1 => 'module',
      2 => 'node_type',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-29',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-asc_people-people_block_large'] = array(
    'cache' => -1,
    'css_class' => 'feature-whole',
    'custom' => '0',
    'delta' => 'asc_people-people_block_large',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'preface_first',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-28',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-asc_people-people_block_small'] = array(
    'cache' => -1,
    'css_class' => 'feature-half',
    'custom' => '0',
    'delta' => 'asc_people-people_block_small',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'preface_second',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-16',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
