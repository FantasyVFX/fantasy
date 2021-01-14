<?php
$z[0]=Array("field","",30,56);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","",64,92);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",95,124);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);      \r\n@me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\r\n",124,395);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("php","\r\n    \$id = \$refObj->Fields['id'];\r\n    \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\r\n    \$db->SetQuery(\$sql);\r\n    \$db->Execute();\r\n    if(\$db->GetTotalRow()){\r\n        echo '<ul class=\"subnav\">';\r\n        while(\$row = \$db->GetArray()){\r\n            \$url = str_replace('{cmspath}','',(\$row[typedir]));\r\n            echo \"<li><a href=\".\$url.\">\".(\$row[typename]).\"<i class='fa fa-angle-right'></i></a></li>\";\r\n        };\r\n        echo '</ul>';\r\n    };\r\n    ",401,890);
$z[4][4]=array();

?>