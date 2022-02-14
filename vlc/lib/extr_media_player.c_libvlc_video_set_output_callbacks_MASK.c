
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* libvlc_video_update_output_cb ;
typedef void* libvlc_video_swap_cb ;
typedef void* libvlc_video_setup_cb ;
typedef void* libvlc_video_makeCurrent_cb ;
typedef void* libvlc_video_getProcAddress_cb ;
typedef scalar_t__ libvlc_video_engine_t ;
typedef void* libvlc_video_cleanup_cb ;
typedef int libvlc_media_player_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,void*) ;
 int FUNC_1 (int *,char*,char*) ;

bool FUNC_2(libvlc_media_player_t *VAR_2,
                                       libvlc_video_engine_t VAR_3,
                                       libvlc_video_setup_cb VAR_4,
                                       libvlc_video_cleanup_cb VAR_5,
                                       libvlc_video_update_output_cb VAR_6,
                                       libvlc_video_swap_cb VAR_7,
                                       libvlc_video_makeCurrent_cb VAR_8,
                                       libvlc_video_getProcAddress_cb VAR_9,
                                       void *VAR_10)
{




    FUNC_1( VAR_2, "window", "wdummy");


    if( VAR_3 == VAR_0 )
    {
        FUNC_1 ( VAR_2, "vout", "gles2" );
        FUNC_1 ( VAR_2, "gles2", "vgl" );
    }
    else if( VAR_3 == VAR_1 )
    {
        FUNC_1 ( VAR_2, "vout", "gl" );
        FUNC_1 ( VAR_2, "gl", "vgl");
    }
    else
        return 0;

    FUNC_0( VAR_2, "vout-cb-opaque", VAR_10 );
    FUNC_0( VAR_2, "vout-cb-setup", VAR_4 );
    FUNC_0( VAR_2, "vout-cb-cleanup", VAR_5 );
    FUNC_0( VAR_2, "vout-cb-update-output", VAR_6 );
    FUNC_0( VAR_2, "vout-cb-swap", VAR_7 );
    FUNC_0( VAR_2, "vout-cb-get-proc-address", VAR_9 );
    FUNC_0( VAR_2, "vout-cb-make-current", VAR_8 );
    return 1;
}
