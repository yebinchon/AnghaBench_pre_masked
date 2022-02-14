
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sd_ndisc_router ;
typedef int sd_ndisc_event ;
typedef int sd_ndisc ;
struct TYPE_6__ {int ndisc_configured; int state; } ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_5(sd_ndisc *VAR_2, sd_ndisc_event VAR_3, sd_ndisc_router *VAR_4, void *VAR_5) {
        Link *VAR_6 = VAR_5;

        FUNC_1(VAR_6);

        if (FUNC_0(VAR_6->state, VAR_0, VAR_1))
                return;

        switch (VAR_3) {

        case 129:
                (void) FUNC_4(VAR_6, VAR_4);
                break;

        case 128:
                VAR_6->ndisc_configured = 1;
                FUNC_2(VAR_6);

                break;
        default:
                FUNC_3(VAR_6, "IPv6 Neighbor Discovery unknown event: %d", VAR_3);
        }
}
