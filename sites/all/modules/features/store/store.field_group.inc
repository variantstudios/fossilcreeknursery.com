<?php
/**
 * @file
 * store.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function store_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_greengoods|commerce_product|product|form';
  $field_group->group_name = 'group_product_greengoods';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Greengoods',
    'weight' => '5',
    'children' => array(
      0 => 'field_usda_hardiness_zone',
      1 => 'field_product_flower_color',
      2 => 'field_product_mature_height',
      3 => 'field_product_spread',
      4 => 'field_product_bloom_time',
      5 => 'field_product_fruit',
      6 => 'field_product_size_class',
      7 => 'field_product_fall_color',
      8 => 'field_product_exposure',
      9 => 'field_product_moisture_require',
      10 => 'field_product_habit',
      11 => 'field_product_color_foliage',
      12 => 'field_scientific_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Greengoods',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-product-greengoods field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_product_greengoods|commerce_product|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_hardgoods|commerce_product|product|form';
  $field_group->group_name = 'group_product_hardgoods';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hardgoods',
    'weight' => '6',
    'children' => array(
      0 => 'field_product_manufacturer',
      1 => 'field_product_model',
      2 => 'field_product_size',
      3 => 'field_product_weight',
      4 => 'field_product_color',
      5 => 'field_product_organic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hardgoods',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-product-hardgoods field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_product_hardgoods|commerce_product|product|form'] = $field_group;

  return $export;
}
