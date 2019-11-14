<div class="section-content" id="latest-news"> 
  <h3><?php print t('Latest News'); ?></h3>
  <?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
    <div class="divide"></div>
  <?php endforeach; ?>
  <div class="read-more"><?php print l(t('Read More News Releases &raquo;'), 'press-releases', array('html' => TRUE)); ?></div>
</div>
