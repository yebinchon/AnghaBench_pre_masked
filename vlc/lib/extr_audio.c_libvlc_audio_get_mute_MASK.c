
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef int audio_output_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( libvlc_media_player_t *VAR_0 )
{
    int VAR_1 = -1;

    audio_output_t *VAR_2 = FUNC_0( VAR_0 );
    if( VAR_2 != ((void*)0) )
    {
        VAR_1 = FUNC_1( VAR_2 );
        FUNC_2(VAR_2);
    }
    return VAR_1;
}
