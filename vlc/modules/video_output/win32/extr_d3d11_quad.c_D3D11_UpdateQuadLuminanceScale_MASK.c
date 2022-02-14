
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {float LuminanceScale; } ;
struct TYPE_5__ {TYPE_3__ shaderConstants; } ;
typedef TYPE_1__ d3d_quad_t ;
typedef int d3d11_device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*,int ,TYPE_3__*) ;

void FUNC_1(vlc_object_t *VAR_1, d3d11_device_t *VAR_2, d3d_quad_t *VAR_3, float VAR_4)
{
    if (VAR_3->shaderConstants.LuminanceScale == VAR_4)
        return;

    float VAR_5 = VAR_3->shaderConstants.LuminanceScale;
    VAR_3->shaderConstants.LuminanceScale = VAR_4;
    if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_3->shaderConstants))
        VAR_3->shaderConstants.LuminanceScale = VAR_5;
}
