
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ Unit ;
struct TYPE_7__ {size_t exec_context_offset; } ;
typedef int ExecContext ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

ExecContext *FUNC_2(Unit *VAR_0) {
        size_t VAR_1;
        FUNC_1(VAR_0);

        if (VAR_0->type < 0)
                return ((void*)0);

        VAR_1 = FUNC_0(VAR_0)->exec_context_offset;
        if (VAR_1 <= 0)
                return ((void*)0);

        return (ExecContext*) ((uint8_t*) VAR_0 + VAR_1);
}
