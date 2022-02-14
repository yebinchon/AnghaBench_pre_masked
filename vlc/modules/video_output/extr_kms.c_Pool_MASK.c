
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int fmt; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_12__ {int * pool; scalar_t__ picture; int stride; int height; scalar_t__* offsets; scalar_t__* map; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int rsc ;
struct TYPE_13__ {TYPE_3__* p_voutsys; } ;
typedef TYPE_4__ picture_sys_t ;
struct TYPE_14__ {int pf_destroy; TYPE_4__* p_sys; TYPE_1__* p; } ;
typedef TYPE_5__ picture_resource_t ;
typedef int picture_pool_t ;
struct TYPE_10__ {int i_pitch; int i_lines; scalar_t__ p_pixels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 TYPE_4__* FUNC_1 (int,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (scalar_t__) ;
 int * FUNC_6 (int,scalar_t__*) ;

__attribute__((used)) static picture_pool_t *FUNC_7(vout_display_t *VAR_2, unsigned VAR_3)
{
    FUNC_0(VAR_3);
    vout_display_sys_t *VAR_4 = VAR_2->sys;
    picture_sys_t *VAR_5;
    picture_resource_t VAR_6;
    int VAR_7;

    if (!VAR_4->pool && !VAR_4->picture) {
        FUNC_3(&VAR_6, 0, sizeof(VAR_6));

        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
            VAR_6.p[VAR_7].p_pixels = VAR_4->map[0]+VAR_4->offsets[VAR_7];
            VAR_6.p[VAR_7].i_lines = VAR_4->height;
            VAR_6.p[VAR_7].i_pitch = VAR_4->stride;
        }

        VAR_5 = FUNC_1(1, sizeof(*VAR_5));
        if (VAR_5 == ((void*)0))
            return ((void*)0);

        VAR_5->p_voutsys = VAR_4;
        VAR_6.p_sys = VAR_5;
        VAR_6.pf_destroy = VAR_0;

        VAR_4->picture = FUNC_4(&VAR_2->fmt, &VAR_6);

        if (!VAR_4->picture) {
            FUNC_2((void*)VAR_5);
            return ((void*)0);
        }

        VAR_4->pool = FUNC_6(1, &VAR_4->picture);
        if (!VAR_4->pool)
            FUNC_5(VAR_4->picture);
    }

    return VAR_4->pool;
}
