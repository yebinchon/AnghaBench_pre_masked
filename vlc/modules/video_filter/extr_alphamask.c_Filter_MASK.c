
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ i_visible_pitch; scalar_t__ i_visible_lines; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_14__ {TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_15__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_16__ {int mask_lock; TYPE_1__* p_mask; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_12__ {TYPE_2__* p; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static picture_t *FUNC_4( filter_t *VAR_1, picture_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;

    FUNC_2( &VAR_3->mask_lock );
    plane_t *VAR_4 = VAR_3->p_mask->p+VAR_0;
    plane_t *VAR_5 = VAR_2->p+VAR_0;
    if( VAR_4->i_visible_pitch
        != VAR_5->i_visible_pitch
        || VAR_4->i_visible_lines
        != VAR_5->i_visible_lines )
    {
        FUNC_0( VAR_1,
                  "Mask size (%d x %d) and image size (%d x %d) "
                  "don't match. The mask will not be applied.",
                  VAR_4->i_visible_pitch,
                  VAR_4->i_visible_lines,
                  VAR_5->i_visible_pitch,
                  VAR_5->i_visible_lines );
    }
    else
    {
        FUNC_1( VAR_5, VAR_4 );
    }
    FUNC_3( &VAR_3->mask_lock );
    return VAR_2;
}
