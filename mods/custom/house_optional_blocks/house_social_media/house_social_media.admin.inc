<?php
//Max.Rakhimov

/**
 * @file
 * Settings file for House Social Media module.
 */


function house_social_media_admin_settings($form) {
  $form['social'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 0,
    '#default_tab' => 'facebook',
  );

  $form['facebook'] = array(
    '#group' => 'social',
    '#type' => 'fieldset',
    '#title' => t('Facebook'),
    '#description' => t('Edit Facebook Block Settings.'),
  );  
  $form['facebook']['house_social_media_facebook_block_title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Block Title'),
    '#default_value' => variable_get('house_social_media_facebook_block_title', t('Join me on Facebook')),
  );
  $form['facebook']['house_social_media_facebook_url'] = array(
    '#type' => 'textfield', 
    '#title' => t('Facebook URL, for example: http://www.facebook.com/slashdot'),
    '#default_value' => variable_get('house_social_media_facebook_url'),
    '#disabled' => variable_get('house_social_media_facebook_advanced_enabled'),
    '#description' => variable_get('house_social_media_facebook_advanced_enabled') ? t('Please disable Facebook Advanced settings on the left in order to modify this setting') : '',
  );
  $form['facebook']['house_social_media_facebook_width'] = array(
    '#type' => 'textfield', 
    '#title' => t('Width of the box in px, 284 is recommended.'),
    '#default_value' => variable_get('house_social_media_facebook_width', '284'),
    '#disabled' => variable_get('house_social_media_facebook_advanced_enabled'),
    '#description' => variable_get('house_social_media_facebook_advanced_enabled') ? t('Please disable Facebook Advanced settings on the left in order to modify this setting') : '',
  );

  $form['facebook_advanced'] = array(
    '#group' => 'social',
    '#type' => 'fieldset',
    '#title' => t('Facebook Advanced'),
  );  
  $form['facebook_advanced']['house_social_media_facebook_advanced_enabled'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Enable advanced settings. This override the default Facebook settings.'),
    '#default_value' => variable_get('house_social_media_facebook_advanced_enabled'),
  );
  $form['facebook_advanced']['house_social_media_facebook_advanced'] = array(
    '#type' => 'textarea', 
    '#title' => t('Please paste Facebook IFRAME code that can be generated here: !link', array('!link' => l('http://developers.facebook.com/docs/reference/plugins/like-box', 'http://developers.facebook.com/docs/reference/plugins/like-box', array('attributes' => array('target' => array('_blank')))))),
    '#default_value' => variable_get('house_social_media_facebook_advanced'),
    '#description' => t('Please use IFRAME code.<br />Recommended width: 284px, height: 300px.'),
  );

  $form['twitter'] = array(
    '#group' => 'social',
    '#type' => 'fieldset',
    '#title' => t('Twitter'),
    '#description' => variable_get('house_social_media_twitter_advanced_enabled') ? t('Please disable Twitter Advanced settings on the left in order to modify these settings') : t('Edit Twitter Block Settings.'),
  );  
  $form['twitter']['house_social_media_twitter_block_title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Block Title'),
    '#default_value' => variable_get('house_social_media_twitter_block_title', t('Follow me on Twitter')),
  );
  $form['twitter']['house_social_media_twitter_username'] = array(
    '#type' => 'textfield', 
    '#title' => t('Twitter profile name, for example: slashdot'),
    '#default_value' => variable_get('house_social_media_twitter_username'),
    '#disabled' => variable_get('house_social_media_twitter_advanced_enabled'),
    '#description' => variable_get('house_social_media_twitter_advanced_enabled') ? t('Please disable Twitter Advanced settings on the left in order to modify this setting') : '',
  );
  $form['twitter']['house_social_media_twitter_height'] = array(
    '#type' => 'textfield', 
    '#title' => t('Height of the box in px, 300 is recommended.'),
    '#default_value' => variable_get('house_social_media_twitter_height', '300'),
    '#disabled' => variable_get('house_social_media_twitter_advanced_enabled'),
    '#description' => variable_get('house_social_media_twitter_advanced_enabled') ? t('Please disable Twitter Advanced settings on the left in order to modify this setting') : '',
  );
  $form['twitter']['house_social_media_twitter_background'] = array(
    '#type' => 'textfield', 
    '#title' => t('Background color, for example: #ffffff, default is transparent'),
    '#default_value' => variable_get('house_social_media_twitter_background', 'transparent'),
    '#disabled' => variable_get('house_social_media_twitter_advanced_enabled'),
    '#description' => variable_get('house_social_media_twitter_advanced_enabled') ? t('Please disable Twitter Advanced settings on the left in order to modify this setting') : '',
  );
  $form['twitter']['house_social_media_twitter_text_color'] = array(
    '#type' => 'textfield', 
    '#title' => t('Text color, default is #666666.'),
    '#default_value' => variable_get('house_social_media_twitter_text_color', '#666666'),
    '#disabled' => variable_get('house_social_media_twitter_advanced_enabled'),
    '#description' => variable_get('house_social_media_twitter_advanced_enabled') ? t('Please disable Twitter Advanced settings on the left in order to modify this setting') : '',
  );
  $form['twitter']['house_social_media_twitter_link_color'] = array(
    '#type' => 'textfield', 
    '#title' => t('Link color, default is #1D3D8E.'),
    '#default_value' => variable_get('house_social_media_twitter_link_color', '#1D3D8E'),
    '#disabled' => variable_get('house_social_media_twitter_advanced_enabled'),
    '#description' => variable_get('house_social_media_twitter_advanced_enabled') ? t('Please disable Twitter Advanced settings on the left in order to modify this setting') : '',
  );

  $form['twitter_advanced'] = array(
    '#group' => 'social',
    '#type' => 'fieldset',
    '#title' => t('Twitter Advanced'),
  );  
  $form['twitter_advanced']['house_social_media_twitter_advanced_enabled'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Enable advanced settings. This override the default Twitter settings.'),
    '#default_value' => variable_get('house_social_media_twitter_advanced_enabled'),
  );

  $form['twitter_advanced']['house_social_media_twitter_advanced'] = array(
    '#type' => 'textarea', 
    '#title' => t('Please paste Twitter code that can be generated here: !link', array('!link' => l('http://twitter.com/about/resources/widgets/widget_profile', 'http://twitter.com/about/resources/widgets/widget_profile', array('attributes' => array('target' => array('_blank')))))),
    '#default_value' => variable_get('house_social_media_twitter_advanced'),
    '#description' => t('Recommended width: 304, height: 300.'),
    '#rows' => 40,
  );

  $form['#pre_render'][] = 'vertical_tabs_form_pre_render';
  return system_settings_form($form);
}
