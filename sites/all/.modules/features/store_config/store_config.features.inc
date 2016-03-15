<?php
/**
 * @file
 * store_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function store_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function store_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function store_config_image_default_styles() {
  $styles = array();

  // Exported image style: product_thumb.
  $styles['product_thumb'] = array(
    'name' => 'product_thumb',
    'label' => 'product_thumb',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 275,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function store_config_weight_features_default_settings() {
  $settings = array();

  $settings['product'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
