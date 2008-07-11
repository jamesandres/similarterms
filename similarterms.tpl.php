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
      print '<li>'. l($node->title, 'node/'. $node->nid);
      print ' - '. $node->teaser;
      print "</li>\n";
    }
  }
  else {
    foreach ($items as $node) {
      $items_ls[] = l($node->title, 'node/'. $node->nid);
    }
    print theme('item_list', $items_ls);
  }
}
