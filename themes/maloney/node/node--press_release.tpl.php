<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php //dpm($content); ?>
    <div class="press-contact">
      <span class="contact-person"><?php print render($content['field_press_contact']) ?></span>
    </div>  
      
    <?php if($main_image): ?>
    <table class="photo-with-caption photo-with-caption-left">
      <?php if($caption): ?><caption align="bottom"><?php print $caption; ?></caption><?php endif; ?>
      <tr>
        <td><?php print $main_image; ?></td>
      </tr>
    </table><!--/photo with caption-->
    <?php endif; ?> 

    <?php print render($content['body']); ?>
    
    <?php if(!empty($content['field_files'])): ?>
    <div class="downloads">
      <h4><?php print t('Downloads'); ?></h4>
      <ul>
        <?php print strip_tags(render($content['field_files']), '<li><a>'); ?>
      </ul>
    </div><!--/downloads-->
    <?php endif; ?>
  </div>  
</div>
<div id="print-friendly"><a title="Print Friendly" href="javascript:window.print();"><img src="/sites/maloney.house.gov/files/print-freindly.jpg" alt="Print Friendly" border="0"/></a></div>