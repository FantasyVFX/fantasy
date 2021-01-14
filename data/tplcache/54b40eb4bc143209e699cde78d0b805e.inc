<li id="newsitem_[field:autoindex runphp='yes']@me=$GLOBALS['autoindex']-1;[/field:autoindex]" class="wow newstitem left"><a class="newscontent" target="_blank" href="[field:arcurl/]">
            <div class="news_wrapper">
              <div class="newsbody">
                <p class="date"><span class="md">[field:pubdate function="MyDate('Y',@me)"/]<span>-</span></span><span class="year">[field:pubdate function="MyDate('m-d',@me)"/]</span></p>
                <p class="title">[field:title/]</p>
                <div class="separator"></div>
                <p class="description">[field:description function='cn_substr(Html2text("@me")."...",150)'/]...</p>
              </div>
            </div>
            <div class="newsimg" style="background-image:url([field:picname/])"></div>
            </a>
            <a href="/" target="_blank" class="details">more<i class="fa fa-angle-right"></i></a>
            </li>