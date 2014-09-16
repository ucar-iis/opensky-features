<?php
/**
 * @file
 * opensky_features.features.inc
 */

/**
<<<<<<< HEAD
=======
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function opensky_features_islandora_solr_fields_features_default_fields() {
  return array();
}

/**
>>>>>>> 6cec0680ca41a5fc64a4927d39bf83a1710b2b96
 * Implements hook_node_info().
 */
function opensky_features_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
