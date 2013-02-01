<?php
/**
 * @file
 * asc_people.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_people_user_default_permissions() {
  $permissions = array();

  // Exported permission: create asc_people content.
  $permissions['create asc_people content'] = array(
    'name' => 'create asc_people content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any asc_people content.
  $permissions['delete any asc_people content'] = array(
    'name' => 'delete any asc_people content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_people content.
  $permissions['delete own asc_people content'] = array(
    'name' => 'delete own asc_people content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any asc_people content.
  $permissions['edit any asc_people content'] = array(
    'name' => 'edit any asc_people content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_people content.
  $permissions['edit own asc_people content'] = array(
    'name' => 'edit own asc_people content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
