
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ barriers; int pipe; void* them; void* me; } ;
typedef TYPE_1__ Barrier ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

void FUNC_2(Barrier *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->me = FUNC_0(VAR_0->me);
        VAR_0->them = FUNC_0(VAR_0->them);
        FUNC_1(VAR_0->pipe);
        VAR_0->barriers = 0;
}
