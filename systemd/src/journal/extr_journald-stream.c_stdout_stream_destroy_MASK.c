
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state_file; } ;
typedef TYPE_1__ StdoutStream ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(StdoutStream *VAR_0) {
        if (!VAR_0)
                return;

        if (VAR_0->state_file)
                (void) FUNC_1(VAR_0->state_file);

        FUNC_0(VAR_0);
}
