<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->langcode contains its textual representation.
 *   $language->dir contains the language direction.
 *   It will either be 'ltr' or 'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?><!DOCTYPE html>
<!--[if lt IE <?php print $minie; ?> ]>    <html class="lt-ie<?php print $minie; ?> no-js" <?php print $html_attributes; ?>> <![endif]-->
<!--[if gte IE <?php print $minie; ?>]><!--> <html class="no-js" <?php print $html_attributes; ?> <?php print $rdf_attributes; ?>> <!--<![endif]-->
  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>

    <?php print $styles; ?>
    <?php print $scripts; ?>
    <link href="//netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css" rel="stylesheet">
    <script type="text/javascript" src="//use.typekit.net/bah7kdf.js"></script>
		<script type="text/javascript">try{Typekit.load();}catch(e){}</script>
    <!--[if lt IE 9]><script src="<?php print $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'fossil'); ?>/js/respond.min.js"></script><![endif]-->
    <!--[if lt IE 9]><script src="<?php print $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'fossil'); ?>/htmlshim/dist/html5shiv.js"></script><![endif]-->

  </head>
  <body class="<?php print $classes; ?>" <?php print $body_attributes;?>>
    <div id="skip-link">
      <a href="#main" class="element-invisible element-focusable" role="link"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>