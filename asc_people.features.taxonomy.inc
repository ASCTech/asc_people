<?php
/**
 * @file
 * asc_people.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function asc_people_taxonomy_default_vocabularies() {
  return array(
    'people_terms_1' => array(
      'name' => 'Appointments',
      'machine_name' => 'people_terms_1',
      'description' => 'University Appointments',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-1',
    ),
    'people_terms_2' => array(
      'name' => 'Research Interests',
      'machine_name' => 'people_terms_2',
      'description' => 'Research Interests',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'people_terms_3' => array(
      'name' => 'Campus Location',
      'machine_name' => 'people_terms_3',
      'description' => 'Additional vocabulary for people.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '1',
    ),
  );
}
