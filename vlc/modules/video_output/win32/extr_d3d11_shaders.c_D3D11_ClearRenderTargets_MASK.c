
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int formatTexture; } ;
typedef TYPE_1__ d3d_format_t ;
struct TYPE_6__ {int d3dcontext; } ;
typedef TYPE_2__ d3d11_device_t ;
typedef int ID3D11RenderTargetView ;
typedef float FLOAT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,float const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;

void FUNC_3(d3d11_device_t *VAR_1, const d3d_format_t *VAR_2,
                              ID3D11RenderTargetView *VAR_3[VAR_0])
{
    static const FLOAT VAR_4[1] = {0.0f};
    static const FLOAT VAR_5[2] = {0.5f, 0.5f};
    static const FLOAT VAR_6[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    static const FLOAT VAR_7[4] = {0.0f, 0.5f, 0.0f, 0.5f};
    static const FLOAT VAR_8[4] = {0.5f, 0.5f, 0.0f, 1.0f};

    FUNC_1(VAR_0 >= 2, "we need at least 2 RenderTargetView for NV12/P010");

    switch (VAR_2->formatTexture)
    {
    case 132:
    case 131:
        FUNC_0( VAR_1->d3dcontext, VAR_3[0], VAR_4);
        FUNC_0( VAR_1->d3dcontext, VAR_3[1], VAR_5);
        break;
    case 129:
    case 134:
    case 133:
    case 130:
    case 135:
        FUNC_0( VAR_1->d3dcontext, VAR_3[0], VAR_6);
        break;
    case 128:
        FUNC_0( VAR_1->d3dcontext, VAR_3[0], VAR_7);
        break;
    case 136:
        FUNC_0( VAR_1->d3dcontext, VAR_3[0], VAR_8);
        break;
    default:
        FUNC_2();
    }
}
