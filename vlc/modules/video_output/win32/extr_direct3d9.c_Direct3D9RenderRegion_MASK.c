
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_8__ {int * dev; } ;
struct TYPE_10__ {int * d3dx_shader; int sceneVertexBuffer; TYPE_1__ d3d_dev; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_11__ {float width; float height; scalar_t__ texture; int vertex; } ;
typedef TYPE_4__ d3d_region_t ;
typedef int IDirect3DDevice9 ;
typedef int IDirect3DBaseTexture9 ;
typedef int HRESULT ;
typedef int CUSTOMVERTEX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,float*,int) ;
 int FUNC_4 (int *,int ,int ,int ,int) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int ,int ,int ,void**,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_10(vout_display_t *VAR_2,
                                const d3d_region_t *VAR_3,
                                bool VAR_4)
{
    vout_display_sys_t *VAR_5 = VAR_2->sys;

    IDirect3DDevice9 *VAR_6 = VAR_2->sys->d3d_dev.dev;

    HRESULT VAR_7;


    void *VAR_8;
    VAR_7 = FUNC_6(VAR_5->sceneVertexBuffer, 0, 0, &VAR_8, VAR_0);
    if (FUNC_0(VAR_7)) {
        FUNC_9(VAR_2, "Failed IDirect3DVertexBuffer9_Lock: 0x%lX", VAR_7);
        return -1;
    }
    FUNC_8(VAR_8, VAR_3->vertex, sizeof(VAR_3->vertex));
    VAR_7 = FUNC_7(VAR_5->sceneVertexBuffer);
    if (FUNC_0(VAR_7)) {
        FUNC_9(VAR_2, "Failed IDirect3DVertexBuffer9_Unlock: 0x%lX", VAR_7);
        return -1;
    }


    VAR_7 = FUNC_4(VAR_6, 0, VAR_5->sceneVertexBuffer, 0, sizeof(CUSTOMVERTEX));
    if (FUNC_0(VAR_7)) {
        FUNC_9(VAR_2, "Failed SetStreamSource: 0x%lX", VAR_7);
        return -1;
    }





    VAR_7 = FUNC_5(VAR_6, 0, (IDirect3DBaseTexture9*)VAR_3->texture);
    if (FUNC_0(VAR_7)) {
        FUNC_9(VAR_2, "Failed SetTexture: 0x%lX", VAR_7);
        return -1;
    }

    if (VAR_5->d3dx_shader) {
        if (VAR_4)
        {
            VAR_7 = FUNC_2(VAR_6, VAR_5->d3dx_shader);
            float VAR_9[4] = { VAR_3->width, VAR_3->height, 0, 0 };
            VAR_7 = FUNC_3(VAR_6, 0, VAR_9, 1);
            if (FUNC_0(VAR_7)) {
                FUNC_9(VAR_2, "Failed SetPixelShaderConstantF: 0x%lX", VAR_7);
                return -1;
            }
        }
        else
            VAR_7 = FUNC_2(VAR_6, ((void*)0));
        if (FUNC_0(VAR_7)) {
            FUNC_9(VAR_2, "Failed SetPixelShader: 0x%lX", VAR_7);
            return -1;
        }
    }


    VAR_7 = FUNC_1(VAR_6, VAR_1, 0, 2);
    if (FUNC_0(VAR_7)) {
        FUNC_9(VAR_2, "Failed DrawPrimitive: 0x%lX", VAR_7);
        return -1;
    }
    return 0;
}
