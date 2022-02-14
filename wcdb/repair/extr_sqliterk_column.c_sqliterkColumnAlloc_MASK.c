
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int overflowPages; int values; } ;
typedef TYPE_1__ sqliterk_column ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

int FUNC_3(sqliterk_column **VAR_3)
{
    if (!VAR_3) {
        return VAR_0;
    }
    int VAR_4 = VAR_2;
    sqliterk_column *VAR_5 = FUNC_1(sizeof(sqliterk_column));
    if (!VAR_5) {
        VAR_4 = VAR_1;
        goto sqliterkColumnAlloc_Failed;
    }
    VAR_4 = FUNC_2(&VAR_5->values);
    if (VAR_4 != VAR_2) {
        goto sqliterkColumnAlloc_Failed;
    }
    VAR_4 = FUNC_2(&VAR_5->overflowPages);
    if (VAR_4 != VAR_2) {
        goto sqliterkColumnAlloc_Failed;
    }
    *VAR_3 = VAR_5;
    return VAR_2;

sqliterkColumnAlloc_Failed:
    if (VAR_5) {
        FUNC_0(VAR_5);
    }
    *VAR_3 = ((void*)0);
    return VAR_4;
}
