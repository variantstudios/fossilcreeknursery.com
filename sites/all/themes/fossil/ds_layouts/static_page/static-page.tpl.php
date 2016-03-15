<?php
/**
 * @file
 * Display Suite Static Page template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $headersection: Rendered content for the "header-section" region.
 * - $headersection_classes: String of classes that can be used to style the "header-section" region.
 *
 * - $contentsection: Rendered content for the "content-section" region.
 * - $contentsection_classes: String of classes that can be used to style the "content-section" region.
 *
 * - $sidebarsection: Rendered content for the "sidebar-section" region.
 * - $sidebarsection_classes: String of classes that can be used to style the "sidebar-section" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> typography static-page-layout clearfix <?php if(empty ($sidebarsection) ): ?>no-sidebar<?php endif; ?><?php if(!empty ($sidebarsection) ): ?>sidebar-exists<?php endif; ?>">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $headersection_wrapper; ?> class="header-block">
      <?php print $headersection; ?>
    </<?php print $headersection_wrapper; ?>>

    <<?php print $contentsection_wrapper; ?> class="content-block">
      <?php print $contentsection; ?>
    </<?php print $contentsection_wrapper; ?>>

			<?php if(!empty ($sidebarsection) ): ?>
	      <<?php print $sidebarsection_wrapper; ?> class="sidebar-block">
	        <?php print $sidebarsection; ?>
	      </<?php print $sidebarsection_wrapper; ?>>
      <?php endif; ?>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
