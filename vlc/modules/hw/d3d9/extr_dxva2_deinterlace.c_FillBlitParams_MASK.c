
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int video_format_t ;
struct TYPE_28__ {int Saturation; int Hue; int Contrast; int Brightness; } ;
typedef TYPE_8__ filter_sys_t ;
struct TYPE_29__ {int bottom; int right; } ;
struct TYPE_26__ {int Value; } ;
struct TYPE_25__ {int Value; } ;
struct TYPE_24__ {int Value; } ;
struct TYPE_23__ {int Value; } ;
struct TYPE_27__ {TYPE_6__ Saturation; TYPE_5__ Hue; TYPE_4__ Contrast; TYPE_3__ Brightness; } ;
struct TYPE_22__ {int cy; int cx; } ;
struct TYPE_21__ {int Alpha; } ;
struct TYPE_20__ {int SampleFormat; } ;
struct TYPE_19__ {int TargetFrame; TYPE_7__ ProcAmpValues; TYPE_9__ TargetRect; TYPE_2__ ConstrictionSize; TYPE_1__ BackgroundColor; TYPE_13__ DestFormat; int Alpha; scalar_t__ DestData; } ;
struct TYPE_18__ {int End; int Start; } ;
typedef TYPE_9__ RECT ;
typedef TYPE_10__ DXVA2_VideoSample ;
typedef TYPE_11__ DXVA2_VideoProcessBltParams ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int const*,TYPE_13__*) ;
 int FUNC_2 (TYPE_11__*,int ,int) ;

__attribute__((used)) static void FUNC_3( filter_sys_t *VAR_1,
                            DXVA2_VideoProcessBltParams *VAR_2, const RECT *VAR_3,
                            const DXVA2_VideoSample *VAR_4, int VAR_5,
                            const video_format_t *VAR_6)
{
    FUNC_2(VAR_2, 0, sizeof(*VAR_2));
    VAR_2->TargetFrame = (VAR_4->End - VAR_4->Start) * VAR_5 / 2;
    VAR_2->TargetRect = *VAR_3;
    VAR_2->DestData = 0;
    VAR_2->Alpha = FUNC_0();
    VAR_2->DestFormat.SampleFormat = VAR_0;
    FUNC_1(VAR_6, &VAR_2->DestFormat);
    VAR_2->BackgroundColor.Alpha = 0xFFFF;
    VAR_2->ConstrictionSize.cx = VAR_2->TargetRect.right;
    VAR_2->ConstrictionSize.cy = VAR_2->TargetRect.bottom;

    VAR_2->ProcAmpValues.Brightness.Value = VAR_1->Brightness;
    VAR_2->ProcAmpValues.Contrast.Value = VAR_1->Contrast;
    VAR_2->ProcAmpValues.Hue.Value = VAR_1->Hue;
    VAR_2->ProcAmpValues.Saturation.Value = VAR_1->Saturation;
}
