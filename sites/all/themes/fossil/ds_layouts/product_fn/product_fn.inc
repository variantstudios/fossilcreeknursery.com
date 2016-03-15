<?php

/**
 * @file
 * Display Suite Custom 2 Col configuration.
 */

function ds_product_fn() {
  return array(
    'label' => t('Product FN'),
    'regions' => array(
      'top' => t('top'),
      'left' => t('left'),
      'right' => t('right'),
      'bottom' => t('bottom'),
    ),
    // Uncomment if you want to include a CSS file for this layout (custom_2_col.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (custom_2_col.png)
    // 'image' => TRUE,
  );
}
