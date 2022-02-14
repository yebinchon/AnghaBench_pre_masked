
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int video_format_t ;
struct deinterlace_ctx {int dummy; } ;
struct TYPE_10__ {scalar_t__ b_top_field_first; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_11__ {int surface; } ;
typedef TYPE_2__ picture_sys_d3d9_t ;
struct TYPE_13__ {int SampleFormat; } ;
struct TYPE_12__ {int PlanarAlpha; int SrcRect; int DstRect; int SampleData; int End; scalar_t__ Start; TYPE_7__ SampleFormat; int SrcSurface; } ;
typedef int RECT ;
typedef TYPE_3__ DXVA2_VideoSample ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int const*,TYPE_7__*) ;
 int FUNC_3 (struct deinterlace_ctx const*,int const*,TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( DXVA2_VideoSample *VAR_5,
                        const struct deinterlace_ctx *VAR_6,
                        picture_t *VAR_7,
                        const video_format_t *VAR_8,
                        const RECT *VAR_9,
                        int VAR_10 )
{
    picture_sys_d3d9_t *VAR_11 = FUNC_0(VAR_7);

    VAR_5->SrcSurface = VAR_11->surface;
    VAR_5->SampleFormat.SampleFormat = VAR_7->b_top_field_first ?
                VAR_3 :
                VAR_4;
    FUNC_2(VAR_8, &VAR_5->SampleFormat);
    VAR_5->Start = 0;
    VAR_5->End = FUNC_4(FUNC_3(VAR_6, VAR_8, VAR_7));
    VAR_5->SampleData = VAR_1;
    if (!VAR_10)
        VAR_5->SampleData |= VAR_2;
    else
        VAR_5->SampleData |= VAR_0;
    VAR_5->DstRect = VAR_5->SrcRect = *VAR_9;
    VAR_5->PlanarAlpha = FUNC_1();
}
