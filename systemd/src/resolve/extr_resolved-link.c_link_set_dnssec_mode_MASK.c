
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dnssec_mode; TYPE_1__* unicast_scope; } ;
struct TYPE_5__ {int cache; } ;
typedef TYPE_2__ Link ;
typedef scalar_t__ DnssecMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

void FUNC_4(Link *VAR_4, DnssecMode VAR_5) {

        FUNC_1(VAR_4);


        if (FUNC_0(VAR_5, VAR_2, VAR_0))
                FUNC_3("DNSSEC option for the link cannot be enabled or set to allow-downgrade when systemd-resolved is built without gcrypt support. Turning off DNSSEC support.");
        return;


        if (VAR_4->dnssec_mode == VAR_5)
                return;

        if ((VAR_4->dnssec_mode == VAR_3) ||
            (VAR_4->dnssec_mode == VAR_1 && VAR_5 != VAR_1) ||
            (VAR_4->dnssec_mode == VAR_0 && VAR_5 == VAR_2)) {



                if (VAR_4->unicast_scope)
                        FUNC_2(&VAR_4->unicast_scope->cache);
        }

        VAR_4->dnssec_mode = VAR_5;
}
