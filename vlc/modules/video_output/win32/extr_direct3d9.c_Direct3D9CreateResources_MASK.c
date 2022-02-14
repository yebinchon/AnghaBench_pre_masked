
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_15__ {int dev; int BufferFormat; } ;
struct TYPE_14__ {int obj; } ;
struct TYPE_18__ {int dx_render; TYPE_3__* sw_texture_fmt; TYPE_2__ d3d_dev; int d3dregion_format; TYPE_1__ hd3d; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct TYPE_19__ {int i_height; int i_width; int i_chroma; } ;
typedef TYPE_6__ video_format_t ;
struct TYPE_16__ {int format; } ;
typedef int HRESULT ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_6__ const*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,char*,...) ;
 int FUNC_8 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_9(vout_display_t *VAR_10, const video_format_t *VAR_11)
{
    vout_display_sys_t *VAR_12 = VAR_10->sys;

    if (FUNC_0(VAR_10, VAR_11)) {
        FUNC_7(VAR_10, "Direct3D scene initialization failed !");
        return VAR_8;
    }
    if (FUNC_1(VAR_10)) {

        FUNC_8(VAR_10, "Direct3D shaders initialization failed !");
    }

    VAR_12->d3dregion_format = VAR_4;
    for (int VAR_13 = 0; VAR_13 < 2; VAR_13++) {
        D3DFORMAT VAR_14 = VAR_13 == 0 ? VAR_2 : VAR_3;
        if (FUNC_5(FUNC_3(VAR_12->hd3d.obj,
                                                   VAR_0,
                                                   VAR_1,
                                                   VAR_12->d3d_dev.BufferFormat,
                                                   VAR_7,
                                                   VAR_6,
                                                   VAR_14))) {
            VAR_12->d3dregion_format = VAR_14;
            break;
        }
    }

    if( !FUNC_6( VAR_11->i_chroma ) )
    {
        HRESULT VAR_15 = FUNC_4(VAR_12->d3d_dev.dev,
                                                          VAR_11->i_width,
                                                          VAR_11->i_height,
                                                          VAR_12->sw_texture_fmt->format,
                                                          VAR_5,
                                                          &VAR_12->dx_render,
                                                          ((void*)0));
        if (FUNC_2(VAR_15)) {
           FUNC_7(VAR_10, "Failed to allocate offscreen surface (hr=0x%lX)", VAR_15);
           return VAR_8;
        }
    }

    return VAR_9;
}
