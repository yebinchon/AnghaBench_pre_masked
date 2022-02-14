
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


struct TYPE_16__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_17__ {TYPE_6__* p_sub_buffer_bounds; TYPE_3__* p_sub_pic; } ;
typedef TYPE_5__ vout_display_sys_t ;
typedef int subpicture_t ;
struct TYPE_19__ {scalar_t__ left; unsigned int right; unsigned int bottom; scalar_t__ top; } ;
struct TYPE_18__ {TYPE_7__ bounds; int * p_pixels; } ;
typedef TYPE_6__ buffer_bounds ;
struct TYPE_13__ {unsigned int i_width; unsigned int i_height; } ;
struct TYPE_15__ {TYPE_2__* p; TYPE_1__ format; } ;
struct TYPE_14__ {int * p_pixels; } ;
typedef TYPE_7__ ARect ;


 int FUNC_0 (int *,TYPE_7__*) ;
 TYPE_6__* FUNC_1 (TYPE_6__*,int) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0,
                                   subpicture_t *VAR_1,
                                   ARect *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_0->sys;
    int VAR_4 = 0;
    bool VAR_5 = 0;





    if (VAR_3->p_sub_buffer_bounds) {
        for (; VAR_3->p_sub_buffer_bounds[VAR_4].p_pixels != ((void*)0); ++VAR_4) {
            buffer_bounds *VAR_6 = &VAR_3->p_sub_buffer_bounds[VAR_4];
            if (VAR_6->p_pixels == VAR_3->p_sub_pic->p[0].p_pixels) {
                *VAR_2 = VAR_6->bounds;
                VAR_5 = 1;
                break;
            }
        }
    }

    if (!VAR_5
     || VAR_2->left < 0
     || VAR_2->right < 0
     || (unsigned int) VAR_2->right > VAR_3->p_sub_pic->format.i_width
     || VAR_2->bottom < 0
     || VAR_2->top < 0
     || (unsigned int) VAR_2->top > VAR_3->p_sub_pic->format.i_height)
    {

        VAR_2->left = 0;
        VAR_2->top = 0;
        VAR_2->right = VAR_3->p_sub_pic->format.i_width;
        VAR_2->bottom = VAR_3->p_sub_pic->format.i_height;
    }


    if (!VAR_3->p_sub_buffer_bounds
     || VAR_3->p_sub_buffer_bounds[VAR_4].p_pixels == ((void*)0)) {
        buffer_bounds *VAR_7 = FUNC_1(VAR_3->p_sub_buffer_bounds,
                                      (VAR_4 + 2) * sizeof(buffer_bounds));
        if (VAR_7) {
            VAR_3->p_sub_buffer_bounds = VAR_7;
            VAR_3->p_sub_buffer_bounds[VAR_4].p_pixels = VAR_3->p_sub_pic->p[0].p_pixels;
            VAR_3->p_sub_buffer_bounds[VAR_4+1].p_pixels = ((void*)0);
        }
    }


    if (VAR_3->p_sub_buffer_bounds
     && VAR_3->p_sub_buffer_bounds[VAR_4].p_pixels != ((void*)0))
        FUNC_0(VAR_1, &VAR_3->p_sub_buffer_bounds[VAR_4].bounds);
}
