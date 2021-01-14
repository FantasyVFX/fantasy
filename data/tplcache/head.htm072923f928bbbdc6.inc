<?php
$z[0]=Array("field","(@me==\"\")? @me=\"active\":@me=\"\";",156,237);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channelartlist","\r\n<li class=\"navitem\"><a class='{dede:field.currentstyle/}' href=\"{dede:field name='typeurl'/}\" >{dede:field name='typename'/}{dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);      \r\n@me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\r\n{/dede:field}</a>\r\n{dede:php}\r\n    \$id = \$refObj->Fields['id'];\r\n    \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\r\n    \$db->SetQuery(\$sql);\r\n    \$db->Execute();\r\n    if(\$db->GetTotalRow()){\r\n        echo '<ul class=\"subnav\">';\r\n        while(\$row = \$db->GetArray()){\r\n            \$url = str_replace('{cmspath}','',(\$row[typedir]));\r\n            echo \"<li><a href=\".\$url.\">\".(\$row[typename]).\"<i class='fa fa-angle-right'></i></a></li>\";\r\n        };\r\n        echo '</ul>';\r\n    };\r\n    {/dede:php}\r\n    </li>\r\n",315,1298);
$z[1][4]=array();
$z[1][4]['typeid']="top";
$z[1][4]['currentstyle']="active";

?>