<?php
// $Id$

/**
 * @file
 * simterms.tpl.ph
 * Theme implementation to display a list of related content.
 *
 * Available variables:
 * - $items: the list.
 */
if ($items) {
$items_ls = array();
?>
       <?php foreach ($items as $node) { ?>
               <?php $items_ls[] = l($node->title, 'node/'. $node->nid);  ?>
       <?php } ?>
       <?php print theme('item_list', $items_ls); ?>
<?php
}

