
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef int audio_output_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

int FUNC_3( libvlc_media_player_t *VAR_0 )
{
    audio_output_t *VAR_1 = FUNC_0( VAR_0 );
    if( !VAR_1 )
        return 0;

    int VAR_2 = FUNC_2( VAR_1, "stereo-mode" );
    FUNC_1(VAR_1);
    return VAR_2;
}
