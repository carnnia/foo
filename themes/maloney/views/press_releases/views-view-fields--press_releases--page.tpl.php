<?php
/**
 * Custom vars defined in house_core
 *
 * $title - linked title
 * $created_date - formated posting date
 * $type - content type or story type term if story type
 * $summary - summary text
 * 
 */
?>
<div class="list-item">
  <div class="date-tag">
    <span class="date"><?php print $created_date; ?></span>
  </div><!--/date tag-->
  <h4><?php print $title; ?></h4>
  <?php if(!empty($issues)): ?>
  <div class="categories">
    <span class="category"><?php print t("Issues:"); ?></span> <?php print $issues; ?>
  </div>
  <?php endif; ?>  
  <?php if ($summary): ?>
    <p><?php print $summary; ?></p>
  <?php endif; ?>
</div><!--/list-item-->