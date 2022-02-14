
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t n_items; scalar_t__ items; int children; } ;
typedef TYPE_1__ ItemArray ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ItemArray* FUNC_4(ItemArray *VAR_0) {
        size_t VAR_1;

        if (!VAR_0)
                return ((void*)0);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_items; VAR_1++)
                FUNC_1(VAR_0->items + VAR_1);

        FUNC_3(VAR_0->children);
        FUNC_0(VAR_0->items);
        return FUNC_2(VAR_0);
}
