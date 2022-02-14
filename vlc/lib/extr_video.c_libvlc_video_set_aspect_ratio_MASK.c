
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int ** FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;

void FUNC_4( libvlc_media_player_t *VAR_0,
                                    const char *VAR_1 )
{
    if (VAR_1 == ((void*)0))
        VAR_1 = "";
    FUNC_2 (VAR_0, "aspect-ratio", VAR_1);

    size_t VAR_2;
    vout_thread_t **VAR_3 = FUNC_0 (VAR_0, &VAR_2);
    for (size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
        vout_thread_t *VAR_5 = VAR_3[VAR_4];

        FUNC_2 (VAR_5, "aspect-ratio", VAR_1);
        FUNC_3(VAR_5);
    }
    FUNC_1 (VAR_3);
}
