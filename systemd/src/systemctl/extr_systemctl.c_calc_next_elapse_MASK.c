
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_5__ {scalar_t__ monotonic; scalar_t__ realtime; } ;
typedef TYPE_1__ dual_timestamp ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static usec_t FUNC_3(dual_timestamp *VAR_0, dual_timestamp *VAR_1) {
        usec_t VAR_2;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        if (FUNC_2(VAR_1->monotonic)) {
                usec_t VAR_3;

                if (VAR_1->monotonic > VAR_0->monotonic)
                        VAR_3 = VAR_0->realtime + (VAR_1->monotonic - VAR_0->monotonic);
                else
                        VAR_3 = VAR_0->realtime - (VAR_0->monotonic - VAR_1->monotonic);

                if (FUNC_2(VAR_1->realtime))
                        VAR_2 = FUNC_0(VAR_3, VAR_1->realtime);
                else
                        VAR_2 = VAR_3;

        } else
                VAR_2 = VAR_1->realtime;

        return VAR_2;
}
