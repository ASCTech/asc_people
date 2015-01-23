<?php
/**
 * @file
 * asc_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asc_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'asc_people';
  $view->description = 'Views for People Content Type';
  $view->tag = 'ASC';
  $view->base_table = 'node';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['css_class'] = 'features-list features';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '+';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No People';
  $handler->display->display_options['empty']['area']['content'] = 'Please check back for more people!';
  $handler->display->display_options['empty']['area']['format'] = 'html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Last Name (field_asc_people_last_name) */
  $handler->display->display_options['sorts']['field_asc_people_last_name_value']['id'] = 'field_asc_people_last_name_value';
  $handler->display->display_options['sorts']['field_asc_people_last_name_value']['table'] = 'field_data_field_asc_people_last_name';
  $handler->display->display_options['sorts']['field_asc_people_last_name_value']['field'] = 'field_asc_people_last_name_value';
  /* Sort criterion: Content: First Name (field_asc_people_first_name) */
  $handler->display->display_options['sorts']['field_asc_people_first_name_value']['id'] = 'field_asc_people_first_name_value';
  $handler->display->display_options['sorts']['field_asc_people_first_name_value']['table'] = 'field_data_field_asc_people_first_name';
  $handler->display->display_options['sorts']['field_asc_people_first_name_value']['field'] = 'field_asc_people_first_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_people' => 'asc_people',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'people_page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_people_terms_1_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_asc_people_picture' => 'field_asc_people_picture',
    'field_asc_people_first_name' => 'title',
    'title' => 'title',
    'field_asc_people_title' => 'title',
    'field_asc_people_phone' => 'title',
    'field_asc_people_email' => 'title',
    'field_asc_areas_of_expertise' => 'field_asc_areas_of_expertise',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asc_people_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asc_people_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_asc_people_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asc_people_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_asc_people_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asc_areas_of_expertise' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<a class="[title_1]"></a>';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_asc_people_picture']['id'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['table'] = 'field_data_field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['field'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_picture']['type'] = 'opic_p100';
  /* Field: Content: asc_people_picture_override */
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['id'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['table'] = 'field_data_field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['field'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['settings'] = array(
    'image_style' => '100px_portrait',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_asc_people_picture]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<p>[field_asc_people_picture_overrid]</p>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: First Nam (hidden) */
  $handler->display->display_options['fields']['field_asc_people_first_name']['id'] = 'field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['table'] = 'field_data_field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['field'] = 'field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['ui_name'] = 'First Nam (hidden)';
  $handler->display->display_options['fields']['field_asc_people_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_first_name']['element_label_colon'] = FALSE;
  /* Field: First + Last Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'First + Last Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_asc_people_first_name] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Position TItle */
  $handler->display->display_options['fields']['field_asc_people_title']['id'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['table'] = 'field_data_field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['field'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['ui_name'] = 'Position TItle';
  $handler->display->display_options['fields']['field_asc_people_title']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_title']['alter']['max_length'] = '39';
  $handler->display->display_options['fields']['field_asc_people_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_title']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_asc_people_phone']['id'] = 'field_asc_people_phone';
  $handler->display->display_options['fields']['field_asc_people_phone']['table'] = 'field_data_field_asc_people_phone';
  $handler->display->display_options['fields']['field_asc_people_phone']['field'] = 'field_asc_people_phone';
  $handler->display->display_options['fields']['field_asc_people_phone']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_asc_people_email']['id'] = 'field_asc_people_email';
  $handler->display->display_options['fields']['field_asc_people_email']['table'] = 'field_data_field_asc_people_email';
  $handler->display->display_options['fields']['field_asc_people_email']['field'] = 'field_asc_people_email';
  $handler->display->display_options['fields']['field_asc_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_email']['element_label_colon'] = FALSE;
  /* Field: Content: Areas of Expertise */
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['id'] = 'field_asc_areas_of_expertise';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['table'] = 'field_data_field_asc_areas_of_expertise';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['field'] = 'field_asc_areas_of_expertise';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asc_areas_of_expertise']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_people' => 'asc_people',
  );
  /* Filter criterion: Content: Appointments (field_people_terms_1) */
  $handler->display->display_options['filters']['field_people_terms_1_tid']['id'] = 'field_people_terms_1_tid';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['table'] = 'field_data_field_people_terms_1';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['field'] = 'field_people_terms_1_tid';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_terms_1_tid']['expose']['operator_id'] = 'field_people_terms_1_tid_op';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['expose']['label'] = 'Appointments';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['expose']['operator'] = 'field_people_terms_1_tid_op';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['expose']['identifier'] = 'field_people_terms_1_tid';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_people_terms_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_people_terms_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_terms_1_tid']['vocabulary'] = 'people_terms_1';
  $handler->display->display_options['path'] = 'directory';

  /* Display: Small Feature */
  $handler = $view->new_display('block', 'Small Feature', 'people_block_small');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'features-list features';
  $handler->display->display_options['display_description'] = 'Feature with people listed vertically.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_asc_people_picture']['id'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['table'] = 'field_data_field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['field'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_picture']['type'] = 'opic_p100';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_asc_people_first_name']['id'] = 'field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['table'] = 'field_data_field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['field'] = 'field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_asc_people_first_name] [title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_asc_people_title']['id'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['table'] = 'field_data_field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['field'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_asc_people_title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_people' => 'asc_people',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Display on Front Page (field_opic_exists) */
  $handler->display->display_options['filters']['field_opic_exists_value']['id'] = 'field_opic_exists_value';
  $handler->display->display_options['filters']['field_opic_exists_value']['table'] = 'field_data_field_opic_exists';
  $handler->display->display_options['filters']['field_opic_exists_value']['field'] = 'field_opic_exists_value';
  $handler->display->display_options['filters']['field_opic_exists_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'People Feature Small';

  /* Display: Large Feature */
  $handler = $view->new_display('block', 'Large Feature', 'people_block_large');
  $handler->display->display_options['display_description'] = 'Large Feature for Front Page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_asc_people_picture']['id'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['table'] = 'field_data_field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['field'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_picture']['type'] = 'opic_p100';
  /* Field: Content: asc_people_picture_override */
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['id'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['table'] = 'field_data_field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['field'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['settings'] = array(
    'image_style' => '100px_portrait',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<p>[field_asc_people_picture_overrid]</p>';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_asc_people_picture]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_asc_people_first_name']['id'] = 'field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['table'] = 'field_data_field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['field'] = 'field_asc_people_first_name';
  $handler->display->display_options['fields']['field_asc_people_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_asc_people_last_name']['id'] = 'field_asc_people_last_name';
  $handler->display->display_options['fields']['field_asc_people_last_name']['table'] = 'field_data_field_asc_people_last_name';
  $handler->display->display_options['fields']['field_asc_people_last_name']['field'] = 'field_asc_people_last_name';
  $handler->display->display_options['fields']['field_asc_people_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_last_name']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_asc_people_first_name]<br>[field_asc_people_last_name]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_asc_people_title']['id'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['table'] = 'field_data_field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['field'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_people' => 'asc_people',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Picture (field_asc_people_picture) */
  $handler->display->display_options['filters']['field_asc_people_picture_opic']['id'] = 'field_asc_people_picture_opic';
  $handler->display->display_options['filters']['field_asc_people_picture_opic']['table'] = 'field_data_field_asc_people_picture';
  $handler->display->display_options['filters']['field_asc_people_picture_opic']['field'] = 'field_asc_people_picture_opic';
  $handler->display->display_options['filters']['field_asc_people_picture_opic']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_asc_people_picture_opic']['value'] = 'brutus.0';
  $handler->display->display_options['filters']['field_asc_people_picture_opic']['group'] = 2;
  /* Filter criterion: Content: asc_people_picture_override (field_asc_people_picture_overrid:fid) */
  $handler->display->display_options['filters']['field_asc_people_picture_overrid_fid']['id'] = 'field_asc_people_picture_overrid_fid';
  $handler->display->display_options['filters']['field_asc_people_picture_overrid_fid']['table'] = 'field_data_field_asc_people_picture_overrid';
  $handler->display->display_options['filters']['field_asc_people_picture_overrid_fid']['field'] = 'field_asc_people_picture_overrid_fid';
  $handler->display->display_options['filters']['field_asc_people_picture_overrid_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_asc_people_picture_overrid_fid']['group'] = 2;
  $handler->display->display_options['block_description'] = 'People Feature Large';

  /* Display: Bio Sidebar */
  $handler = $view->new_display('block', 'Bio Sidebar', 'asc_bio_sidebar_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '+';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_asc_people_picture']['id'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['table'] = 'field_data_field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['field'] = 'field_asc_people_picture';
  $handler->display->display_options['fields']['field_asc_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_picture']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_asc_people_email']['id'] = 'field_asc_people_email';
  $handler->display->display_options['fields']['field_asc_people_email']['table'] = 'field_data_field_asc_people_email';
  $handler->display->display_options['fields']['field_asc_people_email']['field'] = 'field_asc_people_email';
  $handler->display->display_options['fields']['field_asc_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_asc_people_phone']['id'] = 'field_asc_people_phone';
  $handler->display->display_options['fields']['field_asc_people_phone']['table'] = 'field_data_field_asc_people_phone';
  $handler->display->display_options['fields']['field_asc_people_phone']['field'] = 'field_asc_people_phone';
  $handler->display->display_options['fields']['field_asc_people_phone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_asc_people_fax']['id'] = 'field_asc_people_fax';
  $handler->display->display_options['fields']['field_asc_people_fax']['table'] = 'field_data_field_asc_people_fax';
  $handler->display->display_options['fields']['field_asc_people_fax']['field'] = 'field_asc_people_fax';
  $handler->display->display_options['fields']['field_asc_people_fax']['hide_empty'] = TRUE;
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_asc_people_office_address']['id'] = 'field_asc_people_office_address';
  $handler->display->display_options['fields']['field_asc_people_office_address']['table'] = 'field_data_field_asc_people_office_address';
  $handler->display->display_options['fields']['field_asc_people_office_address']['field'] = 'field_asc_people_office_address';
  $handler->display->display_options['fields']['field_asc_people_office_address']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_office_address']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_office_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_office_address']['hide_empty'] = TRUE;
  /* Field: Content: Website Link */
  $handler->display->display_options['fields']['field_asc_people_website_link']['id'] = 'field_asc_people_website_link';
  $handler->display->display_options['fields']['field_asc_people_website_link']['table'] = 'field_data_field_asc_people_website_link';
  $handler->display->display_options['fields']['field_asc_people_website_link']['field'] = 'field_asc_people_website_link';
  $handler->display->display_options['fields']['field_asc_people_website_link']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_website_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_website_link']['click_sort_column'] = 'url';
  /* Field: Content: asc_people_picture_override */
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['id'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['table'] = 'field_data_field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['field'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asc_people_picture_overrid']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_asc_people_picture_overrid';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_asc_people_picture]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_asc_people_picture_overrid]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Bio Sidebar';
  $translatables['asc_people'] = array(
    t('Master'),
    t('People'),
    t('+'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('No People'),
    t('Please check back for more people!'),
    t('Page'),
    t('more'),
    t('<a class="[title_1]"></a>'),
    t('[field_asc_people_first_name] [title]'),
    t('All'),
    t('Appointments'),
    t('Small Feature'),
    t('Feature with people listed vertically.'),
    t('People Feature Small'),
    t('Large Feature'),
    t('Large Feature for Front Page'),
    t('[field_asc_people_first_name]<br>[field_asc_people_last_name]'),
    t('People Feature Large'),
    t('Bio Sidebar'),
    t('Phone'),
    t('Fax'),
  );
  $export['asc_people'] = $view;

  return $export;
}
