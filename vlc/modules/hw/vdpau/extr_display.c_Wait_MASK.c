
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xcb_generic_event_t ;
struct TYPE_11__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_12__ {int conn; TYPE_4__* current; int vdp; int queue; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_13__ {int surface; } ;
typedef TYPE_3__ vlc_vdp_output_surface_t ;
struct TYPE_14__ {TYPE_3__* p_sys; } ;
typedef TYPE_4__ picture_t ;
typedef int VdpTime ;
typedef scalar_t__ VdpStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(vout_display_t *VAR_1, picture_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_1->sys;
    xcb_generic_event_t *VAR_4;

    picture_t *VAR_5 = VAR_3->current;
    if (VAR_5 != ((void*)0))
    {
        vlc_vdp_output_surface_t *VAR_6 = VAR_5->p_sys;
        VdpTime VAR_7;
        VdpStatus VAR_8;

        VAR_8 = FUNC_5(VAR_3->vdp,
                                              VAR_3->queue, VAR_6->surface, &VAR_7);
        if (VAR_8 != VAR_0)
        {
            FUNC_1(VAR_1, "presentation queue blocking error: %s",
                    FUNC_4(VAR_3->vdp, VAR_8));
            goto out;
        }
        FUNC_3(VAR_5);
    }

    VAR_3->current = FUNC_2(VAR_2);
out:


    while ((VAR_4 = FUNC_6(VAR_3->conn)) != ((void*)0))
        FUNC_0(VAR_4);
}
