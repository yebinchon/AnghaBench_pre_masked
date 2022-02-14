
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_probe_t ;
struct vlc_rd_probe {int * psz_longname; int * psz_name; int member_1; int member_0; } ;
typedef int names ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,struct vlc_rd_probe*,int) ;

int
FUNC_4(vlc_probe_t *VAR_2, const char *VAR_3,
                 const char *VAR_4)
{
    struct vlc_rd_probe VAR_5 = { FUNC_1(VAR_3), FUNC_1(VAR_4) };

    if (FUNC_2(VAR_5.psz_name == ((void*)0) || VAR_5.psz_longname == ((void*)0)
                 || FUNC_3(VAR_2, &VAR_5, sizeof(VAR_5))))
    {
        FUNC_0(VAR_5.psz_name);
        FUNC_0(VAR_5.psz_longname);
        return VAR_0;
    }
    return VAR_1;
}
