<?php
/**
 * @file
 * Display Suite Custom 2 Col template.
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
 * - $colone: Rendered content for the "col-one" region.
 * - $colone_classes: String of classes that can be used to style the "col-one" region.
 *
 * - $coltwo: Rendered content for the "col-two" region.
 * - $coltwo_classes: String of classes that can be used to style the "col-two" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $top_wrapper; ?> class="product-top <?php print $top_classes; ?>">
      <?php print $top; ?>
    </<?php print $top_wrapper; ?>>
    
    <<?php print $left_wrapper; ?> class="product-left <?php print $left_classes; ?>">
      <?php print $left; ?>
    </<?php print $left_wrapper; ?>>
    
    <<?php print $right_wrapper; ?> class="product-right <?php print $right_classes; ?>">
      <?php print $right; ?>
    </<?php print $right_wrapper; ?>>
    
    <<?php print $bottom_wrapper; ?> class="product-bottom <?php print $bottom_classes; ?>">
      <?php print $bottom; ?>
    </<?php print $bottom_wrapper; ?>>



</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
