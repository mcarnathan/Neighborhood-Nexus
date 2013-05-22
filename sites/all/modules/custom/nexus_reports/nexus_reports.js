Drupal.behaviors.nexusForm = function (context) {
  if (jQuery.browser.msie) {
    trig_bind()
  }
  $("#edit-continue").hide()
  $(".filter_button_hide").show()
  $(".locate_button_hide").show()
  $(".locate_nojs").addClass("hide_no_js")
}

//IE waits until another event to send the 'change' events on radio's and checkboxes
//This bind a trigger for those events on click.
function trig_bind() {
  $("input[type='checkbox']").unbind( 'click' )
  $("input[type='radio']").unbind( 'click' )
  $("input[type='checkbox']").bind( 'click', function() {
    $(this).trigger( 'change' )
  })
  $("input[type='radio']").bind( 'click', function() {
    $(this).trigger( 'change' )
  })
}
