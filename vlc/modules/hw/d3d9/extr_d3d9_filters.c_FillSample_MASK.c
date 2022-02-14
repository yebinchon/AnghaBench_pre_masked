
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_7__ {int surface; } ;
typedef TYPE_2__ picture_sys_d3d9_t ;
struct TYPE_6__ {int SampleFormat; } ;
struct TYPE_8__ {int PlanarAlpha; int SrcRect; int DstRect; scalar_t__ SampleData; scalar_t__ End; scalar_t__ Start; TYPE_1__ SampleFormat; int SrcSurface; } ;
typedef int RECT ;
typedef TYPE_3__ DXVA2_VideoSample ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2( DXVA2_VideoSample *VAR_1,
                        picture_t *VAR_2,
                        const RECT *VAR_3 )
{
    picture_sys_d3d9_t *VAR_4 = FUNC_0(VAR_2);

    VAR_1->SrcSurface = VAR_4->surface;
    VAR_1->SampleFormat.SampleFormat = VAR_0;
    VAR_1->Start = 0;
    VAR_1->End =0;
    VAR_1->SampleData = 0;
    VAR_1->DstRect = VAR_1->SrcRect = *VAR_3;
    VAR_1->PlanarAlpha = FUNC_1();
}
