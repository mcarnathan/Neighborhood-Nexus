
CONTENTS OF THIS FILE
---------------------

* Overview
* Features
* Requirements
* Known problems
* Version history
* Future plans
* Credits
* Recommended modules
* Similar projects

OVERVIEW
--------

This module aims to clean up, enhance and facilitate the customization of markup
for Drupal core and several popular contrib modules such as Panels.

FEATURES
--------

As of version 2.x:

Blocks
    From each individual block's configuration page (click "configure" on the
    block management screen), you can:
    * Disable or set the HTML5 element to use as the block wrapper,
    * Enable or disable an inner div,
    * Add classes to the outer block element,
    * Add custom attributes (i.e. role="navigation")
    * Set the HTML5 element to wrap the title,
    * Toggle whether the block title is displayed visually,
    * Disable or set the HTML5 element to wrap the content.

Panel panes
    By changing the pane style to "Clean markup" (click the gear in the top-
    right of a pane and click "Change" under "Style"), you can:
    * Disable or set the HTML5 element to use as the pane wrapper,
    * Enable or disable an inner div,
    * Add classes to the outer pane wrapper,
    * Add custom attributes (i.e. role="navigation")
    * Set the HTML5 element to wrap the title,
    * Toggle whether the block title is displayed visually,
    * Disable or set the HTML5 element to wrap the content.

Panel regions
    By changing the region style to "Clean markup" (click the gear in the top-
    left of a region and click "Change" under "Style"; or click "Display
    settings" on the panel itself), you can:
    * Disable or set the HTML5 element to use as the region wrapper,
    * Enable or disable an inner div,
    * Add classes to the outer region element,
    * Add custom attributes (i.e. role="navigation").
    * Enable or disable separator divs between panes in the region.

Panel Layouts
    Layouts have been provided to take advantage of Clean Markup's ability to
    output the minimal amount of markup.
    * One Column Clean: one region and single <section> wrapper.
    * One Column Reset: one region with no wrapper.
    * Six pack: six regions.
    * Myriad: five rows with four regions each that will output the absolute
      minimum markup. For example, a row with only one region will not output the row wrapper.

REQUIREMENTS
------------

Clean markup API
    no dependencies.
Clean block markup
    Block (in core) and Clean markup API
Clean panels markup
    Panels and Clean markup API
Tokens (Optional)
    For use in the custom attributes.

KNOWN PROBLEMS
--------------

We don't know of any problems at this time, so if you find one, please let us
know by adding an issue!

VERSION HISTORY
---------------

The 1.x branch contains only the Clean Block Markup module. Updates made to
other branches that affect Clean Block Markup are being backported to this
branch if possible.

The 2.x branch is the current stable branch, and contains both the Clean Block
Markup and the Clean Panel Markup modules. Updates made to other branches that
affect Clean Block Markup and Clean Panel markup are being backported to this
branch if possible.

FUTURE PLANS
------------

The 3.x branch is currently in development, and contains the Clean Block Markup,
Clean Panel Markup and Clean Views Markup blocks.

We may also write something for Display Suite.

CREDITS
-------

Concept by rhache. Coding by mparker17 with assistance from rhache.

RECOMMENDED MODULES
-------------------

If you want to clean up the markup of nodes, comments, taxonomy terms or users,
check out Display Suite.

If you want to clean up the markup of fields, check out Fences.

If you want a really clean base theme, check out Mothership.

SIMILAR PROJECTS
----------------

We aren't aware of any projects similar to this one.
