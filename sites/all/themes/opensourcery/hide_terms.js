$(document).ready( function() {
  $('.view-term-blocks .view-content .item-list').each( function(index) {
    if ($('li', this).length > 10) {
      $('li:gt(9)', this).hide();
      $('<span class="more-link">' + Drupal.t('View all') + '</span>')
        .appendTo(this)
        .click( function() {
          $(this)
            .hide()
            .siblings('ul').children('li:gt(5)').show();
        });
    } // if
  });
});
