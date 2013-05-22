<?php

/**
 * Implementation of hook_profile_default_profile_fields().
 */
function nn_geoblog_profile_default_profile_fields() {
$profile_fields = array();
$profile_fields['profile_firstname'] = array(
  'title' => 'First Name',
  'name' => 'profile_firstname',
  'explanation' => '',
  'category' => 'User Information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_lastname'] = array(
  'title' => 'Last Name',
  'name' => 'profile_lastname',
  'explanation' => '',
  'category' => 'User Information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
return $profile_fields;
}
