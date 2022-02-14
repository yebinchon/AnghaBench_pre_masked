
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* values; } ;
typedef TYPE_4__ sqliterk_values ;
struct TYPE_10__ {TYPE_2__* text; TYPE_1__* binary; } ;
struct TYPE_12__ {int type; TYPE_3__ any; } ;
typedef TYPE_5__ sqliterk_value ;
struct TYPE_9__ {int s; } ;
struct TYPE_8__ {int s; } ;


 int FUNC_0 (TYPE_4__*) ;



int FUNC_1(sqliterk_values *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    if (VAR_0 && VAR_1 < FUNC_0(VAR_0)) {
        sqliterk_value *VAR_3 = &VAR_0->values[VAR_1];
        switch (VAR_3->type) {
            case 129:
                VAR_2 = VAR_3->any.binary->s;
                break;
            case 128:
                VAR_2 = VAR_3->any.text->s;
                break;
            default:
                break;
        }
    }
    return VAR_2;
}
