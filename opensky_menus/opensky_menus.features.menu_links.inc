<?php
/**
 * @file
 * opensky_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function opensky_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/4
  $menu_links['main-menu_about:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: main-menu_browse:islandora/object/islandora%3Aroot
  $menu_links['main-menu_browse:islandora/object/islandora%3Aroot'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora/object/islandora%3Aroot',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_browse:islandora/object/islandora%3Aroot',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:node/8
  $menu_links['main-menu_contact:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
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
  // Exported menu link: main-menu_questions:node/7
  $menu_links['main-menu_questions:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Questions',
    'options' => array(
      'identifier' => 'main-menu_questions:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
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
  t('About');
  t('Browse');
  t('Contact');
  t('Home');
  t('Questions');
  t('Submit');


  return $menu_links;
}
