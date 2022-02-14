
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t count; TYPE_3__* values; } ;
typedef TYPE_2__ sqliterk_values ;
struct TYPE_7__ {int * integer; } ;
struct TYPE_9__ {TYPE_1__ any; int type; } ;
typedef TYPE_3__ sqliterk_value ;
typedef int sqliterk_integer ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;

int FUNC_3(sqliterk_values *VAR_4, int64_t VAR_5)
{
    if (!VAR_4) {
        return VAR_0;
    }
    int VAR_6 = FUNC_2(VAR_4);
    if (VAR_6 != VAR_2) {
        return VAR_6;
    }
    sqliterk_value *VAR_7 = &VAR_4->values[VAR_4->count];
    VAR_7->type = VAR_3;
    VAR_7->any.integer = FUNC_0(sizeof(sqliterk_integer));
    if (!VAR_7->any.integer) {
        VAR_6 = VAR_1;
        goto sqliterkValuesAddInteger64_Failed;
    }
    *VAR_7->any.integer = VAR_5;
    VAR_4->count++;
    return VAR_2;

sqliterkValuesAddInteger64_Failed:
    FUNC_1(VAR_7);
    return VAR_6;
}
