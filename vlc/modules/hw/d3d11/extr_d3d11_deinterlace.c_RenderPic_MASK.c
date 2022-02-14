
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;


struct TYPE_24__ {int i_width; int i_height; scalar_t__ i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
struct TYPE_25__ {TYPE_2__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_26__ {int slice_index; int * resource; int context; int processorInput; } ;
typedef TYPE_4__ picture_sys_d3d11_t ;
struct TYPE_27__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_22__ {int videoProcessor; int d3dvidctx; } ;
struct TYPE_23__ {TYPE_3__** pp_history; } ;
struct TYPE_28__ {int outResource; int processorOutput; TYPE_18__ d3d_proc; TYPE_1__ context; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_31__ {int back; int right; int left; int bottom; int top; } ;
struct TYPE_30__ {int InputFrameOrField; int PastFrames; int FutureFrames; int pInputSurface; int * ppPastSurfaces; int * ppFutureSurfaces; int Enable; int member_0; } ;
struct TYPE_29__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_7__ RECT ;
typedef int HRESULT ;
typedef TYPE_8__ D3D11_VIDEO_PROCESSOR_STREAM ;
typedef int D3D11_VIDEO_FRAME_FORMAT ;
typedef TYPE_9__ D3D11_BOX ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_18__*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,TYPE_9__*) ;
 int FUNC_4 (int ,int ,int ,int ,int,TYPE_8__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,TYPE_7__*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,TYPE_7__*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11( filter_t *VAR_7, picture_t *VAR_8, picture_t *VAR_9,
                      int VAR_10, int VAR_11 )
{
    FUNC_9(VAR_10);
    HRESULT VAR_12;
    filter_sys_t *VAR_13 = VAR_7->p_sys;
    picture_sys_d3d11_t *VAR_14 = FUNC_0(VAR_8);

    picture_t *VAR_15 = VAR_13->context.pp_history[0];
    picture_t *VAR_16 = VAR_13->context.pp_history[1];
    picture_t *VAR_17 = VAR_13->context.pp_history[2];


    D3D11_VIDEO_FRAME_FORMAT VAR_18 = !VAR_11 ?
                VAR_1 :
                VAR_0;

    FUNC_7(VAR_13->d3d_proc.d3dvidctx, VAR_13->d3d_proc.videoProcessor, 0, VAR_18);
    FUNC_5(VAR_13->d3d_proc.d3dvidctx, VAR_13->d3d_proc.videoProcessor, 0, VAR_2);

    D3D11_VIDEO_PROCESSOR_STREAM VAR_19 = {0};
    VAR_19.Enable = VAR_4;
    VAR_19.InputFrameOrField = VAR_11 ? 1 : 0;

    if( VAR_16 && VAR_17 )
    {
        picture_sys_d3d11_t *VAR_20 = FUNC_0(VAR_17);
        if ( FUNC_10(!VAR_20) || FUNC_2(FUNC_1(VAR_7, &VAR_13->d3d_proc, VAR_20) ))
            return VAR_5;

        picture_sys_d3d11_t *VAR_21 = FUNC_0(VAR_16);
        if ( FUNC_10(!VAR_21) || FUNC_2( FUNC_1(VAR_7, &VAR_13->d3d_proc, VAR_21) ))
            return VAR_5;

        if ( VAR_15 )
        {
            picture_sys_d3d11_t *VAR_22 = FUNC_0(VAR_15);
            if ( FUNC_10(!VAR_22) || FUNC_2( FUNC_1(VAR_7, &VAR_13->d3d_proc, VAR_22) ))
                return VAR_5;

            VAR_19.pInputSurface = VAR_21->processorInput;
            VAR_19.ppFutureSurfaces = &VAR_20->processorInput;
            VAR_19.ppPastSurfaces = &VAR_22->processorInput;

            VAR_19.PastFrames = 1;
            VAR_19.FutureFrames = 1;
        }
        else
        {

            VAR_19.pInputSurface = VAR_20->processorInput;
            VAR_19.ppPastSurfaces = &VAR_21->processorInput;
            VAR_19.PastFrames = 1;
        }
    }
    else
    {
        picture_sys_d3d11_t *VAR_23 = FUNC_0(VAR_9);
        if ( FUNC_10(!VAR_23) || FUNC_2( FUNC_1(VAR_7, &VAR_13->d3d_proc, VAR_23) ))
            return VAR_5;


        VAR_19.pInputSurface = VAR_23->processorInput;
    }

    RECT VAR_24;
    VAR_24.left = VAR_9->format.i_x_offset;
    VAR_24.top = VAR_9->format.i_y_offset;
    VAR_24.right = VAR_24.left + VAR_9->format.i_visible_width;
    VAR_24.bottom = VAR_24.top + VAR_9->format.i_visible_height;
    FUNC_8(VAR_13->d3d_proc.d3dvidctx, VAR_13->d3d_proc.videoProcessor,
                                                         0, VAR_4, &VAR_24);
    FUNC_6(VAR_13->d3d_proc.d3dvidctx, VAR_13->d3d_proc.videoProcessor,
                                                         0, VAR_4, &VAR_24);

    VAR_12 = FUNC_4(VAR_13->d3d_proc.d3dvidctx, VAR_13->d3d_proc.videoProcessor,
                                              VAR_13->processorOutput,
                                              0, 1, &VAR_19);
    if (FUNC_2(VAR_12))
        return VAR_5;

    D3D11_BOX VAR_25 = {
        .top = 0,
        .bottom = VAR_8->format.i_height,
        .left = 0,
        .right = VAR_8->format.i_width,
        .back = 1,
    };

    FUNC_3(VAR_14->context,
                                              VAR_14->resource[VAR_3],
                                              VAR_14->slice_index,
                                              0, 0, 0,
                                              VAR_13->outResource,
                                              0, &VAR_25);
    return VAR_6;
}
