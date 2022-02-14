
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pagecount; } ;
typedef TYPE_1__ sqliterk_pager ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(sqliterk_pager *VAR_2, int VAR_3)
{
    if (!VAR_2 || VAR_3 < 1 || VAR_3 > VAR_2->pagecount) {
        return VAR_0;
    }
    return VAR_1;
}
