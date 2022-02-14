
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int capacity; } ;
typedef TYPE_1__ BS_LIST ;


 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(BS_LIST *VAR_0)
{
    if (!FUNC_0(VAR_0, VAR_0->n)) {
        return 0;
    }

    VAR_0->capacity = VAR_0->n;
    return 1;
}
