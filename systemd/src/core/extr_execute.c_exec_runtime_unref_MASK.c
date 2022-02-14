
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ n_ref; } ;
typedef TYPE_1__ ExecRuntime ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;

ExecRuntime *FUNC_2(ExecRuntime *VAR_0, bool VAR_1) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->n_ref > 0);

        VAR_0->n_ref--;
        if (VAR_0->n_ref > 0)
                return ((void*)0);

        return FUNC_1(VAR_0, VAR_1);
}
