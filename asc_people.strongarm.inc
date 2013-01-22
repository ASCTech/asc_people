<?php
/**
 * @file
 * asc_people.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_people_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_asc_people';
  $strongarm->value = '1';
  $export['ant_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_asc_people';
  $strongarm->value = '[node:field_asc_people_first_name] [node:field_asc_people_last_name]';
  $export['ant_pattern_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_asc_people';
  $strongarm->value = 0;
  $export['ant_php_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_titlelink_views_asc_people-people_block_large';
  $strongarm->value = array(
    'url' => 'directory',
    'display' => 1,
    'title' => 'People Page',
  );
  $export['block_titlelink_views_asc_people-people_block_large'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_titlelink_views_asc_people-people_block_small';
  $strongarm->value = array(
    'url' => 'directory',
    'display' => 1,
    'title' => 'People Page',
  );
  $export['block_titlelink_views_asc_people-people_block_small'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_people';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
      'front_rotor_short' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_tall' => array(
        'custom_settings' => FALSE,
      ),
      'front_text' => array(
        'custom_settings' => FALSE,
      ),
      'front_quick_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_people';
  $strongarm->value = array();
  $export['menu_options_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_people';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_people';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_people';
  $strongarm->value = '1';
  $export['node_preview_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_people';
  $strongarm->value = 0;
  $export['node_submitted_asc_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_asc_people_pattern';
  $strongarm->value = 'people/[node:field_asc_people_picture]';
  $export['pathauto_node_asc_people_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_period';
  $strongarm->value = '2';
  $export['pathauto_punctuation_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_people_terms_1_pattern';
  $strongarm->value = 'directory/filters/[term:tid]';
  $export['pathauto_taxonomy_term_people_terms_1_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_people_terms_2_pattern';
  $strongarm->value = 'directory/filters/[term:tid]';
  $export['pathauto_taxonomy_term_people_terms_2_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_people_terms_3_pattern';
  $strongarm->value = 'directory/filter/[term:tid]';
  $export['pathauto_taxonomy_term_people_terms_3_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_people_terms_1';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'people_terms_1',
    'view_name' => 'asc_people',
    'display' => 'people_page',
    'status' => 1,
  );
  $export['tvi_vocab_people_terms_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_people_terms_2';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'people_terms_2',
    'view_name' => 'asc_people',
    'display' => 'people_page',
    'status' => 1,
  );
  $export['tvi_vocab_people_terms_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_people_terms_3';
  $strongarm->value = array(
    'is_default' => FALSE,
    'type' => 'vocab',
    'xid' => 'people_terms_3',
    'view_name' => 'asc_people',
    'display' => 'people_page',
    'status' => 1,
  );
  $export['tvi_vocab_people_terms_3'] = $strongarm;

  return $export;
}
