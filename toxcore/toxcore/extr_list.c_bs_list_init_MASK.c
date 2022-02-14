
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ capacity; int * ids; int * data; scalar_t__ element_size; scalar_t__ n; } ;
typedef TYPE_1__ BS_LIST ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

int FUNC_1(BS_LIST *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{

    VAR_0->n = 0;
    VAR_0->element_size = VAR_1;
    VAR_0->capacity = 0;
    VAR_0->data = ((void*)0);
    VAR_0->ids = ((void*)0);

    if (VAR_2 != 0) {
        if (!FUNC_0(VAR_0, VAR_2)) {
            return 0;
        }
    }

    VAR_0->capacity = VAR_2;

    return 1;
}
