
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle_lid_switch_docked; scalar_t__ handle_lid_switch_ep; scalar_t__ handle_lid_switch; int lid_switch_ignore_inhibited; } ;
typedef TYPE_1__ Manager ;
typedef scalar_t__ HandleAction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(Manager *VAR_2, bool VAR_3) {
        HandleAction VAR_4;

        FUNC_0(VAR_2);



        if (FUNC_2(VAR_2))
                VAR_4 = VAR_2->handle_lid_switch_docked;
        else if (VAR_2->handle_lid_switch_ep != VAR_1 &&
                 FUNC_3())
                VAR_4 = VAR_2->handle_lid_switch_ep;
        else
                VAR_4 = VAR_2->handle_lid_switch;

        FUNC_1(VAR_2, VAR_0, VAR_4, VAR_2->lid_switch_ignore_inhibited, VAR_3);
}
