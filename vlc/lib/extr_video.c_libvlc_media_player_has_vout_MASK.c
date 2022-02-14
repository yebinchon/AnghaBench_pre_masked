
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int ** FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;

unsigned FUNC_3( libvlc_media_player_t *VAR_0 )
{
    size_t VAR_1;
    vout_thread_t **VAR_2 = FUNC_0 (VAR_0, &VAR_1);
    for (size_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        FUNC_2(VAR_2[VAR_3]);
    FUNC_1 (VAR_2);
    return VAR_1;
}
