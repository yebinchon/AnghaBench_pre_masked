
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** d3dpixelShader; } ;
typedef TYPE_1__ d3d_quad_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(d3d_quad_t *VAR_1)
{
    for (size_t VAR_2=0; VAR_2<VAR_0; VAR_2++)
    {
        if (VAR_1->d3dpixelShader[VAR_2])
        {
            FUNC_0(VAR_1->d3dpixelShader[VAR_2]);
            VAR_1->d3dpixelShader[VAR_2] = ((void*)0);
        }
    }
}
