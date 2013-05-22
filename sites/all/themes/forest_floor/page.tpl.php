<?php
// $Id$

/**
 * @file
 * The template for all pages.
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>">

<head>
  <title>
    <?php print $head_title ?>
  </title>
  <?php print $head ?>
  <?php print $styles ?>
  <!--[if lt IE 7]>
    <link rel="stylesheet" href="<?php print $front_page . $directory; ?>/ie_lt7.css" type="text/css">
  <![endif]-->
  <?php print $scripts ?>
  <script type="text/javascript"><?php // Needed to avoid Flash of Unstyle Content in IE ?> </script>
</head>

<body<?php print phptemplate_body_attributes($is_front, $layout); ?>>

  <div id="wrapper">

    <?php if (isset($secondary_links)) { ?>
      <div id="secondary">
        <?php print theme('links', $secondary_links, array('class' =>'links', 'id' => 'subnavlist')) ?>
      </div>
    <?php } ?>
      
    <div id="header-region">
      <?php print $header ?>
    </div>

    <div id="logo-search">
      <?php if ($logo) { ?>
        <div id="logo">
          <a href="<?php print $front_page ?>" title="<?php print t('Home') ?>">
            <img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" />
          </a>
        </div>
      <?php } ?>
      <?php if ($search_box) : ?>
        <div id="search-box">
          <?php print $search_box ?>
        </div>
      <?php endif; ?>
    </div>

    <div id="header" class="clear-block">
      <h1><a href="<?php print $front_page ?>" title="<?php print t('Home') ?>">&nbsp;</a></h1>
      <?php if ($site_slogan) { ?>
        <div class='site-slogan'>
          <?php print $site_slogan ?>
        </div>
      <?php } ?>
    </div>

    <?php if (isset($primary_links)) { ?>
      <div id="primary">
        <?php print theme('links', $primary_links, array('class' =>'links', 'id' => 'navlist')) ?>
      </div>
    <?php } ?>
    
    <div class="clear-block">
      
      <?php if ($left) { ?>
        <div id="sidebar-left" class="column">
          <?php print $left ?>
        </div>
      <?php } ?>
      
      <div id="main" class="column">
        <div id="main-inner">
          <?php if ($mission) { ?>
            <div id="mission">
              <?php print $mission ?>
            </div>
          <?php } ?>
          <div class="inner">
            <div class="block-inner">
              <h1 class="title">
                <?php print $title ?>
              </h1>
              <?php if ($tabs){ ?>
                <div class="tabs">
                  <?php print $tabs ?>
                </div>
              <?php } ?>
              <?php print $help ?>
              <?php if ($show_messages && $messages) print $messages; ?>
              <div id="content_top">
                <?php print $content_top; ?>
              </div>
              <?php print $content; ?>
              <?php print $feed_icons; ?>
            </div>
          </div>
        </div>
      </div>

      <?php if ($right): ?>
        <div id="sidebar-right" class="column"><div id="sr2"><div id="sr3"><div id="sr4"><div id="sr5">
          <?php print $right ?>
        </div></div></div></div></div>
      <?php endif; ?>

    </div>

  </div>

  <div id="footer">
  <?php echo $footer_message . $footer ?><br/>
  </div>

  <?php print $closure ?>

</body>
</html>
