
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * psz_path; int * psz_pathbuffer; } ;
typedef TYPE_1__ vlc_url_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;

int FUNC_5(vlc_url_t *VAR_2, const char *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2, VAR_3);

    static const char VAR_5[] = "/@:";

    if (VAR_2->psz_path != ((void*)0)
     && !FUNC_2(VAR_2->psz_path, VAR_5))
    {
        VAR_2->psz_pathbuffer = FUNC_3(VAR_2->psz_path, VAR_5);
        if (VAR_2->psz_pathbuffer == ((void*)0))
        {
            VAR_2->psz_path = ((void*)0);
            VAR_1 = VAR_0;
            VAR_4 = -1;
        }
        else
        {
            VAR_2->psz_path = VAR_2->psz_pathbuffer;
            FUNC_0(FUNC_4(VAR_2->psz_path));
        }
    }
    return VAR_4;
}
