<?php
$z[0]=Array("field","",377,406);
$z[0][4]=array();
$z[0][4]['name']="keywords";
$z[1]=Array("field","",442,501);
$z[1][4]=array();
$z[1][4]['name']="description";
$z[1][4]['function']="html2text(@me)";
$z[2]=Array("field","",983,1002);
$z[2][4]=array();
$z[2][4]['name']="title";
$z[3]=Array("global","",1003,1029);
$z[3][4]=array();
$z[3][4]['name']="cfg_webname";
$z[4]=Array("type","list.php?tid=[field:id/]",1718,1778);
$z[4][4]=array();
$z[4][4]['typeid']="6";
$z[5]=Array("type","[field:typelink/]",1780,1833);
$z[5][4]=array();
$z[5][4]['typeid']="6";
$z[6]=Array("field","(@me==\"6\")? @me=\" class='active' \":@me=\"\";",1835,1927);
$z[6][4]=array();
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n<li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\r\n ",1953,2146);
$z[7][4]=array();
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li><a href='~typelink~' class='active'>~typename~</a></li>";
$z[8]=Array("list","\r\n<div class=\"newstitem plr10 wow fadeIn\"><a class=\"newsinfo\" href=\"view.php?aid=[field:id/]\">\r\n      	<div class=\"newsimage\"><img src=\"[field:picname/]\" width=\"auto\" height=\"auto\"/></div>\r\n        <div class=\"newsdate\">\r\n          <p class=\"md\">[field:pubdate function=\"MyDate('m-d',@me)\"/]</p>\r\n          <p class=\"year\">[field:pubdate function=\"MyDate('Y',@me)\"/]</p>\r\n        </div>\r\n        <div class=\"newsbody\">\r\n          <p class=\"title ellipsis\">[field:title/]</p>\r\n          <p class=\"description\">[field:description function=\"cn_substr(@me,200)\"/]</p>\r\n        </div>\r\n        </a></div>\r\n",2213,2851);
$z[8][4]=array();
$z[8][4]['pagesize']="8";
$z[9]=Array("pagelist","",2891,2947);
$z[9][4]=array();
$z[9][4]['listitem']="pre,next,pageno";
$z[9][4]['listsize']="1";
$z[10]=Array("include","",2973,3010);
$z[10][4]=array();
$z[10][4]['filename']="head_m.htm";

?>