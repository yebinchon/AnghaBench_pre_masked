
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status_unit_format; int cad_burst_action; int kexec_watchdog; int reboot_watchdog; int runtime_watchdog; int service_watchdogs; int confirm_spawn; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(Manager *VAR_8) {

        FUNC_0(VAR_8);




        VAR_8->confirm_spawn = VAR_1;
        VAR_8->service_watchdogs = VAR_5;
        VAR_8->runtime_watchdog = VAR_4;
        VAR_8->reboot_watchdog = VAR_3;
        VAR_8->kexec_watchdog = VAR_2;
        VAR_8->cad_burst_action = VAR_0;

        FUNC_1(VAR_8, VAR_6);
        VAR_8->status_unit_format = VAR_7;
}
