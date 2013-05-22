<?php

/**
 * Implementation of hook_content_default_fields().
 */
function nn_geoblog_content_default_fields() {
  $fields = array();

  // Exported field: field_county
  $fields['story-field_county'] = array(
    'field_name' => 'field_county',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'content_taxonomy',
        'parent_id' => '',
        'field_id' => 'field_county',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-19',
      ),
      'weight' => '-2',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'content_taxonomy',
        'parent_id' => '',
        'field_id' => 'field_county',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-86',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '1',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '2',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 0,
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'County',
      'weight' => '-2',
      'description' => 'Select the county or counties related to this story or where this story occurred.',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_documents
  $fields['story-field_documents'] = array(
    'field_name' => 'field_documents',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-90',
      'full' => array(
        'label' => array(
          'format' => 'above',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_documents',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-90',
      ),
      'weight' => '5',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt doc docx pdf',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Documents',
      'weight' => '5',
      'description' => 'Add a text, Microsoft Word or PDF document related to your story',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_location
  $fields['story-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-99',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'map',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'location',
        'parent_id' => '',
        'field_id' => 'field_location',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-99',
      ),
      'weight' => '-4',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'location',
        'parent_id' => '',
        'field_id' => 'field_location',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-80',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'locpick' => array(
            'collect' => '1',
            'weight' => '-100',
          ),
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-99',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-98',
          ),
          'additional' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-97',
          ),
          'city' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-96',
          ),
          'province' => array(
            'collect' => '0',
            'default' => 'Georgia',
            'weight' => '-95',
          ),
          'postal_code' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-94',
          ),
          'country' => array(
            'collect' => '4',
            'default' => 'us',
            'weight' => '-93',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'street' => 'street',
          'additional' => 'additional',
          'city' => 'city',
          'province' => 'province',
          'postal_code' => 'postal_code',
          'country' => 'country',
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
        ),
      ),
    ),
    'gmap_macro' => '[gmap zoom=17]',
    'gmap_marker' => 'lblue',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'street' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => '1',
                  'weight' => '-100',
                  'nodiff' => TRUE,
                ),
                'name' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-99',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-98',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-97',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-96',
                ),
                'province' => array(
                  'default' => 'Georgia',
                  'collect' => '0',
                  'weight' => '-95',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-94',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => '4',
                  'weight' => '-93',
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'locpick' => array(
                          'default' => FALSE,
                          'collect' => '1',
                          'weight' => '-100',
                          'nodiff' => TRUE,
                        ),
                        'name' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-99',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-98',
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-97',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-96',
                        ),
                        'province' => array(
                          'default' => 'Georgia',
                          'collect' => '0',
                          'weight' => '-95',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-94',
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => '4',
                          'weight' => '-93',
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'locpick' => array(
                                  'default' => FALSE,
                                  'collect' => '0',
                                  'weight' => '-100',
                                  'nodiff' => TRUE,
                                ),
                                'name' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-99',
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-98',
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-97',
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-96',
                                ),
                                'province' => array(
                                  'default' => 'Georgia',
                                  'collect' => '0',
                                  'weight' => '-95',
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-94',
                                ),
                                'country' => array(
                                  'default' => 'us',
                                  'collect' => '4',
                                  'weight' => '-93',
                                ),
                                'cck_preview_in_progress' => array(
                                  'default' => TRUE,
                                ),
                                'location_settings' => array(
                                  'default' => array(
                                    'form' => array(
                                      'fields' => array(
                                        'locpick' => array(
                                          'default' => FALSE,
                                          'collect' => '0',
                                          'weight' => '-100',
                                          'nodiff' => TRUE,
                                        ),
                                        'name' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '-99',
                                        ),
                                        'street' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '-98',
                                        ),
                                        'additional' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '-97',
                                        ),
                                        'city' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '-96',
                                        ),
                                        'province' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '-95',
                                        ),
                                        'postal_code' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '-94',
                                        ),
                                        'country' => array(
                                          'default' => 'us',
                                          'collect' => '4',
                                          'weight' => '-93',
                                        ),
                                        'cck_preview_in_progress' => array(
                                          'default' => TRUE,
                                        ),
                                        'location_settings' => array(
                                          'default' => array(
                                            'form' => array(
                                              'fields' => array(
                                                'locpick' => array(
                                                  'default' => FALSE,
                                                  'collect' => '0',
                                                  'weight' => '-100',
                                                  'nodiff' => TRUE,
                                                ),
                                                'name' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-99',
                                                ),
                                                'street' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-98',
                                                ),
                                                'additional' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-97',
                                                ),
                                                'city' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-96',
                                                ),
                                                'province' => array(
                                                  'default' => '',
                                                  'collect' => '4',
                                                  'weight' => '-95',
                                                ),
                                                'postal_code' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-94',
                                                ),
                                                'country' => array(
                                                  'default' => 'us',
                                                  'collect' => '4',
                                                  'weight' => '-93',
                                                ),
                                                'cck_preview_in_progress' => array(
                                                  'default' => TRUE,
                                                ),
                                                'location_settings' => array(
                                                  'default' => array(
                                                    'form' => array(
                                                      'fields' => array(
                                                        'locpick' => array(
                                                          'default' => array(
                                                            'user_latitude' => '',
                                                            'user_longitude' => '',
                                                          ),
                                                          'collect' => '0',
                                                          'weight' => '-100',
                                                          'nodiff' => TRUE,
                                                        ),
                                                        'name' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-99',
                                                        ),
                                                        'street' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-98',
                                                        ),
                                                        'additional' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-97',
                                                        ),
                                                        'city' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-96',
                                                        ),
                                                        'province' => array(
                                                          'default' => '',
                                                          'collect' => '4',
                                                          'weight' => '-95',
                                                        ),
                                                        'postal_code' => array(
                                                          'default' => '',
                                                          'collect' => '0',
                                                          'weight' => '-94',
                                                        ),
                                                        'country' => array(
                                                          'default' => 'us',
                                                          'collect' => '4',
                                                          'weight' => '-93',
                                                        ),
                                                        'cck_preview_in_progress' => array(
                                                          'default' => TRUE,
                                                        ),
                                                        'location_settings' => array(
                                                          'default' => array(
                                                            'form' => array(
                                                              'fields' => array(
                                                                'locpick' => array(
                                                                  'default' => array(
                                                                    'user_latitude' => '',
                                                                    'user_longitude' => '',
                                                                  ),
                                                                  'collect' => '1',
                                                                  'weight' => '-100',
                                                                  'nodiff' => TRUE,
                                                                ),
                                                                'name' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-99',
                                                                ),
                                                                'street' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-98',
                                                                ),
                                                                'additional' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-97',
                                                                ),
                                                                'city' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-96',
                                                                ),
                                                                'province' => array(
                                                                  'default' => '',
                                                                  'collect' => '4',
                                                                  'weight' => '-95',
                                                                ),
                                                                'postal_code' => array(
                                                                  'default' => '',
                                                                  'collect' => '0',
                                                                  'weight' => '-94',
                                                                ),
                                                                'country' => array(
                                                                  'default' => 'us',
                                                                  'collect' => '4',
                                                                  'weight' => '-93',
                                                                ),
                                                                'cck_preview_in_progress' => array(
                                                                  'default' => TRUE,
                                                                ),
                                                                'location_settings' => array(
                                                                  'default' => array(
                                                                    'form' => array(
                                                                      'fields' => array(
                                                                        'locpick' => array(
                                                                          'default' => array(
                                                                            'user_latitude' => '',
                                                                            'user_longitude' => '',
                                                                          ),
                                                                          'collect' => '1',
                                                                          'weight' => '-100',
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                        'name' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-99',
                                                                        ),
                                                                        'street' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-98',
                                                                        ),
                                                                        'additional' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-97',
                                                                        ),
                                                                        'city' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-96',
                                                                        ),
                                                                        'province' => array(
                                                                          'default' => '',
                                                                          'collect' => '4',
                                                                          'weight' => '-95',
                                                                        ),
                                                                        'postal_code' => array(
                                                                          'default' => '',
                                                                          'collect' => '0',
                                                                          'weight' => '-94',
                                                                        ),
                                                                        'country' => array(
                                                                          'default' => 'us',
                                                                          'collect' => '4',
                                                                          'weight' => '-93',
                                                                        ),
                                                                        'cck_preview_in_progress' => array(
                                                                          'default' => TRUE,
                                                                        ),
                                                                        'location_settings' => array(
                                                                          'default' => array(
                                                                            'form' => array(
                                                                              'fields' => array(
                                                                                'locpick' => array(
                                                                                  'default' => array(
                                                                                    'user_latitude' => '',
                                                                                    'user_longitude' => '',
                                                                                  ),
                                                                                  'collect' => '1',
                                                                                  'weight' => '-100',
                                                                                  'nodiff' => TRUE,
                                                                                ),
                                                                                'name' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-99',
                                                                                ),
                                                                                'street' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-98',
                                                                                ),
                                                                                'additional' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-97',
                                                                                ),
                                                                                'city' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-96',
                                                                                ),
                                                                                'province' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '4',
                                                                                  'weight' => '-95',
                                                                                ),
                                                                                'postal_code' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '0',
                                                                                  'weight' => '-94',
                                                                                ),
                                                                                'country' => array(
                                                                                  'default' => 'us',
                                                                                  'collect' => '4',
                                                                                  'weight' => '-93',
                                                                                ),
                                                                                'cck_preview_in_progress' => array(
                                                                                  'default' => TRUE,
                                                                                ),
                                                                                'location_settings' => array(
                                                                                  'default' => array(
                                                                                    'form' => array(
                                                                                      'fields' => array(
                                                                                        'locpick' => array(
                                                                                          'default' => array(
                                                                                            'user_latitude' => '',
                                                                                            'user_longitude' => '',
                                                                                          ),
                                                                                          'collect' => '1',
                                                                                          'weight' => '-100',
                                                                                          'nodiff' => TRUE,
                                                                                        ),
                                                                                        'name' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-99',
                                                                                        ),
                                                                                        'street' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-98',
                                                                                        ),
                                                                                        'additional' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-97',
                                                                                        ),
                                                                                        'city' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-96',
                                                                                        ),
                                                                                        'province' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '4',
                                                                                          'weight' => '-95',
                                                                                        ),
                                                                                        'postal_code' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '0',
                                                                                          'weight' => '-94',
                                                                                        ),
                                                                                        'country' => array(
                                                                                          'default' => 'us',
                                                                                          'collect' => '4',
                                                                                          'weight' => '-93',
                                                                                        ),
                                                                                        'cck_preview_in_progress' => array(
                                                                                          'default' => TRUE,
                                                                                        ),
                                                                                        'location_settings' => array(
                                                                                          'default' => array(
                                                                                            'form' => array(
                                                                                              'fields' => array(
                                                                                                'locpick' => array(
                                                                                                  'default' => array(
                                                                                                    'user_latitude' => '',
                                                                                                    'user_longitude' => '',
                                                                                                  ),
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-100',
                                                                                                  'nodiff' => TRUE,
                                                                                                ),
                                                                                                'name' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-99',
                                                                                                ),
                                                                                                'street' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-98',
                                                                                                ),
                                                                                                'additional' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-97',
                                                                                                ),
                                                                                                'city' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-96',
                                                                                                ),
                                                                                                'province' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-95',
                                                                                                ),
                                                                                                'postal_code' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-94',
                                                                                                ),
                                                                                                'country' => array(
                                                                                                  'default' => 'us',
                                                                                                  'collect' => '4',
                                                                                                  'weight' => '-93',
                                                                                                ),
                                                                                                'cck_preview_in_progress' => array(
                                                                                                  'default' => TRUE,
                                                                                                ),
                                                                                                'location_settings' => array(
                                                                                                  'default' => array(
                                                                                                    'form' => array(
                                                                                                      'fields' => array(
                                                                                                        'locpick' => array(
                                                                                                          'default' => array(
                                                                                                            'user_latitude' => '',
                                                                                                            'user_longitude' => '',
                                                                                                          ),
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-100',
                                                                                                          'nodiff' => TRUE,
                                                                                                        ),
                                                                                                        'name' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-99',
                                                                                                        ),
                                                                                                        'street' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-98',
                                                                                                        ),
                                                                                                        'additional' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-97',
                                                                                                        ),
                                                                                                        'city' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-96',
                                                                                                        ),
                                                                                                        'province' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-95',
                                                                                                        ),
                                                                                                        'postal_code' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => '1',
                                                                                                          'weight' => '-94',
                                                                                                        ),
                                                                                                        'country' => array(
                                                                                                          'default' => 'us',
                                                                                                          'collect' => '4',
                                                                                                          'weight' => '-93',
                                                                                                        ),
                                                                                                        'cck_preview_in_progress' => array(
                                                                                                          'default' => TRUE,
                                                                                                        ),
                                                                                                        'location_settings' => array(
                                                                                                          'default' => array(
                                                                                                            'form' => array(
                                                                                                              'fields' => array(
                                                                                                                'locpick' => array(
                                                                                                                  'default' => array(
                                                                                                                    'user_latitude' => '',
                                                                                                                    'user_longitude' => '',
                                                                                                                  ),
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-100',
                                                                                                                  'nodiff' => TRUE,
                                                                                                                ),
                                                                                                                'name' => array(
                                                                                                                  'default' => '',
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-99',
                                                                                                                ),
                                                                                                                'street' => array(
                                                                                                                  'default' => '',
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-98',
                                                                                                                ),
                                                                                                                'additional' => array(
                                                                                                                  'default' => '',
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-97',
                                                                                                                ),
                                                                                                                'city' => array(
                                                                                                                  'default' => '',
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-96',
                                                                                                                ),
                                                                                                                'province' => array(
                                                                                                                  'default' => '',
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-95',
                                                                                                                ),
                                                                                                                'postal_code' => array(
                                                                                                                  'default' => '',
                                                                                                                  'collect' => '1',
                                                                                                                  'weight' => '-94',
                                                                                                                ),
                                                                                                                'country' => array(
                                                                                                                  'default' => 'us',
                                                                                                                  'collect' => '4',
                                                                                                                  'weight' => '-93',
                                                                                                                ),
                                                                                                                'cck_preview_in_progress' => array(
                                                                                                                  'default' => TRUE,
                                                                                                                ),
                                                                                                                'location_settings' => array(
                                                                                                                  'default' => array(
                                                                                                                    'form' => array(
                                                                                                                      'fields' => array(
                                                                                                                        'locpick' => array(
                                                                                                                          'default' => array(
                                                                                                                            'user_latitude' => '',
                                                                                                                            'user_longitude' => '',
                                                                                                                          ),
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-100',
                                                                                                                          'nodiff' => TRUE,
                                                                                                                        ),
                                                                                                                        'name' => array(
                                                                                                                          'default' => '',
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-99',
                                                                                                                        ),
                                                                                                                        'street' => array(
                                                                                                                          'default' => '',
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-98',
                                                                                                                        ),
                                                                                                                        'additional' => array(
                                                                                                                          'default' => '',
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-97',
                                                                                                                        ),
                                                                                                                        'city' => array(
                                                                                                                          'default' => '',
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-96',
                                                                                                                        ),
                                                                                                                        'province' => array(
                                                                                                                          'default' => '',
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-95',
                                                                                                                        ),
                                                                                                                        'postal_code' => array(
                                                                                                                          'default' => '',
                                                                                                                          'collect' => '1',
                                                                                                                          'weight' => '-94',
                                                                                                                        ),
                                                                                                                        'country' => array(
                                                                                                                          'default' => 'us',
                                                                                                                          'collect' => '4',
                                                                                                                          'weight' => '-93',
                                                                                                                        ),
                                                                                                                        'cck_preview_in_progress' => array(
                                                                                                                          'default' => TRUE,
                                                                                                                        ),
                                                                                                                        'location_settings' => array(
                                                                                                                          'default' => array(
                                                                                                                            'form' => array(
                                                                                                                              'fields' => array(
                                                                                                                                'name' => array(
                                                                                                                                  'default' => '',
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-100',
                                                                                                                                ),
                                                                                                                                'locpick' => array(
                                                                                                                                  'default' => array(
                                                                                                                                    'user_latitude' => '',
                                                                                                                                    'user_longitude' => '',
                                                                                                                                  ),
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-99',
                                                                                                                                  'nodiff' => TRUE,
                                                                                                                                ),
                                                                                                                                'street' => array(
                                                                                                                                  'default' => '',
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-98',
                                                                                                                                ),
                                                                                                                                'additional' => array(
                                                                                                                                  'default' => '',
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-97',
                                                                                                                                ),
                                                                                                                                'city' => array(
                                                                                                                                  'default' => '',
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-96',
                                                                                                                                ),
                                                                                                                                'province' => array(
                                                                                                                                  'default' => '',
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-95',
                                                                                                                                ),
                                                                                                                                'postal_code' => array(
                                                                                                                                  'default' => '',
                                                                                                                                  'collect' => '1',
                                                                                                                                  'weight' => '-94',
                                                                                                                                ),
                                                                                                                                'country' => array(
                                                                                                                                  'default' => 'us',
                                                                                                                                  'collect' => '4',
                                                                                                                                  'weight' => '-93',
                                                                                                                                ),
                                                                                                                                'cck_preview_in_progress' => array(
                                                                                                                                  'default' => TRUE,
                                                                                                                                ),
                                                                                                                                'location_settings' => array(
                                                                                                                                  'default' => array(
                                                                                                                                    'form' => array(
                                                                                                                                      'fields' => array(
                                                                                                                                        'name' => array(
                                                                                                                                          'default' => '',
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '2',
                                                                                                                                        ),
                                                                                                                                        'street' => array(
                                                                                                                                          'default' => '',
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '4',
                                                                                                                                        ),
                                                                                                                                        'additional' => array(
                                                                                                                                          'default' => '',
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '6',
                                                                                                                                        ),
                                                                                                                                        'city' => array(
                                                                                                                                          'default' => '',
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '8',
                                                                                                                                        ),
                                                                                                                                        'province' => array(
                                                                                                                                          'default' => '',
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '10',
                                                                                                                                        ),
                                                                                                                                        'postal_code' => array(
                                                                                                                                          'default' => '',
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '12',
                                                                                                                                        ),
                                                                                                                                        'country' => array(
                                                                                                                                          'default' => 'us',
                                                                                                                                          'collect' => '4',
                                                                                                                                          'weight' => '14',
                                                                                                                                        ),
                                                                                                                                        'locpick' => array(
                                                                                                                                          'default' => array(
                                                                                                                                            'user_latitude' => '',
                                                                                                                                            'user_longitude' => '',
                                                                                                                                          ),
                                                                                                                                          'collect' => '1',
                                                                                                                                          'weight' => '20',
                                                                                                                                          'nodiff' => TRUE,
                                                                                                                                        ),
                                                                                                                                        'cck_preview_in_progress' => array(
                                                                                                                                          'default' => TRUE,
                                                                                                                                        ),
                                                                                                                                        'location_settings' => array(
                                                                                                                                          'default' => array(
                                                                                                                                            'form' => array(
                                                                                                                                              'fields' => array(
                                                                                                                                                'lid' => array(
                                                                                                                                                  'default' => FALSE,
                                                                                                                                                ),
                                                                                                                                                'name' => array(
                                                                                                                                                  'default' => '',
                                                                                                                                                  'collect' => 1,
                                                                                                                                                  'weight' => 2,
                                                                                                                                                ),
                                                                                                                                                'street' => array(
                                                                                                                                                  'default' => '',
                                                                                                                                                  'collect' => 1,
                                                                                                                                                  'weight' => 4,
                                                                                                                                                ),
                                                                                                                                                'additional' => array(
                                                                                                                                                  'default' => '',
                                                                                                                                                  'collect' => 1,
                                                                                                                                                  'weight' => 6,
                                                                                                                                                ),
                                                                                                                                                'city' => array(
                                                                                                                                                  'default' => '',
                                                                                                                                                  'collect' => 0,
                                                                                                                                                  'weight' => 8,
                                                                                                                                                ),
                                                                                                                                                'province' => array(
                                                                                                                                                  'default' => '',
                                                                                                                                                  'collect' => 0,
                                                                                                                                                  'weight' => 10,
                                                                                                                                                ),
                                                                                                                                                'postal_code' => array(
                                                                                                                                                  'default' => '',
                                                                                                                                                  'collect' => 0,
                                                                                                                                                  'weight' => 12,
                                                                                                                                                ),
                                                                                                                                                'country' => array(
                                                                                                                                                  'default' => 'us',
                                                                                                                                                  'collect' => 1,
                                                                                                                                                  'weight' => 14,
                                                                                                                                                ),
                                                                                                                                                'locpick' => array(
                                                                                                                                                  'default' => FALSE,
                                                                                                                                                  'collect' => 1,
                                                                                                                                                  'weight' => 20,
                                                                                                                                                  'nodiff' => TRUE,
                                                                                                                                                ),
                                                                                                                                                'latitude' => array(
                                                                                                                                                  'default' => 0,
                                                                                                                                                ),
                                                                                                                                                'longitude' => array(
                                                                                                                                                  'default' => 0,
                                                                                                                                                ),
                                                                                                                                                'source' => array(
                                                                                                                                                  'default' => 0,
                                                                                                                                                ),
                                                                                                                                                'is_primary' => array(
                                                                                                                                                  'default' => 0,
                                                                                                                                                ),
                                                                                                                                                'delete_location' => array(
                                                                                                                                                  'default' => FALSE,
                                                                                                                                                  'nodiff' => TRUE,
                                                                                                                                                ),
                                                                                                                                              ),
                                                                                                                                            ),
                                                                                                                                          ),
                                                                                                                                        ),
                                                                                                                                        'lid' => array(
                                                                                                                                          'default' => FALSE,
                                                                                                                                        ),
                                                                                                                                        'latitude' => array(
                                                                                                                                          'default' => 0,
                                                                                                                                        ),
                                                                                                                                        'longitude' => array(
                                                                                                                                          'default' => 0,
                                                                                                                                        ),
                                                                                                                                        'source' => array(
                                                                                                                                          'default' => 0,
                                                                                                                                        ),
                                                                                                                                        'is_primary' => array(
                                                                                                                                          'default' => 0,
                                                                                                                                        ),
                                                                                                                                        'delete_location' => array(
                                                                                                                                          'default' => FALSE,
                                                                                                                                          'nodiff' => TRUE,
                                                                                                                                        ),
                                                                                                                                      ),
                                                                                                                                    ),
                                                                                                                                    'display' => array(
                                                                                                                                      'hide' => array(
                                                                                                                                        'country' => 'country',
                                                                                                                                        'locpick' => 'locpick',
                                                                                                                                        'province_name' => 'province_name',
                                                                                                                                        'country_name' => 'country_name',
                                                                                                                                        'map_link' => 'map_link',
                                                                                                                                        'coords' => 'coords',
                                                                                                                                        'name' => 0,
                                                                                                                                        'street' => 0,
                                                                                                                                        'additional' => 0,
                                                                                                                                        'city' => 0,
                                                                                                                                        'province' => 0,
                                                                                                                                        'postal_code' => 0,
                                                                                                                                      ),
                                                                                                                                    ),
                                                                                                                                  ),
                                                                                                                                ),
                                                                                                                                'lid' => array(
                                                                                                                                  'default' => FALSE,
                                                                                                                                ),
                                                                                                                                'latitude' => array(
                                                                                                                                  'default' => 0,
                                                                                                                                ),
                                                                                                                                'longitude' => array(
                                                                                                                                  'default' => 0,
                                                                                                                                ),
                                                                                                                                'source' => array(
                                                                                                                                  'default' => 0,
                                                                                                                                ),
                                                                                                                                'is_primary' => array(
                                                                                                                                  'default' => 0,
                                                                                                                                ),
                                                                                                                                'delete_location' => array(
                                                                                                                                  'default' => FALSE,
                                                                                                                                  'nodiff' => TRUE,
                                                                                                                                ),
                                                                                                                              ),
                                                                                                                            ),
                                                                                                                            'display' => array(
                                                                                                                              'hide' => array(
                                                                                                                                'city' => 'city',
                                                                                                                                'province' => 'province',
                                                                                                                                'postal_code' => 'postal_code',
                                                                                                                                'country' => 'country',
                                                                                                                                'locpick' => 'locpick',
                                                                                                                                'province_name' => 'province_name',
                                                                                                                                'country_name' => 'country_name',
                                                                                                                                'map_link' => 'map_link',
                                                                                                                                'coords' => 'coords',
                                                                                                                                'name' => 0,
                                                                                                                                'street' => 0,
                                                                                                                                'additional' => 0,
                                                                                                                              ),
                                                                                                                            ),
                                                                                                                          ),
                                                                                                                        ),
                                                                                                                        'lid' => array(
                                                                                                                          'default' => FALSE,
                                                                                                                        ),
                                                                                                                        'latitude' => array(
                                                                                                                          'default' => 0,
                                                                                                                        ),
                                                                                                                        'longitude' => array(
                                                                                                                          'default' => 0,
                                                                                                                        ),
                                                                                                                        'source' => array(
                                                                                                                          'default' => 0,
                                                                                                                        ),
                                                                                                                        'is_primary' => array(
                                                                                                                          'default' => 0,
                                                                                                                        ),
                                                                                                                        'delete_location' => array(
                                                                                                                          'default' => FALSE,
                                                                                                                          'nodiff' => TRUE,
                                                                                                                        ),
                                                                                                                      ),
                                                                                                                    ),
                                                                                                                    'display' => array(
                                                                                                                      'hide' => array(
                                                                                                                        'city' => 'city',
                                                                                                                        'province' => 'province',
                                                                                                                        'postal_code' => 'postal_code',
                                                                                                                        'country' => 'country',
                                                                                                                        'locpick' => 'locpick',
                                                                                                                        'province_name' => 'province_name',
                                                                                                                        'country_name' => 'country_name',
                                                                                                                        'map_link' => 'map_link',
                                                                                                                        'coords' => 'coords',
                                                                                                                        'name' => 0,
                                                                                                                        'street' => 0,
                                                                                                                        'additional' => 0,
                                                                                                                      ),
                                                                                                                    ),
                                                                                                                  ),
                                                                                                                ),
                                                                                                                'lid' => array(
                                                                                                                  'default' => FALSE,
                                                                                                                ),
                                                                                                                'latitude' => array(
                                                                                                                  'default' => 0,
                                                                                                                ),
                                                                                                                'longitude' => array(
                                                                                                                  'default' => 0,
                                                                                                                ),
                                                                                                                'source' => array(
                                                                                                                  'default' => 0,
                                                                                                                ),
                                                                                                                'is_primary' => array(
                                                                                                                  'default' => 0,
                                                                                                                ),
                                                                                                                'delete_location' => array(
                                                                                                                  'default' => FALSE,
                                                                                                                  'nodiff' => TRUE,
                                                                                                                ),
                                                                                                              ),
                                                                                                            ),
                                                                                                            'display' => array(
                                                                                                              'hide' => array(
                                                                                                                'city' => 'city',
                                                                                                                'province' => 'province',
                                                                                                                'postal_code' => 'postal_code',
                                                                                                                'country' => 'country',
                                                                                                                'locpick' => 'locpick',
                                                                                                                'province_name' => 'province_name',
                                                                                                                'country_name' => 'country_name',
                                                                                                                'map_link' => 'map_link',
                                                                                                                'coords' => 'coords',
                                                                                                                'name' => 0,
                                                                                                                'street' => 0,
                                                                                                                'additional' => 0,
                                                                                                              ),
                                                                                                            ),
                                                                                                          ),
                                                                                                        ),
                                                                                                        'lid' => array(
                                                                                                          'default' => FALSE,
                                                                                                        ),
                                                                                                        'latitude' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'longitude' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'source' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'is_primary' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'delete_location' => array(
                                                                                                          'default' => FALSE,
                                                                                                          'nodiff' => TRUE,
                                                                                                        ),
                                                                                                      ),
                                                                                                    ),
                                                                                                    'display' => array(
                                                                                                      'hide' => array(
                                                                                                        'city' => 'city',
                                                                                                        'province' => 'province',
                                                                                                        'postal_code' => 'postal_code',
                                                                                                        'country' => 'country',
                                                                                                        'locpick' => 'locpick',
                                                                                                        'province_name' => 'province_name',
                                                                                                        'country_name' => 'country_name',
                                                                                                        'map_link' => 'map_link',
                                                                                                        'coords' => 'coords',
                                                                                                        'name' => 0,
                                                                                                        'street' => 0,
                                                                                                        'additional' => 0,
                                                                                                      ),
                                                                                                    ),
                                                                                                  ),
                                                                                                ),
                                                                                                'lid' => array(
                                                                                                  'default' => FALSE,
                                                                                                ),
                                                                                                'latitude' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'longitude' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'source' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'is_primary' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'delete_location' => array(
                                                                                                  'default' => FALSE,
                                                                                                  'nodiff' => TRUE,
                                                                                                ),
                                                                                              ),
                                                                                            ),
                                                                                            'display' => array(
                                                                                              'hide' => array(
                                                                                                'city' => 'city',
                                                                                                'province' => 'province',
                                                                                                'postal_code' => 'postal_code',
                                                                                                'country' => 'country',
                                                                                                'locpick' => 'locpick',
                                                                                                'province_name' => 'province_name',
                                                                                                'country_name' => 'country_name',
                                                                                                'map_link' => 'map_link',
                                                                                                'coords' => 'coords',
                                                                                                'name' => 0,
                                                                                                'street' => 0,
                                                                                                'additional' => 0,
                                                                                              ),
                                                                                            ),
                                                                                          ),
                                                                                        ),
                                                                                        'lid' => array(
                                                                                          'default' => FALSE,
                                                                                        ),
                                                                                        'latitude' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'longitude' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'source' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'is_primary' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'delete_location' => array(
                                                                                          'default' => FALSE,
                                                                                          'nodiff' => TRUE,
                                                                                        ),
                                                                                      ),
                                                                                    ),
                                                                                    'display' => array(
                                                                                      'hide' => array(
                                                                                        'city' => 'city',
                                                                                        'province' => 'province',
                                                                                        'postal_code' => 'postal_code',
                                                                                        'country' => 'country',
                                                                                        'locpick' => 'locpick',
                                                                                        'province_name' => 'province_name',
                                                                                        'country_name' => 'country_name',
                                                                                        'map_link' => 'map_link',
                                                                                        'coords' => 'coords',
                                                                                        'name' => 0,
                                                                                        'street' => 0,
                                                                                        'additional' => 0,
                                                                                      ),
                                                                                    ),
                                                                                  ),
                                                                                ),
                                                                                'lid' => array(
                                                                                  'default' => FALSE,
                                                                                ),
                                                                                'latitude' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'longitude' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'source' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'is_primary' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'delete_location' => array(
                                                                                  'default' => FALSE,
                                                                                  'nodiff' => TRUE,
                                                                                ),
                                                                              ),
                                                                            ),
                                                                            'display' => array(
                                                                              'hide' => array(
                                                                                'province' => 'province',
                                                                                'postal_code' => 'postal_code',
                                                                                'country' => 'country',
                                                                                'locpick' => 'locpick',
                                                                                'province_name' => 'province_name',
                                                                                'country_name' => 'country_name',
                                                                                'map_link' => 'map_link',
                                                                                'coords' => 'coords',
                                                                                'name' => 0,
                                                                                'street' => 0,
                                                                                'additional' => 0,
                                                                                'city' => 0,
                                                                              ),
                                                                            ),
                                                                          ),
                                                                        ),
                                                                        'lid' => array(
                                                                          'default' => FALSE,
                                                                        ),
                                                                        'latitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'longitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'source' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'is_primary' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'delete_location' => array(
                                                                          'default' => FALSE,
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                      ),
                                                                    ),
                                                                    'display' => array(
                                                                      'hide' => array(
                                                                        'province' => 'province',
                                                                        'postal_code' => 'postal_code',
                                                                        'country' => 'country',
                                                                        'locpick' => 'locpick',
                                                                        'province_name' => 'province_name',
                                                                        'country_name' => 'country_name',
                                                                        'map_link' => 'map_link',
                                                                        'coords' => 'coords',
                                                                        'name' => 0,
                                                                        'street' => 0,
                                                                        'additional' => 0,
                                                                        'city' => 0,
                                                                      ),
                                                                    ),
                                                                  ),
                                                                ),
                                                                'lid' => array(
                                                                  'default' => FALSE,
                                                                ),
                                                                'latitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'longitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'source' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'is_primary' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'delete_location' => array(
                                                                  'default' => FALSE,
                                                                  'nodiff' => TRUE,
                                                                ),
                                                              ),
                                                            ),
                                                            'display' => array(
                                                              'hide' => array(
                                                                'province' => 'province',
                                                                'postal_code' => 'postal_code',
                                                                'country' => 'country',
                                                                'locpick' => 'locpick',
                                                                'province_name' => 'province_name',
                                                                'country_name' => 'country_name',
                                                                'map_link' => 'map_link',
                                                                'coords' => 'coords',
                                                                'name' => 0,
                                                                'street' => 0,
                                                                'additional' => 0,
                                                                'city' => 0,
                                                              ),
                                                            ),
                                                          ),
                                                        ),
                                                        'lid' => array(
                                                          'default' => FALSE,
                                                        ),
                                                        'latitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'longitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'source' => array(
                                                          'default' => 0,
                                                        ),
                                                        'is_primary' => array(
                                                          'default' => 0,
                                                        ),
                                                        'delete_location' => array(
                                                          'default' => FALSE,
                                                          'nodiff' => TRUE,
                                                        ),
                                                      ),
                                                    ),
                                                    'display' => array(
                                                      'hide' => array(
                                                        'country' => 'country',
                                                        'locpick' => 'locpick',
                                                        'province_name' => 'province_name',
                                                        'country_name' => 'country_name',
                                                        'map_link' => 'map_link',
                                                        'coords' => 'coords',
                                                        'name' => 0,
                                                        'street' => 0,
                                                        'additional' => 0,
                                                        'city' => 0,
                                                        'province' => 0,
                                                        'postal_code' => 0,
                                                      ),
                                                    ),
                                                  ),
                                                ),
                                                'lid' => array(
                                                  'default' => FALSE,
                                                ),
                                                'latitude' => array(
                                                  'default' => 0,
                                                ),
                                                'longitude' => array(
                                                  'default' => 0,
                                                ),
                                                'source' => array(
                                                  'default' => 0,
                                                ),
                                                'is_primary' => array(
                                                  'default' => 0,
                                                ),
                                                'delete_location' => array(
                                                  'default' => FALSE,
                                                  'nodiff' => TRUE,
                                                ),
                                              ),
                                            ),
                                            'display' => array(
                                              'hide' => array(
                                                'country' => 'country',
                                                'locpick' => 'locpick',
                                                'province_name' => 'province_name',
                                                'country_name' => 'country_name',
                                                'map_link' => 'map_link',
                                                'coords' => 'coords',
                                                'name' => 0,
                                                'street' => 0,
                                                'additional' => 0,
                                                'city' => 0,
                                                'province' => 0,
                                                'postal_code' => 0,
                                              ),
                                            ),
                                          ),
                                        ),
                                        'lid' => array(
                                          'default' => FALSE,
                                        ),
                                        'latitude' => array(
                                          'default' => 0,
                                        ),
                                        'longitude' => array(
                                          'default' => 0,
                                        ),
                                        'source' => array(
                                          'default' => 0,
                                        ),
                                        'is_primary' => array(
                                          'default' => 0,
                                        ),
                                        'delete_location' => array(
                                          'default' => FALSE,
                                          'nodiff' => TRUE,
                                        ),
                                      ),
                                    ),
                                    'display' => array(
                                      'hide' => array(
                                        'name' => 'name',
                                        'street' => 'street',
                                        'additional' => 'additional',
                                        'city' => 'city',
                                        'province' => 'province',
                                        'postal_code' => 'postal_code',
                                        'country' => 'country',
                                        'locpick' => 'locpick',
                                        'province_name' => 'province_name',
                                        'country_name' => 'country_name',
                                        'map_link' => 'map_link',
                                        'coords' => 'coords',
                                      ),
                                    ),
                                  ),
                                ),
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                            'display' => array(
                              'hide' => array(
                                'name' => 'name',
                                'street' => 'street',
                                'additional' => 'additional',
                                'city' => 'city',
                                'province' => 'province',
                                'postal_code' => 'postal_code',
                                'country' => 'country',
                                'locpick' => 'locpick',
                                'province_name' => 'province_name',
                                'country_name' => 'country_name',
                                'map_link' => 'map_link',
                                'coords' => 'coords',
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 'name',
                        'street' => 'street',
                        'additional' => 'additional',
                        'city' => 'city',
                        'province' => 'province',
                        'postal_code' => 'postal_code',
                        'country' => 'country',
                        'locpick' => 'locpick',
                        'province_name' => 'province_name',
                        'country_name' => 'country_name',
                        'map_link' => 'map_link',
                        'coords' => 'coords',
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'name' => 'name',
                'street' => 'street',
                'additional' => 'additional',
                'city' => 'city',
                'province' => 'province',
                'postal_code' => 'postal_code',
                'country' => 'country',
                'locpick' => 'locpick',
                'province_name' => 'province_name',
                'country_name' => 'country_name',
                'map_link' => 'map_link',
                'coords' => 'coords',
              ),
            ),
          ),
          'country' => 'us',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Story Location',
      'weight' => '-4',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_maps
  $fields['story-field_maps'] = array(
    'field_name' => 'field_maps',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-89',
      'full' => array(
        'label' => array(
          'format' => 'above',
        ),
        'format' => 'imagefield__lightbox2__story_thumbnail__original',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_maps',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-89',
      ),
      'weight' => '6',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_maps',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-81',
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Maps and Other Visuals',
      'weight' => '6',
      'description' => 'Upload your Weave map images or other visuals to help tell your story.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_neighborhood
  $fields['story-field_neighborhood'] = array(
    'field_name' => 'field_neighborhood',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'content_taxonomy',
        'parent_id' => '',
        'field_id' => 'field_neighborhood',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-19',
      ),
      'weight' => '-3',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'content_taxonomy',
        'parent_id' => '',
        'field_id' => 'field_neighborhood',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-85',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '1',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '3',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Neighborhood',
      'weight' => '-3',
      'description' => 'Begin typing the neighborhood and the form will display matching results. Separate multiple neighborhoods with commas.',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_photos
  $fields['story-field_photos'] = array(
    'field_name' => 'field_photos',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-92',
      'full' => array(
        'label' => array(
          'format' => 'above',
        ),
        'format' => 'imagefield__lightbox2__story_thumbnail__original',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_photos',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-92',
      ),
      'weight' => '3',
      'parent' => '',
      'teaser' => array(
        'format' => 'story_teaser_thumbnail_linked',
        'exclude' => 0,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'story_teaser_thumbnail_linked',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_photos',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-98',
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Photos',
      'weight' => '3',
      'description' => 'Add photos to enhance your story.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_tags
  $fields['story-field_tags'] = array(
    'field_name' => 'field_tags',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'content_taxonomy',
        'parent_id' => '',
        'field_id' => 'field_tags',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-19',
      ),
      'weight' => '-1',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'content_taxonomy',
        'parent_id' => '',
        'field_id' => 'field_tags',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-87',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '4',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '-1',
      'description' => 'Begin typing a tag and the form will display matching results. Separate multiple tags with commas.',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_videos
  $fields['story-field_videos'] = array(
    'field_name' => 'field_videos',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-91',
      'full' => array(
        'label' => array(
          'format' => 'above',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_videos',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-91',
      ),
      'weight' => '4',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_videos',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-83',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '335',
      'video_height' => '252',
      'video_autoplay' => 0,
      'preview_width' => '240',
      'preview_height' => '180',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Videos',
      'weight' => '4',
      'description' => 'Embed a Youtube or Vimeo video related to your story.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_what_can_be_done
  $fields['story-field_what_can_be_done'] = array(
    'field_name' => 'field_what_can_be_done',
    'type_name' => 'story',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-93',
      'full' => array(
        'label' => array(
          'format' => 'above',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_what_can_be_done',
        'label_value' => 'What can be done?',
        'exclude' => 0,
        'weight' => '-93',
      ),
      'weight' => '1',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'bubble' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_what_can_be_done',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-84',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_what_can_be_done][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'What can be done',
      'weight' => '1',
      'description' => 'Please provide information on how the community can help improve this experience or better the situation.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('County');
  t('Documents');
  t('Maps and Other Visuals');
  t('Neighborhood');
  t('Photos');
  t('Story Location');
  t('Tags');
  t('Videos');
  t('What can be done');

  return $fields;
}
