<?php
$z[0]=Array("global","",40,66);
$z[0][4]=array();
$z[0][4]['name']="cfg_powerby";
$z[1]=Array("global","",193,217);
$z[1][4]=array();
$z[1][4]['name']="cfg_beian";
$z[2]=Array("field","(@me==\"\")? @me=\"active\":@me=\"\";",548,629);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","\r\n    <li class=\"navitem {dede:field.currentstyle/}\"><a {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);      \r\n@me=is_array(\$row)?'href=\"javascript:;\"':'';\r\n{/dede:field} href=\"list.php?tid={dede:field.id/}\" class=\"hassub\"><span class=\"circle transform\"></span>{dede:field name='typename'/} {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);      \r\n@me=is_array(\$row)?'<span class=\"more\"><span class=\"h\"></span><span class=\"h v transform\"></span></span>':'';\r\n{/dede:field} \r\n</a>\r\n{dede:php}\r\n    \$id = \$refObj->Fields['id'];\r\n    \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\r\n    \$db->SetQuery(\$sql);\r\n    \$db->Execute();\r\n    if(\$db->GetTotalRow()){\r\n        echo '<ul class=\"subnav transform\" data-height=\"auto\">';\r\n        while(\$row = \$db->GetArray()){\r\n            \$url = str_replace('{cmspath}','',(\$row[typedir]));\r\n            echo \"<li><a href=\".\$url.\">\".(\$row[typename]).\"</a></li>\";\r\n        };\r\n        echo '</ul>';\r\n    };\r\n    {/dede:php}\r\n    </li>\r\n	 ",720,2065);
$z[3][4]=array();
$z[3][4]['typeid']="top";
$z[3][4]['currentstyle']="active";

?>