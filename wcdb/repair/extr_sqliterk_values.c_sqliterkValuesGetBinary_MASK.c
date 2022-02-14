
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* values; } ;
typedef TYPE_3__ sqliterk_values ;
struct TYPE_8__ {TYPE_1__* binary; } ;
struct TYPE_10__ {int type; TYPE_2__ any; } ;
typedef TYPE_4__ sqliterk_value ;
struct TYPE_7__ {void* b; } ;


 int FUNC_0 (TYPE_3__*) ;


const void *FUNC_1(sqliterk_values *VAR_0, int VAR_1)
{
    void *VAR_2 = ((void*)0);
    if (VAR_0 && VAR_1 < FUNC_0(VAR_0)) {
        sqliterk_value *VAR_3 = &VAR_0->values[VAR_1];
        switch (VAR_3->type) {
            case 128:
                VAR_2 = VAR_3->any.binary->b;
                break;
            default:
                break;
        }
    }
    return VAR_2;
}
