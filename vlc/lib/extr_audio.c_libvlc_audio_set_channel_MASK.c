
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef int audio_output_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;

int FUNC_4( libvlc_media_player_t *VAR_0, int VAR_1 )
{
    audio_output_t *VAR_2 = FUNC_0( VAR_0 );
    int VAR_3 = 0;

    if( !VAR_2 )
        return -1;

    if( FUNC_3( VAR_2, "stereo-mode", VAR_1 ) < 0 )
    {
        FUNC_2( "Audio channel out of range" );
        VAR_3 = -1;
    }
    FUNC_1(VAR_2);
    return VAR_3;
}
