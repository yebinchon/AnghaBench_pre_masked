
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_5__ {int attr; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int *,char*,int *,int *,char**,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int ) ;

__attribute__((used)) static void FUNC_4 (void *VAR_1)
{
    vlc_inhibit_t *VAR_2 = VAR_1;
    vlc_inhibit_sys_t *VAR_3 = VAR_2->p_sys;
    char *VAR_4[3] = {
        (char *)"xdg-screensaver", (char *)"reset", ((void*)0)
    };
    pid_t VAR_5;

    int VAR_6 = FUNC_1 (&VAR_5, "xdg-screensaver", ((void*)0), &VAR_3->attr,
                            VAR_4, VAR_0);
    if (VAR_6 == 0)
    {
        int VAR_7;

        while (FUNC_3 (VAR_5, &VAR_7, 0) == -1);
    }
    else
        FUNC_0 (VAR_2, "error starting xdg-screensaver: %s",
                  FUNC_2(VAR_6));
}
