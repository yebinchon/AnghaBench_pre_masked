
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ Unit ;
struct TYPE_6__ {size_t exec_runtime_offset; } ;
typedef int ExecRuntime ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;

ExecRuntime *FUNC_1(Unit *VAR_0) {
        size_t VAR_1;

        if (VAR_0->type < 0)
                return ((void*)0);

        VAR_1 = FUNC_0(VAR_0)->exec_runtime_offset;
        if (VAR_1 <= 0)
                return ((void*)0);

        return *(ExecRuntime**) ((uint8_t*) VAR_0 + VAR_1);
}
