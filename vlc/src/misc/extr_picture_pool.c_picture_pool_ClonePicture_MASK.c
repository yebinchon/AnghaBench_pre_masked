
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int i_planes; int format; TYPE_2__* p; int p_sys; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_17__ {TYPE_1__* p; int pf_destroy; int p_sys; } ;
typedef TYPE_5__ picture_resource_t ;
struct TYPE_15__ {void* opaque; } ;
struct TYPE_18__ {TYPE_3__ gc; } ;
typedef TYPE_6__ picture_priv_t ;
struct TYPE_19__ {TYPE_4__** picture; } ;
typedef TYPE_7__ picture_pool_t ;
struct TYPE_14__ {int i_pitch; int i_lines; int p_pixels; } ;
struct TYPE_13__ {int i_pitch; int i_lines; int p_pixels; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *,TYPE_5__*) ;
 int VAR_0 ;

__attribute__((used)) static picture_t *FUNC_3(picture_pool_t *VAR_1,
                                            unsigned VAR_2)
{
    picture_t *VAR_3 = VAR_1->picture[VAR_2];
    uintptr_t VAR_4 = ((uintptr_t)VAR_1) + VAR_2;
    picture_resource_t VAR_5 = {
        .p_sys = VAR_3->p_sys,
        .pf_destroy = VAR_0,
    };

    for (int VAR_6 = 0; VAR_6 < VAR_3->i_planes; VAR_6++) {
        VAR_5.p[VAR_6].p_pixels = VAR_3->p[VAR_6].p_pixels;
        VAR_5.p[VAR_6].i_lines = VAR_3->p[VAR_6].i_lines;
        VAR_5.p[VAR_6].i_pitch = VAR_3->p[VAR_6].i_pitch;
    }

    picture_t *VAR_7 = FUNC_2(&VAR_3->format, &VAR_5);
    if (FUNC_0(VAR_7 != ((void*)0))) {
        ((picture_priv_t *)VAR_7)->gc.opaque = (void *)VAR_4;
        FUNC_1(VAR_3);
    }
    return VAR_7;
}
