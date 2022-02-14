
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int * longname; int * name; int member_1; int member_0; } ;
typedef TYPE_1__ vlc_sd_probe_t ;
typedef int vlc_probe_t ;
typedef int names ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int) ;

int FUNC_4 (vlc_probe_t *VAR_2, const char *VAR_3,
                      const char *VAR_4, int VAR_5)
{
    vlc_sd_probe_t VAR_6 = { FUNC_1(VAR_3), FUNC_1(VAR_4), &VAR_5 };

    if (FUNC_2 (VAR_6.name == ((void*)0) || VAR_6.longname == ((void*)0)
               || FUNC_3 (VAR_2, &VAR_6, sizeof (VAR_6))))
    {
        FUNC_0 (VAR_6.name);
        FUNC_0 (VAR_6.longname);
        return VAR_0;
    }
    return VAR_1;
}
