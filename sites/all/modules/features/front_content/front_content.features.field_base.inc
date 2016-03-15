<?php
/**
 * @file
 * front_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function front_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_call_description'
  $field_bases['field_call_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_call_description',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
