<?php
/**
 * @file
 * store_config.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function store_config_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'custom_2_col';
  $ds_layout->settings = array(
    'regions' => array(
      'colone' => array(
        0 => 'title',
        1 => 'bareroot_products',
        2 => 'body',
        3 => 'product:field_usda_hardiness_zone',
        4 => 'product:field_product_habit',
        5 => 'product:field_product_fall_color',
        6 => 'product:field_product_flower_color',
        7 => 'product:field_product_mature_height',
        8 => 'product:field_product_spread',
        9 => 'product:field_product_bloom_time',
        10 => 'product:field_product_fruit',
        11 => 'product:field_product_size_class',
        12 => 'product:field_product_exposure',
        13 => 'product:field_product_moisture_require',
        14 => 'flag_wishlist_flag',
      ),
      'coltwo' => array(
        15 => 'product:field_product_images',
        16 => 'product_images',
        17 => 'signup',
        18 => 'field_product_category',
        19 => 'field_greengoods_category',
      ),
    ),
    'fields' => array(
      'title' => 'colone',
      'bareroot_products' => 'colone',
      'body' => 'colone',
      'product:field_usda_hardiness_zone' => 'colone',
      'product:field_product_habit' => 'colone',
      'product:field_product_fall_color' => 'colone',
      'product:field_product_flower_color' => 'colone',
      'product:field_product_mature_height' => 'colone',
      'product:field_product_spread' => 'colone',
      'product:field_product_bloom_time' => 'colone',
      'product:field_product_fruit' => 'colone',
      'product:field_product_size_class' => 'colone',
      'product:field_product_exposure' => 'colone',
      'product:field_product_moisture_require' => 'colone',
      'flag_wishlist_flag' => 'colone',
      'product:field_product_images' => 'coltwo',
      'product_images' => 'coltwo',
      'signup' => 'coltwo',
      'field_product_category' => 'coltwo',
      'field_greengoods_category' => 'coltwo',
    ),
    'classes' => array(),
    'wrappers' => array(
      'colone' => 'div',
      'coltwo' => 'div',
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
  $export['node|product|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|gift_certificate';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'gift_certificate';
  $ds_layout->layout = 'custom_2_col';
  $ds_layout->settings = array(
    'regions' => array(
      'colone' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_product_refernce',
      ),
      'coltwo' => array(
        3 => 'product:field_product_images',
      ),
    ),
    'fields' => array(
      'title' => 'colone',
      'body' => 'colone',
      'field_product_refernce' => 'colone',
      'product:field_product_images' => 'coltwo',
    ),
    'classes' => array(),
    'wrappers' => array(
      'colone' => 'div',
      'coltwo' => 'div',
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
  $export['node|product|gift_certificate'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function store_config_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'gift_certificate';
  $ds_view_mode->label = 'Gift Certificate';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['gift_certificate'] = $ds_view_mode;

  return $export;
}
