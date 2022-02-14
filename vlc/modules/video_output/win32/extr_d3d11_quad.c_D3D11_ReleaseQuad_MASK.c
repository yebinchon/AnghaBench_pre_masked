
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int picSys; int ** d3dsampState; int * pVertexShaderConstants; int * pIndexBuffer; int * pVertexBuffer; int ** pPixelShaderConstants; } ;
typedef TYPE_1__ d3d_quad_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (int *) ;

void FUNC_4(d3d_quad_t *VAR_2)
{
    if (VAR_2->pPixelShaderConstants[VAR_1])
    {
        FUNC_1(VAR_2->pPixelShaderConstants[VAR_1]);
        VAR_2->pPixelShaderConstants[VAR_1] = ((void*)0);
    }
    if (VAR_2->pPixelShaderConstants[VAR_0])
    {
        FUNC_1(VAR_2->pPixelShaderConstants[VAR_0]);
        VAR_2->pPixelShaderConstants[VAR_0] = ((void*)0);
    }
    if (VAR_2->pVertexBuffer)
    {
        FUNC_1(VAR_2->pVertexBuffer);
        VAR_2->pVertexBuffer = ((void*)0);
    }
    if (VAR_2->pIndexBuffer)
    {
        FUNC_1(VAR_2->pIndexBuffer);
        VAR_2->pIndexBuffer = ((void*)0);
    }
    if (VAR_2->pVertexShaderConstants)
    {
        FUNC_1(VAR_2->pVertexShaderConstants);
        VAR_2->pVertexShaderConstants = ((void*)0);
    }
    FUNC_0(VAR_2);
    for (size_t VAR_3=0; VAR_3<2; VAR_3++)
    {
        if (VAR_2->d3dsampState[VAR_3])
        {
            FUNC_2(VAR_2->d3dsampState[VAR_3]);
            VAR_2->d3dsampState[VAR_3] = ((void*)0);
        }
    }
    FUNC_3(&VAR_2->picSys);
}
