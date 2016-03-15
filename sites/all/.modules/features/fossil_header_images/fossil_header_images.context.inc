<?php
/**
 * @file
 * fossil_header_images.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fossil_header_images_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_images_about';
  $context->description = 'About Page Header IMages';
  $context->tag = 'Header Images';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'faq' => 'faq',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
        'faq' => 'faq',
        'frequently-asked-questions' => 'frequently-asked-questions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_images-block_1' => array(
          'module' => 'views',
          'delta' => 'header_images-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Page Header IMages');
  t('Header Images');
  $export['header_images_about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_images_blog';
  $context->description = 'Blog Page Header IMages';
  $context->tag = 'Header Images';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog*' => 'blog*',
        'events*' => 'events*',
        'event/*' => 'event/*',
        'node/*/signups/*' => 'node/*/signups/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_images-block_2' => array(
          'module' => 'views',
          'delta' => 'header_images-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog Page Header IMages');
  t('Header Images');
  $export['header_images_blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_images_home';
  $context->description = 'Home Page Header IMages';
  $context->tag = 'Header Images';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_images-block' => array(
          'module' => 'views',
          'delta' => 'header_images-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Images');
  t('Home Page Header IMages');
  $export['header_images_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_images_services';
  $context->description = 'Services Page Header IMages';
  $context->tag = 'Header Images';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services' => 'services',
        'our-services' => 'our-services',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_images-block_3' => array(
          'module' => 'views',
          'delta' => 'header_images-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Images');
  t('Services Page Header IMages');
  $export['header_images_services'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_images_store';
  $context->description = 'Store Page Header IMages';
  $context->tag = 'Header Images';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products*' => 'products*',
        'product*' => 'product*',
        'checkout*' => 'checkout*',
        'cart' => 'cart',
        'your-wishlist' => 'your-wishlist',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_images-block_4' => array(
          'module' => 'views',
          'delta' => 'header_images-block_4',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Images');
  t('Store Page Header IMages');
  $export['header_images_store'] = $context;

  return $export;
}
