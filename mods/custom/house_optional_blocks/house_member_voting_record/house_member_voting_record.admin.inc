<?php
//Max.Rakhimov

/**
 * @file
 * Settings file for House Member Voting Record module.
 */

function house_member_voting_record_admin_settings($form) {
  $form['tabs'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 0,
    '#default_tab' => 'block',
  );

  $form['block'] = array(
    '#group' => 'tabs',
    '#type' => 'fieldset',
    '#title' => t('Voting Record Block'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => t('Edit Member Voting Record Block Settings.'),
  );
  
  $states = array("AL","AK","AZ","AR","CA","CO","CT","DE","FL","GA","HI","ID","IL","IN","IA","KS","KY","LA","ME","MD","MA","MI","MN","MS","MO","MT","NE","NV","NH","NJ","NM","NY","NC","ND","OH","OK","OR","PA","RI","SC","SD","TN","TX","UT","VT","VA","WA","WV","WI","WY");
  
  $form['block']['house_member_voting_record_state'] = array(
    '#type' => 'select',
    '#title' => t('Member\'s State.'),
    '#options' => array_combine($states, $states),
    '#default_value' => variable_get('house_member_voting_record_state'),
  );

  $form['block']['house_member_voting_record_member_id'] = array(
    '#type' => 'textfield', 
    '#title' => t('Member ID.'),
    '#default_value' => variable_get('house_member_voting_record_member_id'),
    '#description' => t('Please enter Member ID. It is a letter followed by a six digit number, for example, K000107. You can look it up from URL bar at !url. ', array('!url' => l('http://bioguide.congress.gov/biosearch/biosearch.asp', 'http://bioguide.congress.gov/biosearch/biosearch.asp', array('attributes' => array('target' => '_blank'))))),
  );

  $form['block']['house_member_voting_record_block_title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Title of the block.'),
    '#default_value' => variable_get('house_member_voting_record_block_title', t('Recent Votes')),
  );

  $form['block']['house_member_voting_record_block_number_items'] = array(
    '#type' => 'select',
    '#title' => t('Number of votes to display.'),
    '#default_value' => variable_get('house_member_voting_record_block_number_items', 5),
    '#options' => drupal_map_assoc(range(1, 10)),
  );

  return system_settings_form($form);
}
