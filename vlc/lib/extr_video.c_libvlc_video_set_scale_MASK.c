
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int ** FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,float) ;
 int FUNC_5 (int *) ;

void FUNC_6( libvlc_media_player_t *VAR_0, float VAR_1 )
{
    if (FUNC_2(VAR_1) && VAR_1 != 0.f)
        FUNC_4 (VAR_0, "zoom", VAR_1);
    FUNC_3 (VAR_0, "autoscale", VAR_1 == 0.f);


    size_t VAR_2;
    vout_thread_t **VAR_3 = FUNC_0 (VAR_0, &VAR_2);
    for (size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
        vout_thread_t *VAR_5 = VAR_3[VAR_4];

        if (FUNC_2(VAR_1) && VAR_1 != 0.f)
            FUNC_4 (VAR_5, "zoom", VAR_1);
        FUNC_3 (VAR_5, "autoscale", VAR_1 == 0.f);
        FUNC_5(VAR_5);
    }
    FUNC_1 (VAR_3);
}
