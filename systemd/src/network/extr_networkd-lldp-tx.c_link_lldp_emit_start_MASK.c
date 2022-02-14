
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_10__ {scalar_t__ lldp_emit_event_source; TYPE_2__* manager; int lldp_tx_fast; TYPE_1__* network; } ;
struct TYPE_9__ {int event; } ;
struct TYPE_8__ {scalar_t__ lldp_emit; } ;
typedef TYPE_3__ Link ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_3__*) ;
 int FUNC_6 (scalar_t__,scalar_t__*) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

int FUNC_10(Link *VAR_5) {
        usec_t VAR_6;
        int VAR_7;

        FUNC_0(VAR_5);

        if (!VAR_5->network || VAR_5->network->lldp_emit == VAR_0) {
                FUNC_2(VAR_5);
                return 0;
        }



        VAR_5->lldp_tx_fast = VAR_3;

        VAR_6 = FUNC_9(FUNC_9(FUNC_3(FUNC_1()), VAR_1),
                     (usec_t) FUNC_4() % VAR_2);

        if (VAR_5->lldp_emit_event_source) {
                usec_t VAR_8;


                VAR_7 = FUNC_6(VAR_5->lldp_emit_event_source, &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;

                if (VAR_8 <= VAR_6)
                        return 0;

                return FUNC_8(VAR_5->lldp_emit_event_source, VAR_6);
        } else {
                VAR_7 = FUNC_5(
                                VAR_5->manager->event,
                                &VAR_5->lldp_emit_event_source,
                                FUNC_1(),
                                VAR_6,
                                0,
                                VAR_4,
                                VAR_5);
                if (VAR_7 < 0)
                        return VAR_7;

                (void) FUNC_7(VAR_5->lldp_emit_event_source, "lldp-tx");
        }

        return 0;
}
