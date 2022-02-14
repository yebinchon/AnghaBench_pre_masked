
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct render_context {int dummy; } ;
typedef int libvlc_video_output_cfg_t ;
struct TYPE_3__ {scalar_t__ device; int height; int width; } ;
typedef TYPE_1__ libvlc_video_direct3d_cfg_t ;
typedef int IDirect3DDevice9 ;


 int FUNC_0 (struct render_context*,int ,int ,int *,int *) ;

__attribute__((used)) static bool FUNC_1( void *VAR_0, const libvlc_video_direct3d_cfg_t *VAR_1, libvlc_video_output_cfg_t *VAR_2 )
{
    struct render_context *VAR_3 = VAR_0;
    return FUNC_0(VAR_3, VAR_1->width, VAR_1->height, (IDirect3DDevice9*)VAR_1->device, VAR_2);
}
