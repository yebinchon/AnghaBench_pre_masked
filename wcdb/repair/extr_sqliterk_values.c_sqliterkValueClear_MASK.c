
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * memory; TYPE_2__* binary; TYPE_1__* text; } ;
struct TYPE_9__ {int type; TYPE_3__ any; } ;
typedef TYPE_4__ sqliterk_value ;
struct TYPE_7__ {int * b; } ;
struct TYPE_6__ {int * t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

 int VAR_2 ;


int FUNC_1(sqliterk_value *VAR_3)
{
    if (!VAR_3) {
        return VAR_0;
    }
    if (VAR_3->any.memory) {
        switch (VAR_3->type) {
            case 128:
                if (VAR_3->any.text->t) {
                    FUNC_0(VAR_3->any.text->t);
                    VAR_3->any.text->t = ((void*)0);
                }
                break;
            case 129:
                if (VAR_3->any.binary->b) {
                    FUNC_0(VAR_3->any.binary->b);
                    VAR_3->any.binary->b = ((void*)0);
                }
                break;
            default:
                break;
        }
        FUNC_0(VAR_3->any.memory);
        VAR_3->any.memory = ((void*)0);
    }
    VAR_3->type = VAR_2;
    return VAR_1;
}
