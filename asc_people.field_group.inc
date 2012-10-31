<?php
/**
 * @file
 * asc_people.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function asc_people_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asc_people_description|node|asc_people|default';
  $field_group->group_name = 'group_asc_people_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'asc_people';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_asc_people_title',
      2 => 'field_people_terms_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_asc_people_description|node|asc_people|default'] = $field_group;

  return $export;
}
