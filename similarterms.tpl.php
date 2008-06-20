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
?>
       <ul>
       <?php foreach ($items as $node) { ?>
               <li><?php print l($node->title, 'node/'. $node->nid) ?></li>
       <?php } ?>
       </ul>
<?php
}

