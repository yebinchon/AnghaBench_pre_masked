
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* libvlc_video_swap_cb ;
typedef void* libvlc_video_direct3d_update_output_cb ;
typedef void* libvlc_video_direct3d_start_end_rendering_cb ;
typedef void* libvlc_video_direct3d_set_resize_cb ;
typedef void* libvlc_video_direct3d_select_plane_cb ;
typedef scalar_t__ libvlc_video_direct3d_engine_t ;
typedef void* libvlc_video_direct3d_device_setup_cb ;
typedef void* libvlc_video_direct3d_device_cleanup_cb ;
typedef int libvlc_media_player_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,void*) ;
 int FUNC_1 (int *,char*,char*) ;

bool FUNC_2(libvlc_media_player_t *VAR_2,
                                         libvlc_video_direct3d_engine_t VAR_3,
                                         libvlc_video_direct3d_device_setup_cb VAR_4,
                                         libvlc_video_direct3d_device_cleanup_cb VAR_5,
                                         libvlc_video_direct3d_set_resize_cb VAR_6,
                                         libvlc_video_direct3d_update_output_cb VAR_7,
                                         libvlc_video_swap_cb VAR_8,
                                         libvlc_video_direct3d_start_end_rendering_cb VAR_9,
                                         libvlc_video_direct3d_select_plane_cb VAR_10,
                                         void *VAR_11)
{
    FUNC_1( VAR_2, "window", "wextern");

    if ( VAR_3 == VAR_0 )
    {
        FUNC_1 ( VAR_2, "vout", "direct3d11" );
        FUNC_1 ( VAR_2, "dec-dev", "d3d11-device" );
    }
    else if ( VAR_3 == VAR_1 )
    {
        FUNC_1 ( VAR_2, "vout", "direct3d9" );
        FUNC_1 ( VAR_2, "dec-dev", "d3d9-device" );
    }
    else
        return 0;

    FUNC_0( VAR_2, "vout-cb-opaque", VAR_11 );
    FUNC_0( VAR_2, "vout-cb-setup", VAR_4 );
    FUNC_0( VAR_2, "vout-cb-cleanup", VAR_5 );
    FUNC_0( VAR_2, "vout-cb-resize-cb", VAR_6 );
    FUNC_0( VAR_2, "vout-cb-update-output", VAR_7 );
    FUNC_0( VAR_2, "vout-cb-swap", VAR_8 );
    FUNC_0( VAR_2, "vout-cb-make-current", VAR_9 );
    FUNC_0( VAR_2, "vout-cb-select-plane", VAR_10 );
    return 1;
}
