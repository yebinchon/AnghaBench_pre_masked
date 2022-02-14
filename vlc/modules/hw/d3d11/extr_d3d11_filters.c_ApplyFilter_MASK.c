
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_12__ {int Default; } ;
struct filter_level {TYPE_1__ Range; int level; } ;
struct TYPE_13__ {int videoProcessor; int d3dvidctx; } ;
struct TYPE_15__ {TYPE_2__ d3d_proc; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_17__ {int * pInputSurface; int Enable; int member_0; } ;
struct TYPE_16__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_5__ RECT ;
typedef int ID3D11VideoProcessorOutputView ;
typedef int ID3D11VideoProcessorInputView ;
typedef int HRESULT ;
typedef TYPE_6__ D3D11_VIDEO_PROCESSOR_STREAM ;
typedef int D3D11_VIDEO_PROCESSOR_FILTER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int,TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7( filter_sys_t *VAR_2,
                         D3D11_VIDEO_PROCESSOR_FILTER VAR_3,
                         struct filter_level *VAR_4,
                         ID3D11VideoProcessorInputView *VAR_5,
                         ID3D11VideoProcessorOutputView *VAR_6,
                         const video_format_t *VAR_7)
{
    HRESULT VAR_8;

    int VAR_9 = FUNC_6(&VAR_4->level);
    if (VAR_9 == VAR_4->Range.Default)
        return 0;

    FUNC_3(VAR_2->d3d_proc.d3dvidctx,
                                                     VAR_2->d3d_proc.videoProcessor,
                                                     0,
                                                     VAR_3,
                                                     VAR_1,
                                                     VAR_9);
    FUNC_1(VAR_2->d3d_proc.d3dvidctx,
                                                                 VAR_2->d3d_proc.videoProcessor,
                                                                 0, VAR_0);

    RECT VAR_10;
    VAR_10.left = VAR_7->i_x_offset;
    VAR_10.top = VAR_7->i_y_offset;
    VAR_10.right = VAR_10.left + VAR_7->i_visible_width;
    VAR_10.bottom = VAR_10.top + VAR_7->i_visible_height;
    FUNC_4(VAR_2->d3d_proc.d3dvidctx, VAR_2->d3d_proc.videoProcessor,
                                                         0, VAR_1, &VAR_10);
    FUNC_2(VAR_2->d3d_proc.d3dvidctx, VAR_2->d3d_proc.videoProcessor,
                                                       0, VAR_1, &VAR_10);

    D3D11_VIDEO_PROCESSOR_STREAM VAR_11 = {0};
    VAR_11.Enable = VAR_1;
    VAR_11.pInputSurface = VAR_5;

    VAR_8 = FUNC_0(VAR_2->d3d_proc.d3dvidctx,
                                              VAR_2->d3d_proc.videoProcessor,
                                              VAR_6,
                                              0, 1, &VAR_11);
    return FUNC_5(VAR_8);
}
