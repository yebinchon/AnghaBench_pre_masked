
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ class; scalar_t__ scope_job; scalar_t__ stopping; } ;
typedef int MachineState ;
typedef TYPE_1__ Machine ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

MachineState FUNC_1(Machine *VAR_4) {
        FUNC_0(VAR_4);

        if (VAR_4->class == VAR_1)
                return VAR_3;

        if (VAR_4->stopping)
                return VAR_0;

        if (VAR_4->scope_job)
                return VAR_2;

        return VAR_3;
}
