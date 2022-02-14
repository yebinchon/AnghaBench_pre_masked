
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int what; } ;
struct TYPE_6__ {int from_proc_swaps; TYPE_1__ parameters_proc_swaps; } ;
typedef TYPE_2__ Swap ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Swap *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->from_proc_swaps)
                return;

        VAR_0->parameters_proc_swaps.what = FUNC_1(VAR_0->parameters_proc_swaps.what);

        VAR_0->from_proc_swaps = 0;
}
