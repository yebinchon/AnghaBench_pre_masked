
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int usec_t ;
typedef void sd_event_source ;
struct TYPE_6__ {scalar_t__ lldp_tx_fast; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int,char*) ;
 int FUNC_6 (TYPE_1__*,int,char*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(sd_event_source *VAR_4, usec_t VAR_5, void *VAR_6) {
        Link *VAR_7 = VAR_6;
        usec_t VAR_8, VAR_9, VAR_10;
        int VAR_11;

        FUNC_0(VAR_4);
        FUNC_0(VAR_6);

        FUNC_4(VAR_7, "Sending LLDP packet...");

        VAR_11 = FUNC_3(VAR_7);
        if (VAR_11 < 0)
                FUNC_5(VAR_7, VAR_11, "Failed to send LLDP packet, ignoring: %m");

        if (VAR_7->lldp_tx_fast > 0)
                VAR_7->lldp_tx_fast--;

        FUNC_1(FUNC_8(FUNC_9(VAR_4), FUNC_2(), &VAR_8) >= 0);

        VAR_9 = VAR_7->lldp_tx_fast > 0 ? VAR_0 : VAR_2;
        VAR_10 = FUNC_12(FUNC_12(VAR_8, VAR_9), (usec_t) FUNC_7() % VAR_1);

        VAR_11 = FUNC_11(VAR_4, VAR_10);
        if (VAR_11 < 0)
                return FUNC_6(VAR_7, VAR_11, "Failed to restart LLDP timer: %m");

        VAR_11 = FUNC_10(VAR_4, VAR_3);
        if (VAR_11 < 0)
                return FUNC_6(VAR_7, VAR_11, "Failed to enable LLDP timer: %m");

        return 0;
}
