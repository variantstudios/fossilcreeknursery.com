<?php
/**
 * @file
 * fossil_header_images.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fossil_header_images_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'header_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
    'header_images' => 'header_images',
  );

  /* Display: Home Slider */
  $handler = $view->new_display('block', 'Home Slider', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_home_images']['id'] = 'field_home_images';
  $handler->display->display_options['fields']['field_home_images']['table'] = 'field_data_field_home_images';
  $handler->display->display_options['fields']['field_home_images']['field'] = 'field_home_images';
  $handler->display->display_options['fields']['field_home_images']['label'] = '';
  $handler->display->display_options['fields']['field_home_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_home_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_images']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_home_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_home_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_home_images']['type'] = 'backstretch';
  $handler->display->display_options['fields']['field_home_images']['settings'] = array(
    'image_style' => '',
    'element' => 'other',
    'element_other' => '.header--image--section',
    'duration' => '5000',
    'fade' => '500',
    'delta' => '',
    'center_x' => 1,
    'center_y' => 1,
  );
  $handler->display->display_options['fields']['field_home_images']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_home_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_home_images']['field_api_classes'] = TRUE;

  /* Display: About Header Image */
  $handler = $view->new_display('block', 'About Header Image', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About Header Image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: About Images */
  $handler->display->display_options['fields']['field_about_images']['id'] = 'field_about_images';
  $handler->display->display_options['fields']['field_about_images']['table'] = 'field_data_field_about_images';
  $handler->display->display_options['fields']['field_about_images']['field'] = 'field_about_images';
  $handler->display->display_options['fields']['field_about_images']['label'] = '';
  $handler->display->display_options['fields']['field_about_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_about_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_about_images']['type'] = 'backstretch';
  $handler->display->display_options['fields']['field_about_images']['settings'] = array(
    'image_style' => '',
    'element' => 'other',
    'element_other' => '.header--image--section',
    'duration' => 5000,
    'fade' => '0',
    'center_x' => 1,
    'center_y' => 1,
  );

  /* Display: Blog Header Image */
  $handler = $view->new_display('block', 'Blog Header Image', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog Header Image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Blog Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['type'] = 'backstretch';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => '',
    'element' => 'other',
    'element_other' => '.header--image--section',
    'duration' => 5000,
    'fade' => '500',
    'center_x' => 1,
    'center_y' => 1,
  );

  /* Display: Services Header Image */
  $handler = $view->new_display('block', 'Services Header Image', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services Header Image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Services Image */
  $handler->display->display_options['fields']['field_services_image']['id'] = 'field_services_image';
  $handler->display->display_options['fields']['field_services_image']['table'] = 'field_data_field_services_image';
  $handler->display->display_options['fields']['field_services_image']['field'] = 'field_services_image';
  $handler->display->display_options['fields']['field_services_image']['label'] = '';
  $handler->display->display_options['fields']['field_services_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_services_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_services_image']['type'] = 'backstretch';
  $handler->display->display_options['fields']['field_services_image']['settings'] = array(
    'image_style' => '',
    'element' => 'other',
    'element_other' => '.header--image--section',
    'duration' => 5000,
    'fade' => '500',
    'center_x' => 1,
    'center_y' => 1,
  );

  /* Display: Store Header Image */
  $handler = $view->new_display('block', 'Store Header Image', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Store Header Image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Store Images */
  $handler->display->display_options['fields']['field_store_images']['id'] = 'field_store_images';
  $handler->display->display_options['fields']['field_store_images']['table'] = 'field_data_field_store_images';
  $handler->display->display_options['fields']['field_store_images']['field'] = 'field_store_images';
  $handler->display->display_options['fields']['field_store_images']['label'] = '';
  $handler->display->display_options['fields']['field_store_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_store_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_store_images']['type'] = 'backstretch';
  $handler->display->display_options['fields']['field_store_images']['settings'] = array(
    'image_style' => '',
    'element' => 'other',
    'element_other' => '.header--image--section',
    'duration' => 5000,
    'fade' => '500',
    'center_x' => 1,
    'center_y' => 1,
  );
  $export['header_images'] = $view;

  return $export;
}
