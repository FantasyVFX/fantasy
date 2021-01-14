<?php
$z[0]=Array("field","",19,45);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);      \r\n@me=is_array(\$row)?'href=\"javascript:;\"':'';\r\n",50,308);
$z[1][4]=array();
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("field","",328,344);
$z[2][4]=array();
$z[2][4]['name']="id";
$z[3]=Array("field","",399,428);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);      \r\n@me=is_array(\$row)?'<span class=\"more\"><span class=\"h\"></span><span class=\"h v transform\"></span></span>':'';\r\n",429,752);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("php","\r\n    \$id = \$refObj->Fields['id'];\r\n    \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\r\n    \$db->SetQuery(\$sql);\r\n    \$db->Execute();\r\n    if(\$db->GetTotalRow()){\r\n        echo '<ul class=\"subnav transform\" data-height=\"auto\">';\r\n        while(\$row = \$db->GetArray()){\r\n            \$url = str_replace('{cmspath}','',(\$row[typedir]));\r\n            echo \"<li><a href=\".\$url.\">\".(\$row[typename]).\"</a></li>\";\r\n        };\r\n        echo '</ul>';\r\n    };\r\n    ",761,1246);
$z[5][4]=array();

?>