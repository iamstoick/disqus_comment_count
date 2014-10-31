<?php
/**
 * @file
 * disqus_comment_count.views.inc
 */

/**
 * Implements hook_views_data().
 */
function disqus_comment_count_views_data() {
  $data = array();
  $data['disqus_comment_count']['table']['group'] = t('Disqus Comments');
  $data['disqus_comment_count']['table']['join'] = array(
    'node' => array(
      'table' => 'disqus_comment_count',
      'left_field' => 'nid',
      'field' => 'nid',
      'type' => 'left outer',
    ),
  );
  $data['disqus_comment_count']['count'] = array(
    'title' => t('Comment Count'),
    'help' => t('Number of Disqus posts on a node.'),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
