
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqliterk_status ;
struct TYPE_4__ {int integrity; scalar_t__* pagesStatus; } ;
typedef TYPE_1__ sqliterk_pager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_2 ;

void FUNC_1(sqliterk_pager *VAR_3,
                            int VAR_4,
                            sqliterk_status VAR_5)
{
    if (!VAR_3 || !VAR_3->pagesStatus ||
        FUNC_0(VAR_3, VAR_4) != VAR_1) {
        return;
    }

    VAR_3->pagesStatus[VAR_4 - 1] = VAR_5;
    if (VAR_5 == VAR_2)
        VAR_3->integrity |= VAR_0;
}
