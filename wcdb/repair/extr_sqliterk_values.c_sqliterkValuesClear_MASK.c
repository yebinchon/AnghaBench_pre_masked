
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * values; } ;
typedef TYPE_1__ sqliterk_values ;
typedef int sqliterk_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1(sqliterk_values *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }

    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
        sqliterk_value *VAR_4 = &VAR_2->values[VAR_3];
        FUNC_0(VAR_4);
    }
    VAR_2->count = 0;
    return VAR_1;
}
