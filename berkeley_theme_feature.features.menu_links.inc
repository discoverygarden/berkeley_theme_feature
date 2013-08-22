<?php
/**
 * @file
 * berkeley_theme_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function berkeley_theme_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/islandora/simple_workflow/list
  $menu_links['navigation:admin/islandora/simple_workflow/list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/islandora/simple_workflow/list',
    'router_path' => 'admin/islandora/simple_workflow/list',
    'link_title' => 'Manage Unpublished Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: navigation:berkeley_labs/submit_publication_options
  $menu_links['navigation:berkeley_labs/submit_publication_options'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'berkeley_labs/submit_publication_options',
    'router_path' => 'berkeley_labs/submit_publication_options',
    'link_title' => 'Publication Options',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: navigation:islandora
  $menu_links['navigation:islandora'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Islandora Repository',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: navigation:islandora-bookmark
  $menu_links['navigation:islandora-bookmark'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'My bookmarks',
    'options' => array(
      'attributes' => array(
        'title' => 'Track and manage bookmarks',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: navigation:node/6
  $menu_links['navigation:node/6'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Publication Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: navigation:node/add/article
  $menu_links['navigation:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/node_export
  $menu_links['navigation:node/add/node_export'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/node_export',
    'router_path' => 'node/add/node_export',
    'link_title' => 'Node export: import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import content using <em>Node export</em>.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/slide
  $menu_links['navigation:node/add/slide'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/slide',
    'router_path' => 'node/add/slide',
    'link_title' => 'Slide',
    'options' => array(
      'attributes' => array(
        'title' => 'For slideshow',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:profile
  $menu_links['navigation:profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'profile',
    'router_path' => 'profile',
    'link_title' => 'User list',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Article');
  t('Basic page');
  t('Compose tips');
  t('Islandora Repository');
  t('Manage Unpublished Items');
  t('My bookmarks');
  t('Node export: import');
  t('Publication Options');
  t('Publication Search');
  t('Search');
  t('Slide');
  t('User list');


  return $menu_links;
}
