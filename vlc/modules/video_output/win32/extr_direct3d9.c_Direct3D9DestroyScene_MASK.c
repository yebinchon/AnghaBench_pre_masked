
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int * d3dregion; scalar_t__ d3dregion_count; int * sceneTexture; int * sceneVertexBuffer; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    FUNC_0(VAR_1->d3dregion_count, VAR_1->d3dregion);

    if (VAR_1->sceneVertexBuffer)
    {
        FUNC_2(VAR_1->sceneVertexBuffer);
        VAR_1->sceneVertexBuffer = ((void*)0);
    }

    if (VAR_1->sceneTexture)
    {
        FUNC_1(VAR_1->sceneTexture);
        VAR_1->sceneTexture = ((void*)0);
    }

    VAR_1->d3dregion_count = 0;
    VAR_1->d3dregion = ((void*)0);

    FUNC_3(VAR_0, "Direct3D9 scene released successfully");
}
