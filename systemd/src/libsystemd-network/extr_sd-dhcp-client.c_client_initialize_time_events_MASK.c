
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ start_delay; int event_priority; int timeout_resend; struct TYPE_8__* event; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int ,int ,TYPE_1__*,int ,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_6(sd_dhcp_client *VAR_1) {
        uint64_t VAR_2 = 0;
        int VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->event);

        if (VAR_1->start_delay > 0) {
                FUNC_1(FUNC_5(VAR_1->event, FUNC_3(), &VAR_2) >= 0);
                VAR_2 += VAR_1->start_delay;
        }

        VAR_3 = FUNC_4(VAR_1->event, &VAR_1->timeout_resend,
                             FUNC_3(),
                             VAR_2, 0,
                             VAR_0, VAR_1,
                             VAR_1->event_priority, "dhcp4-resend-timer", 1);
        if (VAR_3 < 0)
                FUNC_2(VAR_1, VAR_3);

        return 0;

}
