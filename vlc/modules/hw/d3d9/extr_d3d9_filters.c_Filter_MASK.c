
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_56__ TYPE_9__ ;
typedef struct TYPE_55__ TYPE_8__ ;
typedef struct TYPE_54__ TYPE_7__ ;
typedef struct TYPE_53__ TYPE_6__ ;
typedef struct TYPE_52__ TYPE_5__ ;
typedef struct TYPE_51__ TYPE_4__ ;
typedef struct TYPE_50__ TYPE_3__ ;
typedef struct TYPE_49__ TYPE_2__ ;
typedef struct TYPE_48__ TYPE_20__ ;
typedef struct TYPE_47__ TYPE_1__ ;
typedef struct TYPE_46__ TYPE_19__ ;
typedef struct TYPE_45__ TYPE_18__ ;
typedef struct TYPE_44__ TYPE_17__ ;
typedef struct TYPE_43__ TYPE_16__ ;
typedef struct TYPE_42__ TYPE_15__ ;
typedef struct TYPE_41__ TYPE_14__ ;
typedef struct TYPE_40__ TYPE_13__ ;
typedef struct TYPE_39__ TYPE_12__ ;
typedef struct TYPE_38__ TYPE_11__ ;
typedef struct TYPE_37__ TYPE_10__ ;


struct TYPE_40__ {TYPE_14__* p_sys; } ;
typedef TYPE_13__ picture_t ;
struct TYPE_41__ {int surface; } ;
typedef TYPE_14__ picture_sys_d3d9_t ;
struct TYPE_42__ {TYPE_16__* p_sys; } ;
typedef TYPE_15__ filter_t ;
struct TYPE_39__ {int dev; } ;
struct TYPE_56__ {int level; } ;
struct TYPE_53__ {int level; } ;
struct TYPE_51__ {int level; } ;
struct TYPE_49__ {int level; } ;
struct TYPE_43__ {int hw_surface; TYPE_12__ d3d_dev; int processor; TYPE_9__ Saturation; TYPE_6__ Hue; TYPE_4__ Contrast; TYPE_2__ Brightness; } ;
typedef TYPE_16__ filter_sys_t ;
struct TYPE_54__ {void* ll; } ;
struct TYPE_52__ {void* ll; } ;
struct TYPE_50__ {void* ll; } ;
struct TYPE_47__ {void* ll; } ;
struct TYPE_55__ {TYPE_7__ Saturation; TYPE_5__ Hue; TYPE_3__ Contrast; TYPE_1__ Brightness; } ;
struct TYPE_48__ {int Width; int Height; } ;
struct TYPE_38__ {int Alpha; } ;
struct TYPE_37__ {int SampleFormat; } ;
struct TYPE_44__ {void* right; void* bottom; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_46__ {TYPE_11__ BackgroundColor; TYPE_10__ DestFormat; int Alpha; scalar_t__ DestData; TYPE_17__ TargetRect; scalar_t__ TargetFrame; TYPE_8__ ProcAmpValues; int member_0; } ;
struct TYPE_45__ {int member_0; } ;
typedef TYPE_17__ RECT ;
typedef int HRESULT ;
typedef TYPE_18__ DXVA2_VideoSample ;
typedef TYPE_19__ DXVA2_VideoProcessBltParams ;
typedef TYPE_20__ D3DSURFACE_DESC ;


 TYPE_14__* FUNC_0 (TYPE_13__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_18__*,TYPE_13__*,TYPE_17__*) ;
 int FUNC_4 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_5 (int ,TYPE_20__*) ;
 int FUNC_6 (int ,int ,TYPE_19__*,TYPE_18__*,int,int *) ;
 void* FUNC_7 (int ,int ) ;
 void* FUNC_8 (int *) ;
 TYPE_13__* FUNC_9 (TYPE_15__*) ;
 int FUNC_10 (TYPE_13__*,TYPE_13__*) ;
 int FUNC_11 (TYPE_13__*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static picture_t *FUNC_13(filter_t *VAR_2, picture_t *VAR_3)
{
    filter_sys_t *VAR_4 = VAR_2->p_sys;

    picture_sys_d3d9_t *VAR_5 = FUNC_0(VAR_3);

    picture_t *VAR_6 = FUNC_9( VAR_2 );
    if( !VAR_6 )
        goto failed;

    picture_sys_d3d9_t *VAR_7 = VAR_6->p_sys;
    if( !VAR_7 || !VAR_7->surface )
        goto failed;

    FUNC_10( VAR_6, VAR_3 );

    RECT VAR_8;
    D3DSURFACE_DESC VAR_9, VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_5( VAR_5->surface, &VAR_9 );
    if (FUNC_12(FUNC_2(VAR_11)))
        goto failed;
    VAR_11 = FUNC_5( VAR_4->hw_surface, &VAR_10 );
    if (FUNC_12(FUNC_2(VAR_11)))
        goto failed;

    VAR_8.top = VAR_8.left = 0;
    VAR_8.bottom = FUNC_7(VAR_9.Height, VAR_10.Height);
    VAR_8.right = FUNC_7(VAR_9.Width, VAR_10.Width);

    DXVA2_VideoProcessBltParams VAR_12 = {0};
    DXVA2_VideoSample VAR_13 = {0};
    FUNC_3( &VAR_13, VAR_3, &VAR_8 );

    VAR_12.ProcAmpValues.Brightness.ll = FUNC_8( &VAR_4->Brightness.level );
    VAR_12.ProcAmpValues.Contrast.ll = FUNC_8( &VAR_4->Contrast.level );
    VAR_12.ProcAmpValues.Hue.ll = FUNC_8( &VAR_4->Hue.level );
    VAR_12.ProcAmpValues.Saturation.ll = FUNC_8( &VAR_4->Saturation.level );
    VAR_12.TargetFrame = 0;
    VAR_12.TargetRect = VAR_8;
    VAR_12.DestData = 0;
    VAR_12.Alpha = FUNC_1();
    VAR_12.DestFormat.SampleFormat = VAR_1;
    VAR_12.BackgroundColor.Alpha = 0xFFFF;

    VAR_11 = FUNC_6( VAR_4->processor,
                                                 VAR_4->hw_surface,
                                                 &VAR_12,
                                                 &VAR_13,
                                                 1, ((void*)0) );
    VAR_11 = FUNC_4( VAR_4->d3d_dev.dev,
                                       VAR_4->hw_surface, ((void*)0),
                                       VAR_7->surface, ((void*)0),
                                       VAR_0);
    if (FUNC_2(VAR_11))
        goto failed;

    FUNC_11( VAR_3 );
    return VAR_6;
failed:
    FUNC_11( VAR_3 );
    return ((void*)0);
}
