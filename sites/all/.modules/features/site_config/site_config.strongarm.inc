<?php
/**
 * @file
 * site_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-site-name' => 'blockify-site-name',
    'blockify-site-slogan' => 0,
    'blockify-page-title' => 0,
    'blockify-breadcrumb' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_custom_css';
  $strongarm->value = '';
  $export['nice_menus_custom_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_1';
  $strongarm->value = '-1';
  $export['nice_menus_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['nice_menus_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_1';
  $strongarm->value = 'Main Menu';
  $export['nice_menus_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_respect_expand_1';
  $strongarm->value = '0';
  $export['nice_menus_respect_expand_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_1';
  $strongarm->value = 'down';
  $export['nice_menus_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/1';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Fossil Creek Nursery';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'fossil';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_fossil_settings';
  $strongarm->value = array(
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => '1',
    'toggle_comment_user_verification' => '1',
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => '',
    'favicon_upload' => '',
    'hide_recomended_modules' => 0,
    'aurora_min_ie_support' => '8',
    'aurora_html_tags' => 1,
    'aurora_typekit_id' => '0',
    'aurora_livereload' => '0',
    'aurora_livereload_port' => '',
    'nice_menus_custom_css' => '',
    'magic_embedded_mqs' => 0,
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
    'magic_performance__active_tab' => 'edit-js',
    'magic_css_excludes_regex' => FALSE,
    'magic_js_excludes_regex' => FALSE,
  );
  $export['theme_fossil_settings'] = $strongarm;

  return $export;
}
