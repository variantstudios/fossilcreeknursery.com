<?php
/**
 * @file
 * store_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function store_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'facet_blocks';
  $context->description = '';
  $context->tag = 'store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products*' => 'products*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-H24ObDRB0Wq0KpRW1qalIgb7TvlKP7aj' => array(
          'module' => 'facetapi',
          'delta' => 'H24ObDRB0Wq0KpRW1qalIgb7TvlKP7aj',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'facetapi-R0dzSa8eKO1ONOT7PkXbTBO5ZYpUasJj' => array(
          'module' => 'facetapi',
          'delta' => 'R0dzSa8eKO1ONOT7PkXbTBO5ZYpUasJj',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'facetapi-ojg584n8cOZBS7fNtZgrSN0aDoN0I1Sv' => array(
          'module' => 'facetapi',
          'delta' => 'ojg584n8cOZBS7fNtZgrSN0aDoN0I1Sv',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'facetapi-VmFVlXoE7SFFcTjzosQZiLUmEGRIqYDb' => array(
          'module' => 'facetapi',
          'delta' => 'VmFVlXoE7SFFcTjzosQZiLUmEGRIqYDb',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'facetapi-1eRCuOOt3aDcKAWAxD5r48QbZK1K2k9t' => array(
          'module' => 'facetapi',
          'delta' => '1eRCuOOt3aDcKAWAxD5r48QbZK1K2k9t',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'facetapi-rms6dVcItRB0iCpTlQAXUQ0qyeSEZ22Y' => array(
          'module' => 'facetapi',
          'delta' => 'rms6dVcItRB0iCpTlQAXUQ0qyeSEZ22Y',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'facetapi-awhUl4kNIXjQZOvuLpyjpxNBjrzj58Ag' => array(
          'module' => 'facetapi',
          'delta' => 'awhUl4kNIXjQZOvuLpyjpxNBjrzj58Ag',
          'region' => 'sidebar',
          'weight' => '-4',
        ),
        'facetapi-j3udp5otBsPMD65fCrMKlIqRN1SqhOF6' => array(
          'module' => 'facetapi',
          'delta' => 'j3udp5otBsPMD65fCrMKlIqRN1SqhOF6',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'facetapi-4v4uretNMkC0xO1o4GHWPJUOo0HOM7xt' => array(
          'module' => 'facetapi',
          'delta' => '4v4uretNMkC0xO1o4GHWPJUOo0HOM7xt',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'facetapi-oLROHDQni901ceB91FXh9a5uKhFXFV5M' => array(
          'module' => 'facetapi',
          'delta' => 'oLROHDQni901ceB91FXh9a5uKhFXFV5M',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
        'facetapi-9rzCg3Vv0BLlnQzCY0r08K37HIT8c0Sl' => array(
          'module' => 'facetapi',
          'delta' => '9rzCg3Vv0BLlnQzCY0r08K37HIT8c0Sl',
          'region' => 'sidebar',
          'weight' => '0',
        ),
        'views-wishlist_flag-block' => array(
          'module' => 'views',
          'delta' => 'wishlist_flag-block',
          'region' => 'sidebar',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('store');
  $export['facet_blocks'] = $context;

  return $export;
}
