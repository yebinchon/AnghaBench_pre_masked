
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct render_context {int d3d; } ;
struct TYPE_3__ {int adapter; int device_context; } ;
typedef TYPE_1__ libvlc_video_direct3d_device_setup_t ;
typedef int libvlc_video_direct3d_device_cfg_t ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0( void **VAR_1, const libvlc_video_direct3d_device_cfg_t *VAR_2, libvlc_video_direct3d_device_setup_t *VAR_3 )
{
    struct render_context *VAR_4 = *VAR_1;
    VAR_3->device_context = VAR_4->d3d;
    VAR_3->adapter = VAR_0;
    return 1;
}
