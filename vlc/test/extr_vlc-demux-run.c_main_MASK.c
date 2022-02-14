
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_run_args {int dummy; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vlc_run_args*,char const*) ;
 int FUNC_2 (struct vlc_run_args*) ;

int FUNC_3(int VAR_1, char *VAR_2[])
{
    const char *VAR_3;
    struct vlc_run_args VAR_4;
    FUNC_2(&VAR_4);

    switch (VAR_1)
    {
        case 2:
            VAR_3 = VAR_2[VAR_1 - 1];
            break;
        default:
            FUNC_0(VAR_0, "Usage: [VLC_TARGET=demux] %s <filename>\n", VAR_2[0]);
            return 1;
    }

    return -FUNC_1(&VAR_4, VAR_3);
}
