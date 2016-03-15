<?php
/**
 * @file
 * fossil_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fossil_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_article_fn',
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'sub-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_header_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|blog_post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
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
        'link text' => 'View Article',
        'wrapper' => 'div',
        'class' => 'read-more-btn',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_article_list',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'post-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_header_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|blog_post|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fossil_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'static_page';
  $ds_layout->settings = array(
    'regions' => array(
      'headersection' => array(
        0 => 'title',
        1 => 'post_date',
      ),
      'contentsection' => array(
        2 => 'body',
      ),
      'sidebarsection' => array(
        3 => 'field_header_image',
      ),
    ),
    'fields' => array(
      'title' => 'headersection',
      'post_date' => 'headersection',
      'body' => 'contentsection',
      'field_header_image' => 'sidebarsection',
    ),
    'classes' => array(),
    'wrappers' => array(
      'headersection' => 'div',
      'contentsection' => 'div',
      'sidebarsection' => 'div',
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
  $export['node|blog_post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'article_list';
  $ds_layout->settings = array(
    'regions' => array(
      'thumbnailsection' => array(
        0 => 'field_header_image',
      ),
      'contentheader' => array(
        1 => 'title',
        2 => 'post_date',
      ),
      'contentsection' => array(
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_header_image' => 'thumbnailsection',
      'title' => 'contentheader',
      'post_date' => 'contentheader',
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
  $export['node|blog_post|teaser'] = $ds_layout;

  return $export;
}
