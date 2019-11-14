<?php
//Max.Rakhimov

/**
 * @file
 * Settings file for House Enews Popup module.
 */


function house_enews_popup_admin_settings($form) {
  $form['tabs'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 0,
    '#default_tab' => 'newsletter',
  );

  $form['newsletter'] = array(
    '#group' => 'tabs',
    '#type' => 'fieldset',
    '#title' => t('Newsletter Signup'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => t('Edit Newsletter Signup Block Settings.'),
  );

  $form['newsletter']['house_enews_popup_title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Title of the popup box.'),
    '#default_value' => variable_get('house_enews_popup_title', t('Newsletter Signup')),
    '#disabled' => variable_get('house_enews_popup_custom_enabled'),
    '#description' => variable_get('house_enews_popup_custom_enabled') ? t('Please disable Custom Form on the left in order to edit this setting.') : '',
  );

  $form['newsletter']['house_enews_popup_message'] = array(
    '#type' => 'textarea', 
    '#title' => t('Message to display in the popup box.'),
    '#default_value' => variable_get('house_enews_popup_message', t('Get updates on important issues sent directly to your email address.')),
    '#disabled' => variable_get('house_enews_popup_custom_enabled'),
    '#description' => variable_get('house_enews_popup_custom_enabled') ? t('Please disable Custom Form on the left in order to edit this setting.') : '',
  );

  $form['custom'] = array(
    '#group' => 'tabs',
    '#type' => 'fieldset',
    '#title' => t('Custom Form'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => t('Edit Custom Popup Block Settings.'),
  );  

  $form['custom']['house_enews_popup_custom_enabled'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Enable Custom Form.'),
    '#default_value' => variable_get('house_enews_popup_custom_enabled'),
  );

  $form['custom']['house_enews_popup_custom_title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Title of the custom popup box.'),
    '#default_value' => variable_get('house_enews_popup_custom_title'),
  );

  $form['custom']['house_enews_popup_custom'] = array(
    '#type' => 'textarea', 
    '#title' => t('Please enter custom form code below.'),
    '#default_value' => variable_get('house_enews_popup_custom'),
  );

  return system_settings_form($form);
}
