<?php $current_congress = floor((date('Y') - 2001)/2) + 107; ?>

<div class="node-editors-choice">
  <div id="thomas-bill-search" class="section-content">
    <h3><?php print t('Thomas Bill Search'); ?></h3>
    <div class="block-content" id="billsearch" >
      
      <form name="thomasBill" method="post" action="http://thomas.loc.gov/cgi-bin/thomas" target="_blank">
          <p><?php print t('Search by Bill Number (ex. HR 14)'); ?></p>
          <input name="congress" value="<?php print $current_congress; ?>" type="hidden" />
          <input name="database" value="text" type="hidden" />
          <input name="MaxDocs" value="1000" type="hidden" />
          <input name="querytype" id="bill" value="billno" type="hidden" />
          <p class="clearfix">
            <input class="form-text" name="query" value="" title="<?php print t('search bill number') ?>" />
            <input class="form-submit" name="Enter" type="submit" value="<?php print t('Submit Query'); ?>" />
          </p>
        </form>
        
        <form name="thomasText" method="post" action="http://thomas.loc.gov/cgi-bin/thomas" target="_blank">
          <p><?php print t('Search by Word or Phrase (ex. Healthcare)'); ?></p>
          <input name="congress" value="<?php print $current_congress; ?>" type="hidden" />
          <input name="database" value="text" type="hidden" />
          <input name="MaxDocs" value="1000" type="hidden" />
          <input name="querytype" id="phrase" value="phrase" type="hidden" />
          <p class="clearfix">
            <input class="form-text" name="query" value="" title="<?php print t('search word/phrase') ?>" />
            <input class="form-submit" name="Enter" type="submit" value="<?php print t('Submit Query'); ?>" />
          </p>
        </form>
      
    </div>
  </div>
</div>

<script>
(function($) {
  $("#billsearch .form-text[title]").each(function () {
      $(this).val($(this).attr('title'));
      $(this).bind('focus',function() {
          if ($(this).val() == $(this).attr('title')) {
              $(this).val('');
          }
      });
      $(this).bind('blur',function() {
          if ($(this).val() == '') {
              $(this).val($(this).attr('title'));
          }
      });
  });
  
})(jQuery)
</script>
