
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_7__ {int * prepareWait; int regionQuad; int projectionVShader; int flatVShader; int stagingSys; scalar_t__ d3dregion_count; int d3dregions; int picQuad; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_8(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    FUNC_4(VAR_0);

    FUNC_1(&VAR_1->picQuad);
    FUNC_3(VAR_1->d3dregion_count, VAR_1->d3dregions);
    VAR_1->d3dregion_count = 0;

    FUNC_6(&VAR_1->stagingSys);

    FUNC_2(&VAR_1->flatVShader);
    FUNC_2(&VAR_1->projectionVShader);

    FUNC_0(&VAR_1->regionQuad);
    if (VAR_1->prepareWait)
    {
        FUNC_5(VAR_1->prepareWait);
        VAR_1->prepareWait = ((void*)0);
    }

    FUNC_7(VAR_0, "Direct3D11 resources destroyed");
}
