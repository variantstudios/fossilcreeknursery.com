<?php
/**
 * @file
 * fossil_static_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fossil_static_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
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
    'field_sub_title' => array(
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
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fossil_static_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'static_page';
  $ds_layout->settings = array(
    'regions' => array(
      'headersection' => array(
        0 => 'title',
        1 => 'field_sub_title',
      ),
      'contentsection' => array(
        2 => 'body',
        3 => 'field_link',
      ),
      'sidebarsection' => array(
        4 => 'field_gallery_images',
      ),
    ),
    'fields' => array(
      'title' => 'headersection',
      'field_sub_title' => 'headersection',
      'body' => 'contentsection',
      'field_link' => 'contentsection',
      'field_gallery_images' => 'sidebarsection',
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
  $export['node|page|default'] = $ds_layout;

  return $export;
}
