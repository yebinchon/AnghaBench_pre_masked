
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* pagesStatus; int pagecount; } ;
typedef TYPE_1__ sqliterk_pager ;


 scalar_t__ VAR_0 ;

int FUNC_0(sqliterk_pager *VAR_1)
{
    if (!VAR_1 || !VAR_1->pagesStatus) {
        return 0;
    }

    int VAR_2, VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1->pagecount; VAR_2++) {
        if (VAR_1->pagesStatus[VAR_2] == VAR_0) {
            VAR_3++;
        }
    }
    return VAR_3;
}
