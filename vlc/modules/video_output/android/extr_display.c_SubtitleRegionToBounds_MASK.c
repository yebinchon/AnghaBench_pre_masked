
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_region; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_7__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; } ;
struct TYPE_9__ {scalar_t__ i_x; scalar_t__ i_y; TYPE_1__ fmt; struct TYPE_9__* p_next; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_10__ {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
typedef TYPE_4__ ARect ;



__attribute__((used)) static void FUNC_0(subpicture_t *VAR_0,
                                   ARect *VAR_1)
{
    if (VAR_0) {
        for (subpicture_region_t *VAR_2 = VAR_0->p_region; VAR_2 != ((void*)0); VAR_2 = VAR_2->p_next) {
            ARect VAR_3;

            VAR_3.left = VAR_2->i_x;
            VAR_3.top = VAR_2->i_y;
            if (VAR_3.left < 0)
                VAR_3.left = 0;
            if (VAR_3.top < 0)
                VAR_3.top = 0;
            VAR_3.right = VAR_2->fmt.i_visible_width + VAR_2->i_x;
            VAR_3.bottom = VAR_2->fmt.i_visible_height + VAR_2->i_y;
            if (VAR_2 == &VAR_0->p_region[0])
                *VAR_1 = VAR_3;
            else {
                if (VAR_1->left > VAR_3.left)
                    VAR_1->left = VAR_3.left;
                if (VAR_1->right < VAR_3.right)
                    VAR_1->right = VAR_3.right;
                if (VAR_1->top > VAR_3.top)
                    VAR_1->top = VAR_3.top;
                if (VAR_1->bottom < VAR_3.bottom)
                    VAR_1->bottom = VAR_3.bottom;
            }
        }
    } else {
        VAR_1->left = VAR_1->top = 0;
        VAR_1->right = VAR_1->bottom = 0;
    }
}
