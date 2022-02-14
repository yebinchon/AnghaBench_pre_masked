
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdp; int surface; } ;
typedef TYPE_1__ vlc_vdp_output_surface_t ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ picture_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(picture_t *VAR_0)
{
    vlc_vdp_output_surface_t *VAR_1 = VAR_0->p_sys;

    FUNC_1(VAR_1->vdp, VAR_1->surface);
    FUNC_2(VAR_1->vdp);
    FUNC_0(VAR_1);
}
