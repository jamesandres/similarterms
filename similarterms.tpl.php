<?php
// $Id$

/**
 * @file
 * simterms.tpl.ph
 * Theme implementation to display a list of related content.
 *
 * Available variables:
 * - $teaser: Yes = 1. No = 0
 * - $items: the list.
 */
if ($items) {
$items_ls = array();
  if (!$teaser) {
    foreach ($items as $node) {
      print l($node->title, 'node/'. $node->nid);
      print ' - '. $node->teaser;
    }
  }
  else {
?>
     <?php foreach ($items as $node) { ?>
               <?php $items_ls[] = l($node->title, 'node/'. $node->nid);  ?>
       <?php } ?>
       <?php print theme('item_list', $items_ls); ?>
<?php
  }
}

