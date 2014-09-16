<?php
/**
 * @file
 * opensky_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function opensky_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_browse:http://islandora.dls.ucar.edu:8181/islandora
  $menu_links['main-menu_browse:http://islandora.dls.ucar.edu:8181/islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://islandora.dls.ucar.edu:8181/islandora',
    'router_path' => '',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_browse:http://islandora.dls.ucar.edu:8181/islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_submit:node/5
  $menu_links['main-menu_submit:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Submit',
    'options' => array(
      'identifier' => 'main-menu_submit:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse');
  t('Home');
  t('Submit');


  return $menu_links;
}
