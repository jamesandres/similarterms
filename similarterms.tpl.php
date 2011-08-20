<?php

/**
 * @file
 * simterms.tpl.ph
 * Theme implementation to display a list of related content.
 *
 * Available variables:
 * - $display_options:
 *    'title_only' Display titles only
 *    'teaser'     Display titles and teaser
 * - $display_block: If it should return an empy list or nothing at all.
 * - $items: the list.
 * - $nodes: The raw data of the listed items.
 */
if ($display_block) {
  print($items);
}
