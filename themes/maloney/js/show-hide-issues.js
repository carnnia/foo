jQuery(document).ready(function() {
      //find all divs inside of div with class issue-show and hide them after documnet loads
      jQuery('div.issue-show:eq(0)> div').hide();  
      //listen to the on click event for h3 in div with class issue-show and toggle visibility of div next to it
      jQuery('div.issue-show:eq(0)> h3').click(function() {
        jQuery(this).next().slideToggle('slow');
  });
});
  