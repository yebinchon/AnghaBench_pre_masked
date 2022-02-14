
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int * rk; int * userInfo; int * pager; int * rootpage; struct TYPE_4__* name; } ;
typedef TYPE_1__ sqliterk_btree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

int FUNC_2(sqliterk_btree *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }
    if (VAR_2->name) {
        FUNC_0(VAR_2->name);
        VAR_2->name = ((void*)0);
    }
    if (VAR_2->rootpage) {
        FUNC_1(VAR_2->rootpage);
        VAR_2->rootpage = ((void*)0);
    }
    VAR_2->pager = ((void*)0);
    VAR_2->userInfo = ((void*)0);
    VAR_2->rk = ((void*)0);
    VAR_2->type = 0;
    FUNC_0(VAR_2);
    return VAR_1;
}
