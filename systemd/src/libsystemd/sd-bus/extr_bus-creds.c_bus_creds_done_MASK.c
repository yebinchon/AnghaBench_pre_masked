
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmdline_array; int well_known_names; int tty; int supplementary_gids; int unescaped_description; int user_slice; int slice; int user_unit; int unit; int session; } ;
typedef TYPE_1__ sd_bus_creds ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(sd_bus_creds *VAR_0) {
        FUNC_0(VAR_0);




        FUNC_1(VAR_0->session);
        FUNC_1(VAR_0->unit);
        FUNC_1(VAR_0->user_unit);
        FUNC_1(VAR_0->slice);
        FUNC_1(VAR_0->user_slice);
        FUNC_1(VAR_0->unescaped_description);
        FUNC_1(VAR_0->supplementary_gids);
        FUNC_1(VAR_0->tty);

        FUNC_1(VAR_0->well_known_names);






        FUNC_2(VAR_0->cmdline_array);
}
