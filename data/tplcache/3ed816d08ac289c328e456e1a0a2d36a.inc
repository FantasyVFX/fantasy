<li id="projectitem_[field:autoindex runphp='yes']@me=$GLOBALS['autoindex']-1;[/field:autoindex]" class="projectitem wow">
                 <a href="[field:arcurl/]" class="projectitem_content" target="_blank">
                    <div class="projectitem_wrapper">
                        <div class="project_img"><img src="[field:picname/]" width="650" height="385"/></div>
                        <div class="project_info">
                           <div>
                              <p class="title">[field:title/]</p>
                              <p class="subtitle">[field:shorttitle/]</p>
                           </div>
                        </div>
                    </div>
                  </a>
               </li>
                               {/dede:arclist}    </ul>
          </div><!--wrapper-->
       </div>
       <!--projectlist-->
   </div>
</div><!--project-->
           
        </div>
      </div>
      <div class="clear"></div>
    </div>
   
  </div>
</div>
<script type="text/javascript">
$(document).ready(function(e) {
    if($('#post_slider ul').children().length <= 1){
        $('#post_slider ul').bxSlider({
		autoControls:flase,
	    }).destroySlider();
     }else{
        $('#post_slider ul').bxSlider({
		nextText: '<i class="fa fa-angle-right"></i>',
		prevText: '<i class="fa fa-angle-left"></i>',
		auto    : 0
	    });   
     };
});
</script>
</div>{dede:include filename="footer.htm"