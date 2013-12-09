(function ($) {
  Drupal.behaviors.blankTheme = {
    attach: function (context, settings) {
      var toggle = $(".toggler");
      if (toggle.length > 0) {
        toggle.click(function(){
          toggle.next().slideToggle("slow");
          return false;
        }).next().hide();
      }
    }
  };
})(jQuery);
