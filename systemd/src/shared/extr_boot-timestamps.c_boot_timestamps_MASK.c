
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_7__ {scalar_t__ monotonic; scalar_t__ realtime; } ;
typedef TYPE_1__ dual_timestamp ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;

int FUNC_4(const dual_timestamp *VAR_0, dual_timestamp *VAR_1, dual_timestamp *VAR_2) {
        usec_t VAR_3 = 0, VAR_4 = 0, VAR_5;
        int VAR_6;
        dual_timestamp VAR_7;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        if (!VAR_0) {
                FUNC_2(&VAR_7);
                VAR_0 = &VAR_7;
        }

        VAR_6 = FUNC_0(&VAR_3, &VAR_4);
        if (VAR_6 < 0) {
                VAR_6 = FUNC_3(&VAR_3, &VAR_4);
                if (VAR_6 < 0)
                        return VAR_6;
        }
        VAR_1->monotonic = VAR_4;
        VAR_2->monotonic = VAR_4 - VAR_3;

        VAR_5 = VAR_0->monotonic + VAR_1->monotonic;
        VAR_1->realtime = VAR_0->realtime > VAR_5 ? VAR_0->realtime - VAR_5 : 0;

        VAR_5 = VAR_0->monotonic + VAR_2->monotonic;
        VAR_2->realtime = VAR_0->realtime > VAR_5 ? VAR_0->realtime - VAR_5 : 0;

        return 0;
}
