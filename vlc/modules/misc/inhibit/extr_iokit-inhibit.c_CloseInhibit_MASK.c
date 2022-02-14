
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_6__ {scalar_t__ inh_assertion_id; scalar_t__ act_assertion_id; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_3(vlc_object_t *VAR_2)
{
    vlc_inhibit_t *VAR_3 = (vlc_inhibit_t*)VAR_2;
    vlc_inhibit_sys_t* VAR_4 = VAR_3->p_sys;


    if (VAR_4->inh_assertion_id != VAR_0) {
        FUNC_1(VAR_3, "Releasing remaining IOPMAssertion (inhibition)");

        if (FUNC_0(VAR_4->inh_assertion_id) != VAR_1) {
            FUNC_2(VAR_3, "Failed releasing IOPMAssertion on termination");
        }
        VAR_4->inh_assertion_id = VAR_0;
    }


    if (VAR_4->act_assertion_id != VAR_0) {
        FUNC_1(VAR_3, "Releasing remaining IOPMAssertion (activity)");

        if (FUNC_0(VAR_4->act_assertion_id) != VAR_1) {
            FUNC_2(VAR_3, "Failed releasing IOPMAssertion on termination");
        }
        VAR_4->act_assertion_id = VAR_0;
    }
}
