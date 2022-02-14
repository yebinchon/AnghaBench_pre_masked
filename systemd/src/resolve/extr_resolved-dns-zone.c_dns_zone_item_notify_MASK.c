
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ block_ready; scalar_t__ state; int rr; int family; struct TYPE_8__* received; struct TYPE_8__* probe_transaction; int destination; int sender; TYPE_1__* scope; } ;
struct TYPE_7__ {scalar_t__ protocol; } ;
typedef TYPE_2__ DnsZoneItem ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(DnsZoneItem *VAR_7) {
        FUNC_2(VAR_7);
        FUNC_2(VAR_7->probe_transaction);

        if (VAR_7->block_ready > 0)
                return;

        if (FUNC_1(VAR_7->probe_transaction->state, VAR_1, VAR_2, VAR_4))
                return;

        if (VAR_7->probe_transaction->state == VAR_3) {
                bool VAR_8 = 0;
                if (!FUNC_1(VAR_7->state, VAR_5, VAR_6)) {
                        FUNC_6("Got a successful probe for not yet established RR, we lost.");
                        VAR_8 = 1;
                } else if (VAR_7->probe_transaction->scope->protocol == VAR_0) {
                        FUNC_2(VAR_7->probe_transaction->received);
                        VAR_8 = FUNC_7(&VAR_7->probe_transaction->received->sender, &VAR_7->probe_transaction->received->destination, FUNC_0(VAR_7->probe_transaction->received->family)) < 0;
                        if (VAR_8)
                                FUNC_6("Got a successful probe reply for an established RR, and we have a lexicographically larger IP address and thus lost.");
                }

                if (VAR_8) {
                        FUNC_4(VAR_7);
                        return;
                }

                FUNC_6("Got a successful probe reply, but peer has lexicographically lower IP address and thus lost.");
        }

        FUNC_6("Record %s successfully probed.", FUNC_8(FUNC_3(VAR_7->rr)));

        FUNC_5(VAR_7);
        VAR_7->state = VAR_5;
}
