<div class="newstitem plr10 wow fadeIn" data-wow-delay="0.[field:autoindex runphp='yes']@me=$GLOBALS['autoindex']-1;[/field:autoindex]s"><a class="newsinfo" href="view.php?aid=[field:id/]">
      	<div class="newsimage"><img src="[field:picname/]" width="auto" height="auto"/></div>
        <div class="newsdate">
          <p class="md">[field:pubdate function="MyDate('m-d',@me)"/]</p>
          <p class="year">[field:pubdate function="MyDate('Y',@me)"/]</p>
        </div>
        <div class="newsbody">
          <p class="title ellipsis">[field:title/]</p>
          <p class="description">[field:description function='cn_substr(Html2text("@me")."...",150)'/]...</p>
        </div>
        </a></div>