
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_21__ {TYPE_7__* sys; } ;
typedef TYPE_6__ vout_display_t ;
struct TYPE_15__ {TYPE_5__* cropViewport; } ;
struct TYPE_18__ {int viewpoint; } ;
struct TYPE_16__ {scalar_t__ height; scalar_t__ y; scalar_t__ width; scalar_t__ x; } ;
struct TYPE_19__ {TYPE_3__ vdcfg; TYPE_1__ place; } ;
struct TYPE_17__ {int pixelFormat; } ;
struct TYPE_22__ {TYPE_12__ picQuad; TYPE_4__ area; TYPE_2__ display; } ;
typedef TYPE_7__ vout_display_sys_t ;
struct TYPE_23__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_20__ {int Height; int Width; int TopLeftY; int TopLeftX; } ;
typedef TYPE_8__ RECT ;


 int FUNC_0 (TYPE_12__*,TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_12__*,int *) ;
 int FUNC_2 (TYPE_6__*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    RECT VAR_2 = {
        .left = VAR_1->area.place.x,
        .right = VAR_1->area.place.x + VAR_1->area.place.width,
        .top = VAR_1->area.place.y,
        .bottom = VAR_1->area.place.y + VAR_1->area.place.height
    };

    FUNC_0( &VAR_1->picQuad, &VAR_2, VAR_1->display.pixelFormat );

    FUNC_1(VAR_0, &VAR_1->picQuad, &VAR_1->area.vdcfg.viewpoint);


    FUNC_2( VAR_0, "picQuad position (%.02f,%.02f) %.02fx%.02f",
             VAR_1->picQuad.cropViewport[0].TopLeftX, VAR_1->picQuad.cropViewport[0].TopLeftY,
             VAR_1->picQuad.cropViewport[0].Width, VAR_1->picQuad.cropViewport[0].Height );

}
