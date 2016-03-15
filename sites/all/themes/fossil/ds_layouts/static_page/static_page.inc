<?php

/**
 * @file
 * Display Suite Static Page configuration.
 */

function ds_static_page() {
  return array(
    'label' => t('Static Page'),
    'regions' => array(
      'headersection' => t('header-section'),
      'contentsection' => t('content-section'),
      'sidebarsection' => t('sidebar-section'),
    ),
    // Uncomment if you want to include a CSS file for this layout (static_page.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (static_page.png)
    // 'image' => TRUE,
  );
}
