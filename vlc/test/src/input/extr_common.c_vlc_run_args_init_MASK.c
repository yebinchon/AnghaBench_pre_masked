
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_run_args {int verbose; void* test_demux_controls; int name; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (struct vlc_run_args*,int ,int) ;

void FUNC_3(struct vlc_run_args *VAR_0)
{
    FUNC_2(VAR_0, 0, sizeof(struct vlc_run_args));
    VAR_0->verbose = FUNC_1("V");
    if (VAR_0->verbose >= 10)
        VAR_0->verbose = 9;

    VAR_0->name = FUNC_0("VLC_TARGET");
    VAR_0->test_demux_controls = FUNC_1("VLC_DEMUX_CONTROLS");
}
