// $Id:$

(function ($) {

  $(document).ready(function() {
    var COOKIE_EXPIRE_DAYS = 365;

    if (!$.cookie("house_enews_popup")){
      $('.html').prepend('<div id="html-greyed-outxx"></div>');
      $('#block-house-enews-popup-house-enews-popup').hide().delay(50000).fadeIn(0);
    }

    $('#form-enews-submit').click(function() {
      $.cookie("house_enews_popup", 1, { expires:COOKIE_EXPIRE_DAYS});
    });
    
    $('#close-enews-popup').click(function() {
      $.cookie("house_enews_popup", 1, { expires:COOKIE_EXPIRE_DAYS});
      $('#block-house-enews-popup-house-enews-popup').fadeOut(1000);
      $('#html-greyed-out').fadeOut(1000);
    });
    
    $('#form-enews-cancel').click(function() {
      $.cookie("house_enews_popup", 1, { expires:COOKIE_EXPIRE_DAYS});
      $('#block-house-enews-popup-house-enews-popup').fadeOut(1000);
      $('#html-greyed-out').fadeOut(1000);
      return false;
    });
	$('#form-enews-cancel2').click(function() {
      $.cookie("house_enews_popup", 1, { expires:COOKIE_EXPIRE_DAYS});
      $('#block-house-enews-popup-house-enews-popup').fadeOut(1000);
      $('#html-greyed-out').fadeOut(1000);
      return false;
    });
	
    
  });
  
})(jQuery);

 