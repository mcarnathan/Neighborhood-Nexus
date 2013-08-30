<?php

$aliases['nnx.prod'] = array(
  'uri' => 'neighborhoodnexus.org',
  'root' => '/var/www/dev.neighborhoodnexus.org/docroot',
  'remote-host' => '74.121.193.202',
  'remote-user' => '403e',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array (
    'sql-sync' => array (
      'no-cache' => TRUE,
    ),
  ),
  'target-command-specific' => array (
    'sql-sync' => array (
      'simulate' => '1',
    ),
    'rsync' => array (
      'simulate' => '1',
    ),
  ),
);

$aliases['nnx.stage'] = array(
  'parent' => '@nnx.prod',
  'uri' => 'dev.neighborhoodnexus.org',
  'root' => '/var/www/stage.neighborhoodnexus.org/docroot',
);

$aliases['nnx.dev'] = array(
  'parent' => '@nnx.prod',
  'uri' => 'stage.neighborhoodnexus.org',
  'root' => '/var/www/dev.neighborhoodnexus.org/docroot',
  'command-specific' => array (
    'sql-sync' => array (
      'no-cache' => TRUE,
    ),
  ),
  'target-command-specific' => array (
    'sql-sync' => array (
      'simulate' => '0',
    ),
    'rsync' => array (
      'simulate' => '0',
    ),
  ),
);
