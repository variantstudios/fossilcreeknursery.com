<?php
/**
 * @file
 * store.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function store_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'checkout_pane' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'gift_certificate' => array(
        'custom_settings' => TRUE,
      ),
      'home_teaser_blog' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'signup' => array(
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_usda_hardiness_zone' => array(
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_flower_color' => array(
          'teaser' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_mature_height' => array(
          'teaser' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_spread' => array(
          'teaser' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_bloom_time' => array(
          'teaser' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_fruit' => array(
          'teaser' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_size_class' => array(
          'teaser' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_fall_color' => array(
          'teaser' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_exposure' => array(
          'teaser' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_moisture_require' => array(
          'teaser' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_images' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_habit' => array(
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_manufacturer' => array(
          'teaser' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_model' => array(
          'teaser' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_size' => array(
          'teaser' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_weight' => array(
          'teaser' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_color' => array(
          'teaser' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_organic' => array(
          'teaser' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_color_foliage' => array(
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
        'product:field_scientific_name' => array(
          'default' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'gift_certificate' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_foliage_color' => array(
          'default' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'flag_wishlist_flag' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'gift_certificate' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_product';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_product';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_product';
  $strongarm->value = '0';
  $export['node_preview_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_product';
  $strongarm->value = 0;
  $export['node_submitted_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_colors';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_colors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_exposure';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_exposure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_habit';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_habit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_hardgoods';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_hardgoods'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_manufacturer';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_manufacturer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_model';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_moisture_requirements';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_moisture_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_product_category_greengoods';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_product_category_greengoods'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_size_class';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_size_class'] = $strongarm;

  return $export;
}
