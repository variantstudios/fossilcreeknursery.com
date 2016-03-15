<?php
/**
 * @file
 * Display Suite Article List template.
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
 * - $thumbnailsection: Rendered content for the "thumbnail-section" region.
 * - $thumbnailsection_classes: String of classes that can be used to style the "thumbnail-section" region.
 *
 * - $contentsection: Rendered content for the "content-section" region.
 * - $contentsection_classes: String of classes that can be used to style the "content-section" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="article-list-item typography clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $thumbnailsection_wrapper; ?> class="thumbnail-section">
      <?php print $thumbnailsection; ?>
    </<?php print $thumbnailsection_wrapper; ?>>

    <<?php print $contentsection_wrapper; ?> class="content-section">
      <div class="content-header clearfix">
	      <?php print $contentheader; ?>
      </div>
      <?php print $contentsection; ?>
    </<?php print $contentsection_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
