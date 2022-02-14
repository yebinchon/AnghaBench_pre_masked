
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int description; int id; scalar_t__ fragment_path; } ;
struct TYPE_17__ {scalar_t__ what; } ;
struct TYPE_16__ {scalar_t__ what; } ;
struct TYPE_18__ {int from_fragment; int exec_context; void* what; TYPE_2__ parameters_proc_swaps; TYPE_1__ parameters_fragment; } ;
typedef TYPE_3__ Swap ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (void*,int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int ,void**) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,void*,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,void*) ;

__attribute__((used)) static int FUNC_13(Swap *VAR_2) {
        int VAR_3;

        FUNC_1(VAR_2);

        if (FUNC_0(VAR_2)->fragment_path)
                VAR_2->from_fragment = 1;

        if (!VAR_2->what) {
                if (VAR_2->parameters_fragment.what)
                        VAR_2->what = FUNC_3(VAR_2->parameters_fragment.what);
                else if (VAR_2->parameters_proc_swaps.what)
                        VAR_2->what = FUNC_3(VAR_2->parameters_proc_swaps.what);
                else {
                        VAR_3 = FUNC_8(FUNC_0(VAR_2)->id, &VAR_2->what);
                        if (VAR_3 < 0)
                                return VAR_3;
                }

                if (!VAR_2->what)
                        return -VAR_0;
        }

        FUNC_2(VAR_2->what, 0);

        if (!FUNC_0(VAR_2)->description) {
                VAR_3 = FUNC_12(FUNC_0(VAR_2), VAR_2->what);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        VAR_3 = FUNC_10(FUNC_0(VAR_2), VAR_2->what, VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_5(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_6(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_9(FUNC_0(VAR_2));
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_7(FUNC_0(VAR_2), &VAR_2->exec_context);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_11(FUNC_0(VAR_2));
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
