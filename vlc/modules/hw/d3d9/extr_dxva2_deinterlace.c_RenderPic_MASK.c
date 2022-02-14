
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_33__ {int format; TYPE_6__* p_sys; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_34__ {int surface; } ;
typedef TYPE_6__ picture_sys_d3d9_t ;
struct TYPE_30__ {int video; } ;
struct TYPE_35__ {TYPE_2__ fmt_out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_32__ {int dev; } ;
struct TYPE_28__ {TYPE_5__** pp_history; } ;
struct TYPE_29__ {int NumBackwardRefSamples; int NumForwardRefSamples; } ;
struct TYPE_36__ {int hw_surface; TYPE_4__ d3d_dev; int processor; TYPE_18__ context; TYPE_1__ decoder_caps; } ;
typedef TYPE_8__ filter_sys_t ;
struct TYPE_37__ {void* right; void* bottom; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_31__ {int SampleFormat; } ;
struct TYPE_27__ {int Width; int Height; } ;
struct TYPE_26__ {TYPE_3__ SampleFormat; } ;
typedef TYPE_9__ RECT ;
typedef int HRESULT ;
typedef TYPE_10__ DXVA2_VideoSample ;
typedef int DXVA2_VideoProcessBltParams ;
typedef TYPE_11__ D3DSURFACE_DESC ;


 TYPE_6__* FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*,int *,TYPE_9__*,TYPE_10__*,int,int *) ;
 int FUNC_3 (TYPE_10__*,TYPE_18__*,TYPE_5__*,int *,TYPE_9__*,int) ;
 int FUNC_4 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_5 (int ,TYPE_11__*) ;
 int FUNC_6 (int ,int ,int *,TYPE_10__*,int const,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9( filter_t *VAR_4, picture_t *VAR_5, picture_t *VAR_6,
                      int VAR_7, int VAR_8 )
{
    filter_sys_t *VAR_9 = VAR_4->p_sys;
    picture_sys_d3d9_t *VAR_10 = VAR_5->p_sys;
    const int VAR_11 = VAR_9->decoder_caps.NumBackwardRefSamples + 1 +
                          VAR_9->decoder_caps.NumForwardRefSamples;
    HRESULT VAR_12;
    DXVA2_VideoProcessBltParams VAR_13;
    DXVA2_VideoSample VAR_14[VAR_11];
    picture_t *VAR_15[VAR_11];
    D3DSURFACE_DESC VAR_16, VAR_17;
    RECT VAR_18;

    picture_t *VAR_19 = VAR_9->context.pp_history[0];
    picture_t *VAR_20 = VAR_9->context.pp_history[1];
    picture_t *VAR_21 = VAR_9->context.pp_history[2];

    picture_sys_d3d9_t *VAR_22 = FUNC_0(VAR_6);

    VAR_12 = FUNC_5( VAR_22->surface, &VAR_16 );
    if (FUNC_8(FUNC_1(VAR_12)))
        return VAR_2;
    VAR_12 = FUNC_5( VAR_9->hw_surface, &VAR_17 );
    if (FUNC_8(FUNC_1(VAR_12)))
        return VAR_2;

    VAR_18.top = VAR_18.left = 0;
    VAR_18.bottom = FUNC_7(VAR_16.Height, VAR_17.Height);
    VAR_18.right = FUNC_7(VAR_16.Width, VAR_17.Width);

    int VAR_23 = VAR_11 - 1;
    if (VAR_21)
    {
        VAR_15[VAR_23--] = VAR_21;
        if (VAR_20)
            VAR_15[VAR_23--] = VAR_20;
        if (VAR_19)
            VAR_15[VAR_23--] = VAR_19;
    }
    else
        VAR_15[VAR_23--] = VAR_6;
    while (VAR_23 >= 0)
        VAR_15[VAR_23--] = ((void*)0);

    for (VAR_23 = 0; VAR_23 <= VAR_11-1; VAR_23++)
    {
        if (VAR_15[VAR_23])
            FUNC_3( &VAR_14[VAR_23], &VAR_9->context, VAR_15[VAR_23], &VAR_4->fmt_out.video, &VAR_18, VAR_8);
        else
        {
            FUNC_3( &VAR_14[VAR_23], &VAR_9->context, VAR_6, &VAR_4->fmt_out.video, &VAR_18, VAR_8);
            VAR_14[VAR_23].SampleFormat.SampleFormat = VAR_1;
        }
    }

    FUNC_2( VAR_9, &VAR_13, &VAR_18, VAR_14, VAR_7, &VAR_5->format );

    VAR_12 = FUNC_6( VAR_9->processor,
                                                 VAR_9->hw_surface,
                                                 &VAR_13,
                                                 VAR_14,
                                                 VAR_11, ((void*)0) );
    if (FUNC_1(VAR_12))
        return VAR_2;

    VAR_12 = FUNC_4( VAR_9->d3d_dev.dev,
                                       VAR_9->hw_surface, ((void*)0),
                                       VAR_10->surface, ((void*)0),
                                       VAR_0);
    if (FUNC_1(VAR_12))
        return VAR_2;

    return VAR_3;
}
