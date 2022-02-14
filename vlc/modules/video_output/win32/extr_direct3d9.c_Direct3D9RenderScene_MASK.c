
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_11__ {int * dev; } ;
struct TYPE_13__ {int clear_scene; int outside_opaque; int (* startEndRenderingCb ) (int ,int,int *) ;TYPE_1__ d3d_dev; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_14__ {scalar_t__ texture; } ;
typedef TYPE_4__ d3d_region_t ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int ,float,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int,int *) ;

__attribute__((used)) static void FUNC_10(vout_display_t *VAR_4,
                                d3d_region_t *VAR_5,
                                size_t VAR_6,
                                d3d_region_t *VAR_7)
{
    vout_display_sys_t *VAR_8 = VAR_4->sys;
    IDirect3DDevice9 *VAR_9 = VAR_8->d3d_dev.dev;
    HRESULT VAR_10;

    if (VAR_8->startEndRenderingCb && !VAR_8->startEndRenderingCb( VAR_8->outside_opaque, 1, ((void*)0) ))
        return;

    if (VAR_8->clear_scene) {

        VAR_10 = FUNC_4(VAR_9, 0, ((void*)0), VAR_0,
                                  FUNC_0(0, 0, 0), 1.0f, 0);
        if (FUNC_2(VAR_10)) {
            FUNC_7(VAR_4, "Failed Clear: 0x%lX", VAR_10);
            return;
        }
        VAR_8->clear_scene = 0;
    }

    VAR_10 = FUNC_3(VAR_9);
    if (FUNC_2(VAR_10)) {
        FUNC_7(VAR_4, "Failed BeginScene: 0x%lX", VAR_10);
        return;
    }

    FUNC_1(VAR_4, VAR_5, 1);

    if (VAR_6)
    {
        FUNC_6(VAR_9, VAR_1, VAR_3);
        for (size_t VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
            d3d_region_t *VAR_12 = &VAR_7[VAR_11];
            if (VAR_12->texture)
                FUNC_1(VAR_4, VAR_12, 0);
        }
        FUNC_6(VAR_9, VAR_1, VAR_2);
    }

    VAR_10 = FUNC_5(VAR_9);
    if (FUNC_2(VAR_10))
        FUNC_7(VAR_4, "Failed EndScene: 0x%lX", VAR_10);

    if (VAR_8->startEndRenderingCb)
        VAR_8->startEndRenderingCb( VAR_8->outside_opaque, 0, ((void*)0) );
}
