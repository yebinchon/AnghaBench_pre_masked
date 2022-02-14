
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_8__ {scalar_t__ inh_assertion_id; int act_assertion_id; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;
typedef scalar_t__ IOReturn ;
typedef int CFStringRef ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_7(vlc_inhibit_t *VAR_9, unsigned VAR_10)
{
    vlc_inhibit_sys_t* VAR_11 = VAR_9->p_sys;


    if (VAR_11->inh_assertion_id != VAR_6) {
        FUNC_4(VAR_9, "Releasing previous IOPMAssertion");
        if (FUNC_3(VAR_11->inh_assertion_id) != VAR_8) {
            FUNC_5(VAR_9, "Failed releasing previous IOPMAssertion, "
                "not acquiring new one!");
        }
        VAR_11->inh_assertion_id = VAR_6;
    }




    IOReturn VAR_12;
    if ((VAR_10 & VAR_0) == VAR_0) {


        CFStringRef VAR_13 = FUNC_0("VLC video playback");

        FUNC_4(VAR_9, "Inhibiting display sleep");


        VAR_12 = FUNC_2(VAR_13,
                                               VAR_7,
                                               &(VAR_11->act_assertion_id));
        if (VAR_12 != VAR_8) {
            FUNC_6(VAR_9, "Failed to declare user activity (%i)", VAR_12);
        }


        VAR_12 = FUNC_1(VAR_3,
                                          VAR_5,
                                          VAR_13,
                                          &(VAR_11->inh_assertion_id));

    } else if ((VAR_10 & VAR_2) == VAR_2) {


        CFStringRef VAR_14 = FUNC_0("VLC audio playback");

        FUNC_4(VAR_9, "Inhibiting idle sleep");

        VAR_12 = FUNC_1(VAR_4,
                                          VAR_5,
                                          VAR_14,
                                          &(VAR_11->inh_assertion_id));

    } else if ((VAR_10 & VAR_1) == VAR_1) {
        FUNC_4(VAR_9, "Removed previous inhibition");
        return;
    } else {
         FUNC_6(VAR_9, "Unhandled inhibiton mask (%i)", VAR_10);
         return;
    }

    if (VAR_12 != VAR_8) {
        FUNC_5(VAR_9, "Failed creating IOPMAssertion (%i)", VAR_12);
        return;
    }
}
