
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdp; int pool; int mixer; } ;
typedef TYPE_1__ vlc_vdp_mixer_t ;
typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ filter_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(vlc_object_t *VAR_0)
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    vlc_vdp_mixer_t *VAR_2 = VAR_1->p_sys;

    FUNC_0(VAR_1);
    FUNC_3(VAR_2->vdp, VAR_2->mixer);
    FUNC_1(VAR_2->pool);
    FUNC_2(VAR_2->vdp);
}
