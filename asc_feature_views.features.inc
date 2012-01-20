<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function asc_feature_views_imagecache_default_presets() {
  $items = array(
    'news_thumb' => array(
      'presetname' => 'news_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '79',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_thumb' => array(
      'presetname' => 'person_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '90',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function asc_feature_views_views_api() {
  return array(
    'api' => '2',
  );
}
