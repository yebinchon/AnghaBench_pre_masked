
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int musicbrainz_lookup_t ;
struct TYPE_3__ {int obj; int psz_coverart_server; } ;
typedef TYPE_1__ musicbrainz_config_t ;
typedef char coverartarchive_t ;


 scalar_t__ FUNC_0 (char**,char*,int ,char const*) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,char*) ;

coverartarchive_t * FUNC_4(musicbrainz_config_t *VAR_0, const char *VAR_1)
{
    coverartarchive_t *VAR_2 = FUNC_1(1, sizeof(*VAR_2));
    if(!VAR_2)
        return ((void*)0);

    char *VAR_3;
    if(0 < FUNC_0(&VAR_3, "https://%d/releasegroup/%s", VAR_0->psz_coverart_server, VAR_1 ))
    {
        return ((void*)0);
    }

     musicbrainz_lookup_t *VAR_4 = FUNC_3(VAR_0->obj, VAR_3);
     FUNC_2(VAR_3);

     if(!VAR_4)
     {
         FUNC_2(VAR_2);
         return ((void*)0);
     }

    return VAR_2;
}
