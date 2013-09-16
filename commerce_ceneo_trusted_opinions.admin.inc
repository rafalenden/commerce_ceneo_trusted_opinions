<?php

/**
 * @file
 * Includes only functions used in administration pages.
 */

/**
 * Configuration page.
 */
function commerce_ceneo_trusted_opinions_admin_settings() {
  $form = array();

  $form['selectors']['commerce_ceneo_trusted_opinions_guid'] = array(
    '#type' => 'textfield',
    '#title' => t('Shop GUID'),
    '#description' => t('GUID number can be found in your <a href="@ceneo-admin-url">Ceneo administration panel</a>.', array(
      '@ceneo-admin-url' => 'https://panel.ceneo.pl/AdminClient_TrustedInformation.aspx',
    )),
    '#default_value' => variable_get('commerce_ceneo_trusted_opinions_guid', ''),
  );

  return system_settings_form($form);
}
