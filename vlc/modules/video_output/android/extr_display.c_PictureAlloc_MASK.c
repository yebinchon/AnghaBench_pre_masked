
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* p_window; } ;
typedef TYPE_4__ vout_display_sys_t ;
typedef int video_format_t ;
typedef int picture_t ;
struct TYPE_14__ {TYPE_4__* p_vd_sys; } ;
struct TYPE_13__ {int b_vd_ref; int i_index; int lock; int p_jsurface; int p_surface; } ;
struct TYPE_16__ {TYPE_3__ sw; TYPE_2__ hw; } ;
typedef TYPE_5__ picture_sys_t ;
struct TYPE_17__ {int pf_destroy; TYPE_5__* p_sys; } ;
typedef TYPE_6__ picture_resource_t ;
struct TYPE_12__ {int p_jsurface; int p_surface; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 int * FUNC_3 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static picture_t *FUNC_6(vout_display_sys_t *VAR_2, video_format_t *VAR_3,
                               bool VAR_4)
{
    picture_t *VAR_5;
    picture_resource_t VAR_6;
    picture_sys_t *VAR_7 = FUNC_0(1, sizeof(*VAR_7));

    if (FUNC_4(VAR_7 == ((void*)0)))
        return ((void*)0);


    FUNC_2(&VAR_6, 0, sizeof(picture_resource_t));
    VAR_6.p_sys = VAR_7;

    if (VAR_4)
    {
        VAR_7->hw.b_vd_ref = 1;
        VAR_7->hw.p_surface = VAR_2->p_window->p_surface;
        VAR_7->hw.p_jsurface = VAR_2->p_window->p_jsurface;
        VAR_7->hw.i_index = -1;
        FUNC_5(&VAR_7->hw.lock);
        VAR_6.pf_destroy = VAR_0;
    }
    else
    {
        VAR_7->sw.p_vd_sys = VAR_2;
        VAR_6.pf_destroy = VAR_1;
    }

    VAR_5 = FUNC_3(VAR_3, &VAR_6);
    if (!VAR_5)
    {
        FUNC_1(VAR_7);
        return ((void*)0);
    }
    return VAR_5;
}
