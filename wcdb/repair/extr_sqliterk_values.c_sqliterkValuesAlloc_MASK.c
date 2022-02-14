
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqliterk_values ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(sqliterk_values **VAR_3)
{
    if (!VAR_3) {
        return VAR_0;
    }
    int VAR_4 = VAR_2;
    sqliterk_values *VAR_5 = FUNC_0(sizeof(sqliterk_values));
    if (!VAR_5) {
        VAR_4 = VAR_1;
        goto sqliterkValuesAlloc_Failed;
    }
    VAR_4 = FUNC_1(VAR_5);
    if (VAR_4 != VAR_2) {
        goto sqliterkValuesAlloc_Failed;
    }
    *VAR_3 = VAR_5;
    return VAR_2;
sqliterkValuesAlloc_Failed:
    if (VAR_5) {
        FUNC_2(VAR_5);
    }
    return VAR_4;
}
