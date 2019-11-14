<div class="list-item">
  <div class="date-tag">
    <span class="date hide-me"><?php print $created_date; ?></span>
  </div><!--/date tag-->
  <h4><?php print $title; ?></h4>
  <?php if(!empty($issues)): ?>
  <div class="categories">
    <span class="category"><?php print t("Issues:"); ?></span> <?php print $issues; ?>
  </div>
  <?php endif; ?>  
</div><!--/list-item-->