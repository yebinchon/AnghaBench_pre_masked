
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef void* libvlc_audio_resume_cb ;
typedef void* libvlc_audio_play_cb ;
typedef void* libvlc_audio_pause_cb ;
typedef void* libvlc_audio_flush_cb ;
typedef void* libvlc_audio_drain_cb ;


 int FUNC_0 (int *,char*,void*) ;
 int FUNC_1 (int *,char*,char*) ;

void FUNC_2( libvlc_media_player_t *VAR_0,
                                 libvlc_audio_play_cb VAR_1,
                                 libvlc_audio_pause_cb VAR_2,
                                 libvlc_audio_resume_cb VAR_3,
                                 libvlc_audio_flush_cb VAR_4,
                                 libvlc_audio_drain_cb VAR_5,
                                 void *VAR_6 )
{
    FUNC_0( VAR_0, "amem-play", VAR_1 );
    FUNC_0( VAR_0, "amem-pause", VAR_2 );
    FUNC_0( VAR_0, "amem-resume", VAR_3 );
    FUNC_0( VAR_0, "amem-flush", VAR_4 );
    FUNC_0( VAR_0, "amem-drain", VAR_5 );
    FUNC_0( VAR_0, "amem-data", VAR_6 );
    FUNC_1( VAR_0, "aout", "amem,none" );
}
