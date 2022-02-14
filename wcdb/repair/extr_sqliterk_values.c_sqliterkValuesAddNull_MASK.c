
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t count; TYPE_3__* values; } ;
typedef TYPE_2__ sqliterk_values ;
struct TYPE_6__ {int * memory; } ;
struct TYPE_8__ {TYPE_1__ any; int type; } ;
typedef TYPE_3__ sqliterk_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;

int FUNC_1(sqliterk_values *VAR_3)
{
    if (!VAR_3) {
        return VAR_0;
    }
    int VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 != VAR_1) {
        return VAR_4;
    }
    sqliterk_value *VAR_5 = &VAR_3->values[VAR_3->count];
    VAR_5->type = VAR_2;
    VAR_5->any.memory = ((void*)0);
    VAR_3->count++;
    return VAR_1;
}
