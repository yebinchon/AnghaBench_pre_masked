
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sd_event_source ;
struct TYPE_6__ {int event; int * timer; int ios; scalar_t__ curl; } ;
typedef TYPE_1__ CurlGlue ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

CurlGlue *FUNC_6(CurlGlue *VAR_0) {
        sd_event_source *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->curl)
                FUNC_0(VAR_0->curl);

        while ((VAR_1 = FUNC_2(VAR_0->ios))) {
                FUNC_4(VAR_1);
        }

        FUNC_1(VAR_0->ios);

        FUNC_4(VAR_0->timer);
        FUNC_5(VAR_0->event);
        return FUNC_3(VAR_0);
}
