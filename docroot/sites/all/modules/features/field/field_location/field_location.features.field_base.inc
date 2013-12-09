<?php
/**
 * @file
 * field_location.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_location_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'foreign keys' => array(),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 'additional',
            'city' => 'city',
            'coords' => 'coords',
            'country' => 'country',
            'country_name' => 'country_name',
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'name' => 'name',
            'postal_code' => 'postal_code',
            'province' => 'province',
            'province_name' => 'province_name',
            'street' => 'street',
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -92,
            ),
            'city' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -90,
            ),
            'country' => array(
              'collect' => 4,
              'default' => 'us',
              'weight' => -96,
            ),
            'locpick' => array(
              'collect' => 1,
              'weight' => -100,
            ),
            'name' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -94,
            ),
            'postal_code' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -86,
            ),
            'province' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -88,
              'widget' => 'autocomplete',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -98,
            ),
          ),
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  return $field_bases;
}
