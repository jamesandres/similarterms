<?php
// $Id$

/**
 * @file
 * Settings form.
 */

/**
 * Module settings page.
 */
function similarterms_admin_settings(&$form_state) {
  $vocabularies_options = array(
    'multi_select_and_tags' => 'Display multi-select and tags types only',
    'all' => 'Display all vocabularies types',
    );
  $form['similarterms_vocabularies'] = array(
    '#type' => 'radios',
    '#title' => t('Vocabularies types to list'),
    '#default_value' => variable_get("similarterms_vocabularies", 'multi_select_and_tags'),
    '#options' => $vocabularies_options,
    '#required' => FALSE,
  );
  $display_options = array(
    'title_only' => 'Display titles only',
    'teaser' => 'Display titles and teaser',
    );
  $form['similarterms_display_options'] = array(
    '#type' => 'radios',
    '#title' => t('Display Options'),
    '#default_value' => variable_get('similarterms_display_options', 'title_only'),
    '#options' => $display_options,
    '#required' => FALSE,
    '#prefix' => '<div>',
    '#suffix' => '</div>',
  );

  // Get the weblinks categories to add to the blogroll
//  $result = db_query('SELECT tid, name FROM {term_data} WHERE vid = %d ORDER BY weight, name', _weblinks_get_vocid());

//  while ($row = db_fetch_object($result)) {
    // Set which link categories get displayed on the links page

//    $form[$row->tid]['weblinks_page_'. $row->tid] = array(
//      '#type' => 'checkbox',
//      '#title' => t($row->name),
//      '#default_value' => variable_get('weblinks_page_'. $row->tid, 1),
//      '#required' => FALSE,
//      '#description' => t('Check to enable this category'),
//    );
//  }
  return system_settings_form($form);
}
