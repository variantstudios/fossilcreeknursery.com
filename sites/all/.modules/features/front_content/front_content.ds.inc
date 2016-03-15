<?php
/**
 * @file
 * front_content.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function front_content_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|home_teaser_blog';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'home_teaser_blog';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h5',
        'class' => 'list-title',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read More',
        'wrapper' => 'div',
        'class' => 'read-more-btn',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_article_list',
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'post-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|blog_post|home_teaser_blog'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_blocks|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_blocks';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'read-more-btn',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_call_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|front_blocks|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function front_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|home_teaser_blog';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'home_teaser_blog';
  $ds_layout->layout = 'article_list';
  $ds_layout->settings = array(
    'regions' => array(
      'contentheader' => array(
        0 => 'post_date',
        1 => 'title',
      ),
      'contentsection' => array(
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'post_date' => 'contentheader',
      'title' => 'contentheader',
      'body' => 'contentsection',
      'node_link' => 'contentsection',
    ),
    'classes' => array(),
    'wrappers' => array(
      'thumbnailsection' => 'div',
      'contentheader' => 'div',
      'contentsection' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|blog_post|home_teaser_blog'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_blocks|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_blocks';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_home_images',
        1 => 'title',
        2 => 'field_call_description',
        3 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_home_images' => 'ds_content',
      'title' => 'ds_content',
      'field_call_description' => 'ds_content',
      'field_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|front_blocks|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function front_content_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'home_teaser_blog';
  $ds_view_mode->label = 'Home Teaser Blog';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['home_teaser_blog'] = $ds_view_mode;

  return $export;
}
