<?php
/**
 * @file
 * store.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function store_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|product|default';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'product_images' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_usda_hardiness_zone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_flower_color' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_mature_height' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_spread' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_bloom_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_fruit' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_size_class' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_fall_color' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_exposure' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_moisture_require' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_habit' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_manufacturer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_model' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_size' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_weight' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_color' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_organic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_product_color_foliage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_scientific_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'label',
          'lb-cl' => 'project-label',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['commerce_product|product|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'bareroot_products' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'product_images' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
  );
  $export['node|product|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function store_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|default';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sku',
        1 => 'title',
        2 => 'commerce_price',
        3 => 'field_usda_hardiness_zone',
        4 => 'status',
        5 => 'field_product_flower_color',
        6 => 'field_product_mature_height',
        7 => 'field_product_spread',
        8 => 'field_product_bloom_time',
        9 => 'field_product_fruit',
        10 => 'field_product_size_class',
        11 => 'field_product_fall_color',
        12 => 'field_product_exposure',
        13 => 'field_product_moisture_require',
        14 => 'field_product_images',
        15 => 'field_product_habit',
        16 => 'field_product_manufacturer',
        17 => 'field_product_model',
        18 => 'field_product_size',
        19 => 'field_product_weight',
        20 => 'field_product_color',
        21 => 'field_product_organic',
        22 => 'field_product_color_foliage',
        23 => 'field_scientific_name',
        24 => 'product_images',
      ),
    ),
    'fields' => array(
      'sku' => 'ds_content',
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_usda_hardiness_zone' => 'ds_content',
      'status' => 'ds_content',
      'field_product_flower_color' => 'ds_content',
      'field_product_mature_height' => 'ds_content',
      'field_product_spread' => 'ds_content',
      'field_product_bloom_time' => 'ds_content',
      'field_product_fruit' => 'ds_content',
      'field_product_size_class' => 'ds_content',
      'field_product_fall_color' => 'ds_content',
      'field_product_exposure' => 'ds_content',
      'field_product_moisture_require' => 'ds_content',
      'field_product_images' => 'ds_content',
      'field_product_habit' => 'ds_content',
      'field_product_manufacturer' => 'ds_content',
      'field_product_model' => 'ds_content',
      'field_product_size' => 'ds_content',
      'field_product_weight' => 'ds_content',
      'field_product_color' => 'ds_content',
      'field_product_organic' => 'ds_content',
      'field_product_color_foliage' => 'ds_content',
      'field_scientific_name' => 'ds_content',
      'product_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['commerce_product|product|default'] = $ds_layout;

  return $export;
}
