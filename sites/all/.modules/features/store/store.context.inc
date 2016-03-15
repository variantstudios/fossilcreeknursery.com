<?php
/**
 * @file
 * store.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function store_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'store_landing';
  $context->description = '';
  $context->tag = 'store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products' => 'products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-91e593b130152dd934b87183d35bc9b7' => array(
          'module' => 'views',
          'delta' => '91e593b130152dd934b87183d35bc9b7',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-store_landing_blocks-block' => array(
          'module' => 'views',
          'delta' => 'store_landing_blocks-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-store_landing_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'store_landing_blocks-block_1',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'store-landing-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('store');
  $export['store_landing'] = $context;

  return $export;
}
