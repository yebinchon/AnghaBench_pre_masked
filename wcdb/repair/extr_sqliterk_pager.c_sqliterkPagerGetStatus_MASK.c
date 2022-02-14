
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqliterk_status ;
struct TYPE_4__ {int * pagesStatus; } ;
typedef TYPE_1__ sqliterk_pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;

sqliterk_status FUNC_1(sqliterk_pager *VAR_2, int VAR_3)
{
    if (!VAR_2 || !VAR_2->pagesStatus ||
        FUNC_0(VAR_2, VAR_3) != VAR_0) {
        return VAR_1;
    }
    return VAR_2->pagesStatus[VAR_3 - 1];
}
