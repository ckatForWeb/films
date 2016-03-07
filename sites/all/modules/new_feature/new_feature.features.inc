<?php
/**
 * @file
 * new_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function new_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function new_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function new_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'critique' => array(
      'name' => t('critique'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Author'),
      'help' => '',
    ),
    'movie_review' => array(
      'name' => t('Movie review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('review itle'),
      'help' => '',
    ),
    'new_film' => array(
      'name' => t('new Film'),
      'base' => 'node_content',
      'description' => t('добавляет новый фильм'),
      'has_title' => '1',
      'title_label' => t('Movie title'),
      'help' => '',
    ),
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
