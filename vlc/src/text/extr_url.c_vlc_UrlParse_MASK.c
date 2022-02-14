
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * psz_path; } ;
typedef TYPE_1__ vlc_url_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int *) ;

int FUNC_2(vlc_url_t *VAR_2, const char *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2, VAR_3);

    if (VAR_2->psz_path != ((void*)0) && !FUNC_1(VAR_2->psz_path))
    {
        VAR_2->psz_path = ((void*)0);
        VAR_1 = VAR_0;
        VAR_4 = -1;
    }
    return VAR_4;
}
