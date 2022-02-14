
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int i_planes; TYPE_7__* context; int format; TYPE_2__* p; int p_sys; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_18__ {TYPE_1__* p; int pf_destroy; int p_sys; } ;
typedef TYPE_5__ picture_resource_t ;
struct TYPE_16__ {TYPE_4__* opaque; } ;
struct TYPE_19__ {TYPE_3__ gc; } ;
typedef TYPE_6__ picture_priv_t ;
struct TYPE_20__ {TYPE_7__* (* copy ) (TYPE_7__*) ;} ;
struct TYPE_15__ {int i_pitch; int i_lines; int p_pixels; } ;
struct TYPE_14__ {int i_pitch; int i_lines; int p_pixels; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *,TYPE_5__*) ;
 TYPE_7__* FUNC_3 (TYPE_7__*) ;

picture_t *FUNC_4(picture_t *VAR_1)
{

    picture_resource_t VAR_2 = {
        .p_sys = VAR_1->p_sys,
        .pf_destroy = VAR_0,
    };

    for (int VAR_3 = 0; VAR_3 < VAR_1->i_planes; VAR_3++) {
        VAR_2.p[VAR_3].p_pixels = VAR_1->p[VAR_3].p_pixels;
        VAR_2.p[VAR_3].i_lines = VAR_1->p[VAR_3].i_lines;
        VAR_2.p[VAR_3].i_pitch = VAR_1->p[VAR_3].i_pitch;
    }

    picture_t *VAR_4 = FUNC_2(&VAR_1->format, &VAR_2);
    if (FUNC_0(VAR_4 != ((void*)0))) {
        ((picture_priv_t *)VAR_4)->gc.opaque = VAR_1;
        FUNC_1(VAR_1);

        if (VAR_1->context != ((void*)0))
            VAR_4->context = VAR_1->context->copy(VAR_1->context);
    }
    return VAR_4;
}
