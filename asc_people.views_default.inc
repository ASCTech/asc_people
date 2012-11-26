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
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '+';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_asc_people_picture' => 'field_asc_people_picture',
    'field_asc_people_first_name' => 'title',
    'title' => 'title',
    'field_asc_people_title' => 'title',
    'field_asc_people_phone' => 'field_asc_people_phone',
    'field_asc_people_email' => 'field_asc_people_phone',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_asc_people_first_name] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_asc_people_title']['id'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['table'] = 'field_data_field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['field'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
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
  $handler->display->display_options['fields']['field_asc_people_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_title']['element_label_colon'] = FALSE;
  /* Field: Content: Research Interests */
  $handler->display->display_options['fields']['field_people_terms_2']['id'] = 'field_people_terms_2';
  $handler->display->display_options['fields']['field_people_terms_2']['table'] = 'field_data_field_people_terms_2';
  $handler->display->display_options['fields']['field_people_terms_2']['field'] = 'field_people_terms_2';
  $handler->display->display_options['fields']['field_people_terms_2']['label'] = '';
  $handler->display->display_options['fields']['field_people_terms_2']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_people_terms_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_people_terms_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_terms_2']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_people_terms_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_people_terms_2']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_asc_people_first_name] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_asc_people_title_1']['id'] = 'field_asc_people_title_1';
  $handler->display->display_options['fields']['field_asc_people_title_1']['table'] = 'field_data_field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title_1']['field'] = 'field_asc_people_title';
  $handler->display->display_options['fields']['field_asc_people_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_title_1']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_asc_people_title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_asc_people_title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Research Interests */
  $handler->display->display_options['fields']['field_people_terms_2']['id'] = 'field_people_terms_2';
  $handler->display->display_options['fields']['field_people_terms_2']['table'] = 'field_data_field_people_terms_2';
  $handler->display->display_options['fields']['field_people_terms_2']['field'] = 'field_people_terms_2';
  $handler->display->display_options['fields']['field_people_terms_2']['label'] = '';
  $handler->display->display_options['fields']['field_people_terms_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_terms_2']['type'] = 'ds_taxonomy_separator';
  $handler->display->display_options['fields']['field_people_terms_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_people_terms_2']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_asc_people_phone']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_phone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_asc_people_fax']['id'] = 'field_asc_people_fax';
  $handler->display->display_options['fields']['field_asc_people_fax']['table'] = 'field_data_field_asc_people_fax';
  $handler->display->display_options['fields']['field_asc_people_fax']['field'] = 'field_asc_people_fax';
  $handler->display->display_options['fields']['field_asc_people_fax']['label'] = '';
  $handler->display->display_options['fields']['field_asc_people_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asc_people_fax']['hide_empty'] = TRUE;
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_asc_people_office_address']['id'] = 'field_asc_people_office_address';
  $handler->display->display_options['fields']['field_asc_people_office_address']['table'] = 'field_data_field_asc_people_office_address';
  $handler->display->display_options['fields']['field_asc_people_office_address']['field'] = 'field_asc_people_office_address';
  $handler->display->display_options['fields']['field_asc_people_office_address']['label'] = '';
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
  $export['asc_people'] = $view;

  return $export;
}
