
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; scalar_t__ capacity; struct TYPE_6__* values; } ;
typedef TYPE_1__ sqliterk_values ;
typedef TYPE_1__ sqliterk_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(sqliterk_values *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }

    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
        sqliterk_value *VAR_4 = &VAR_2->values[VAR_3];
        FUNC_1(VAR_4);
    }
    VAR_2->count = 0;
    if (VAR_2->values) {
        FUNC_0(VAR_2->values);
        VAR_2->values = ((void*)0);
    }
    VAR_2->capacity = 0;
    FUNC_0(VAR_2);
    return VAR_1;
}
