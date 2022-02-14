
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pagecount; scalar_t__ pagesize; struct TYPE_5__* pagesStatus; int * file; } ;
typedef TYPE_1__ sqliterk_pager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(sqliterk_pager *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }
    int VAR_3 = VAR_1;
    if (VAR_2->file) {
        VAR_3 = FUNC_1(VAR_2->file);
        VAR_2->file = ((void*)0);
    }
    if (VAR_2->pagesStatus) {
        FUNC_2(VAR_2->pagesStatus);
        VAR_2->pagesStatus = ((void*)0);
    }
    VAR_2->pagesize = 0;
    VAR_2->pagecount = 0;

    FUNC_0(VAR_2);

    FUNC_2(VAR_2);
    return VAR_3;
}
