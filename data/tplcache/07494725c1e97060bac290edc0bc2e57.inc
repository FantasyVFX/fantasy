<li class="navitem"><a class='{dede:field.currentstyle/}' href="{dede:field name='typeurl'/}" >{dede:field name='typename'/}{dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);      
@me=is_array($row)?'<i class="fa fa-angle-down"></i>':'';
{/dede:field}</a>
{dede:php}
    $id = $refObj->Fields['id'];
    $sql = ("SELECT * FROM dede_arctype where reid ='$id'");
    $db->SetQuery($sql);
    $db->Execute();
    if($db->GetTotalRow()){
        echo '<ul class="subnav">';
        while($row = $db->GetArray()){
            $url = str_replace('{cmspath}','',($row[typedir]));
            echo "<li><a href=".$url.">".($row[typename])."<i class='fa fa-angle-right'></i></a></li>";
        };
        echo '</ul>';
    };
    {/dede:php}
    </li>