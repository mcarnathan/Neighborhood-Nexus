<?php
/**
 * @file
 * panel_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'six_pack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_first' => NULL,
      'one_second' => NULL,
      'one_third' => NULL,
      'one_fourth' => NULL,
      'two_first' => NULL,
      'two_second' => NULL,
      'two_third' => NULL,
      'two_fourth' => NULL,
      'three_first' => NULL,
      'three_second' => NULL,
      'three_third' => NULL,
      'three_fourth' => NULL,
      'four_first' => NULL,
      'four_second' => NULL,
      'four_third' => NULL,
      'four_fourth' => NULL,
      'five_first' => NULL,
      'five_second' => NULL,
      'five_third' => NULL,
      'five_fourth' => NULL,
      'first' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'banner',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'second' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'frontpage-content',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
    ),
    'first' => array(
      'style' => 'clean_element',
    ),
    'second' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'first';
    $pane->type = 'views';
    $pane->subtype = 'banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rounded',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['first'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-quick-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rounded',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['second'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'See How Your County Compares',
      'body' => '<p style="text-align:center"><a href="/profiles-main">[[{"type":"media","view_mode":"media_original","fid":"43","attributes":{"alt":"","class":"media-image","height":"63","typeof":"foaf:Image","width":"118"}}]]</a></p>

<p style="text-align:center">Whether it is in a downloadable report or an interactive dashboard, Neighborhood Nexus has&nbsp;data you can use. Go see it. <a href="/profiles-main">Now</a>!&nbsp;</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rounded',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['second'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'I Want To...',
      'body' => '<table>
	<tbody>
		<tr>
			<td>Download data profiles...</td>
			<td><a href="/profiles-main"><img alt="" class="attr__typeof__foaf:Image img__fid__46 img__view_mode__media_original media-image" src="/sites/default/files/reports_50px.jpg" style="height:33px; width:50px" /></a></td>
		</tr>
		<tr>
			<td>Explore interactive mapping...</td>
			<td><a href="/maps"><img alt="" class="attr__typeof__foaf:Image img__fid__47 img__view_mode__media_original media-image" src="/sites/default/files/foreclosure_hispanic_50px.jpg" style="height:43px; width:50px" /></a></td>
		</tr>
		<tr>
			<td>Download the raw data...</td>
			<td><a href="/data-center"><img alt="" class="attr__typeof__foaf:Image img__fid__48 img__view_mode__media_original media-image" src="/sites/default/files/data_pic_50px.jpg" style="height:23px; width:50px" /></a></td>
		</tr>
		<tr>
			<td>Do custom research...</td>
			<td><a href="/services"><img alt="" class="attr__typeof__foaf:Image img__fid__49 img__view_mode__media_original media-image" src="/sites/default/files/ta.jpg" style="height:21px; width:50px" /></a></td>
		</tr>
	</tbody>
</table>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rounded',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['second'][2] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Hang Out On The Corner!',
      'body' => '<p style="text-align:center"><a href="/introduction-neighborhood-corner">[[{"type":"media","view_mode":"media_original","fid":"42","attributes":{"alt":"","class":"media-image","height":"92","typeof":"foaf:Image","width":"188"}}]]</a></p>

<p style="text-align:center"><strong>New to the site</strong>! Tell&nbsp;your story at Neighborhood Corner</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rounded',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['second'][3] = 'new-5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
