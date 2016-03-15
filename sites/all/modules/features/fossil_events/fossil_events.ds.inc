<?php
/**
 * @file
 * fossil_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fossil_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
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
    'field_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'When',
          'lb-el' => 'label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-detail',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Where',
          'lb-el' => 'label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-detail',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fossil_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'static_page';
  $ds_layout->settings = array(
    'regions' => array(
      'contentsection' => array(
        0 => 'field_date',
        2 => 'field_event_location',
        3 => 'body',
      ),
      'headersection' => array(
        1 => 'title',
      ),
      'sidebarsection' => array(
        4 => 'signup',
      ),
    ),
    'fields' => array(
      'field_date' => 'contentsection',
      'title' => 'headersection',
      'field_event_location' => 'contentsection',
      'body' => 'contentsection',
      'signup' => 'sidebarsection',
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
  $export['node|event|default'] = $ds_layout;

  return $export;
}
