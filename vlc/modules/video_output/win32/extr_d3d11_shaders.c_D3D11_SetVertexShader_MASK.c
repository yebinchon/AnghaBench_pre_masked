
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shader; int layout; } ;
typedef TYPE_1__ d3d_vshader_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(d3d_vshader_t *VAR_0, d3d_vshader_t *VAR_1)
{
    VAR_0->layout = VAR_1->layout;
    FUNC_0(VAR_0->layout);
    VAR_0->shader = VAR_1->shader;
    FUNC_1(VAR_0->shader);
}
