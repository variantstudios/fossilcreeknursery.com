<?php
/**
 * @file
 * fossil_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fossil_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'signups_front_end_theme';
  $context->description = '';
  $context->tag = 'Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/signups/admin' => 'node/*/signups/admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'logo',
          'weight' => '-10',
        ),
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-9',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'content',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'content',
          'weight' => '-9',
        ),
        'delta_blocks-tabs' => array(
          'module' => 'delta_blocks',
          'delta' => 'tabs',
          'region' => 'content',
          'weight' => '-8',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  $export['signups_front_end_theme'] = $context;

  return $export;
}
