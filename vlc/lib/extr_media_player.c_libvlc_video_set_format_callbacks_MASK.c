
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_video_format_cb ;
typedef int libvlc_video_cleanup_cb ;
typedef int libvlc_media_player_t ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1( libvlc_media_player_t *VAR_0,
                                        libvlc_video_format_cb VAR_1,
                                        libvlc_video_cleanup_cb VAR_2 )
{
    FUNC_0( VAR_0, "vmem-setup", VAR_1 );
    FUNC_0( VAR_0, "vmem-cleanup", VAR_2 );
}
