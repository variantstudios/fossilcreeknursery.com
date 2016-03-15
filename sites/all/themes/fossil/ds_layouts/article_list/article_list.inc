<?php

/**
 * @file
 * Display Suite Article List configuration.
 */

function ds_article_list() {
  return array(
    'label' => t('Article List'),
    'regions' => array(
      'thumbnailsection' => t('thumbnail-section'),
      'contentheader' => t('content-header'),
      'contentsection' => t('content-section'),
    ),
    // Uncomment if you want to include a CSS file for this layout (article_list.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (article_list.png)
    // 'image' => TRUE,
  );
}
