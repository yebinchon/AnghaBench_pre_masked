
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int musicbrainz_recording_t ;
struct TYPE_3__ {int obj; int psz_mb_server; } ;
typedef TYPE_1__ musicbrainz_config_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*,char const*) ;
 int * FUNC_2 (int ,char*) ;

musicbrainz_recording_t *FUNC_3(musicbrainz_config_t *VAR_0,
                                                             const char *VAR_1)
{
    char *VAR_2 = FUNC_1(VAR_0->psz_mb_server, "-", VAR_1);
    if(!VAR_2)
        return ((void*)0);

    musicbrainz_recording_t *VAR_3 = FUNC_2(VAR_0->obj, VAR_2);
    FUNC_0(VAR_2);
    return VAR_3;
}
