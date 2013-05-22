<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function nn_geoblog_taxonomy_default_vocabularies() {
  return array(
    'county' => array(
      'name' => 'County',
      'description' => 'A list of counties',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_county',
      'weight' => '-10',
      'nodes' => array(
        'story' => 'story',
      ),
    ),
    'neighborhood' => array(
      'name' => 'Neighborhood',
      'description' => 'A list of neighborhoods',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_neighborhood',
      'weight' => '-9',
      'nodes' => array(
        'story' => 'story',
      ),
    ),
    'tags' => array(
      'name' => 'Tags',
      'description' => 'Tags are used to freely associate and categorize content',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags',
      'weight' => '-8',
      'nodes' => array(
        'story' => 'story',
      ),
    ),
  );
}
