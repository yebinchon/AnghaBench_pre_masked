
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* values; } ;
typedef TYPE_2__ sqliterk_values ;
typedef int sqliterk_value_type ;
struct TYPE_5__ {int type; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;

sqliterk_value_type FUNC_1(sqliterk_values *VAR_1, int VAR_2)
{
    if (VAR_1 && VAR_2 < FUNC_0(VAR_1)) {
        return VAR_1->values[VAR_2].type;
    }
    return VAR_0;
}
