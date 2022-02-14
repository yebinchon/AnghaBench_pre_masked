
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ required_operstate; scalar_t__ operational_state; int state; } ;
struct TYPE_7__ {scalar_t__ required_operstate; } ;
typedef TYPE_1__ Manager ;
typedef scalar_t__ LinkOperationalState ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_5(Manager *VAR_1, Link *VAR_2, LinkOperationalState VAR_3) {





        if (!VAR_2->state)
                return FUNC_4(VAR_2, FUNC_1(VAR_0),
                                            "link has not yet been processed by udev");

        if (FUNC_0(VAR_2->state, "configuring", "pending"))
                return FUNC_4(VAR_2, FUNC_1(VAR_0),
                                            "link is being processed by networkd");

        if (VAR_3 < 0)
                VAR_3 = VAR_1->required_operstate >= 0 ? VAR_1->required_operstate : VAR_2->required_operstate;

        if (VAR_2->operational_state < VAR_3) {
                FUNC_3(VAR_2, "Operational state '%s' is below '%s'",
                               FUNC_2(VAR_2->operational_state),
                               FUNC_2(VAR_3));
                return 0;
        }

        return 1;
}
