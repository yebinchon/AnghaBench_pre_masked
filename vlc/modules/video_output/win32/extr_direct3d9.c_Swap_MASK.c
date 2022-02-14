
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {TYPE_7__* sys; } ;
typedef TYPE_6__ vout_display_t ;
struct TYPE_20__ {int hvideownd; } ;
struct TYPE_19__ {scalar_t__ use_ex; } ;
struct TYPE_16__ {int height; int width; } ;
struct TYPE_17__ {TYPE_1__ display; } ;
struct TYPE_18__ {TYPE_2__ vdcfg; } ;
struct TYPE_23__ {int dev; int devex; } ;
struct TYPE_22__ {TYPE_5__ sys; TYPE_4__ hd3d; TYPE_3__ area; TYPE_8__ d3d_dev; } ;
typedef TYPE_7__ vout_display_sys_t ;
typedef TYPE_8__ d3d9_device_t ;
struct TYPE_24__ {int bottom; int top; int right; int left; } ;
typedef TYPE_9__ RECT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_9__*,TYPE_9__*,int ,int *,int ) ;
 int FUNC_2 (int ,TYPE_9__*,TYPE_9__*,int ,int *) ;
 int FUNC_3 (TYPE_6__*,char*,int ) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    const d3d9_device_t *VAR_2 = &VAR_1->d3d_dev;



    RECT VAR_3 = {
        .left = 0,
        .right = VAR_1->area.vdcfg.display.width,
        .top = 0,
        .bottom = VAR_1->area.vdcfg.display.height
    };

    HRESULT VAR_4;
    if (VAR_1->hd3d.use_ex) {
        VAR_4 = FUNC_1(VAR_2->devex, &VAR_3, &VAR_3, VAR_1->sys.hvideownd, ((void*)0), 0);
    } else {
        VAR_4 = FUNC_2(VAR_2->dev, &VAR_3, &VAR_3, VAR_1->sys.hvideownd, ((void*)0));
    }
    if (FUNC_0(VAR_4)) {
        FUNC_3(VAR_0, "Failed Present: 0x%lX", VAR_4);
    }
}
