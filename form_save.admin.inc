<?php

/**
 * @file
 * Admin page callbacks for the form save module.
 */

/**
 * Form for configuring form save settings.
 */
function form_save_admin($form, &$form_state) {

  $form['form_save_enable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Form Save Enable'),
    '#description' => t('Check this if you want to enable saving of forms using keyboard shortcuts.'),
    '#default_value' => variable_get('form_save_enable', 0),
  );
  return system_settings_form($form);
}
