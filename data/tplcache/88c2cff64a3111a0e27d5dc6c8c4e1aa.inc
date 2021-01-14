<li class="navitem {dede:field.currentstyle/}"><a {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);      
@me=is_array($row)?'href="javascript:;"':'';
{/dede:field} href="list.php?tid={dede:field.id/}" class="hassub"><span class="circle transform"></span>{dede:field name='typename'/} {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);      
@me=is_array($row)?'<span class="more"><span class="h"></span><span class="h v transform"></span></span>':'';
{/dede:field} 
</a>
{dede:php}
    $id = $refObj->Fields['id'];
    $sql = ("SELECT * FROM dede_arctype where reid ='$id'");
    $db->SetQuery($sql);
    $db->Execute();
    if($db->GetTotalRow()){
        echo '<ul class="subnav transform" data-height="auto">';
        while($row = $db->GetArray()){
            $url = str_replace('{cmspath}','',($row[typedir]));
            echo "<li><a href=".$url.">".($row[typename])."</a></li>";
        };
        echo '</ul>';
    };
    {/dede:php}
    </li>