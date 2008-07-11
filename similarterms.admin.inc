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
  $form['similarterms_tags_only'] = array(
    '#type' => 'radios',
    '#title' => t('Only multi-select and free tagging vocabularies'),
    '#default_value' => variable_get("similarterms_tags_only", 0),
    '#options' => array('yes', 'no'),
    '#required' => FALSE,
//    '#weight' => 0,
  );
  $form['similarterms_teaser'] = array(
    '#type' => 'radios',
    '#title' => t('Display teaser as well as titles'),
    '#default_value' => variable_get("similarterms_teaser", 1),
    '#options' => array('yes', 'no'),
    '#required' => FALSE,
//    '#weight' => 1,
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
