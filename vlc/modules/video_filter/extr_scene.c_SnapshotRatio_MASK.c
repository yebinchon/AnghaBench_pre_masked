
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int i_width; int i_height; } ;
struct TYPE_11__ {TYPE_5__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_12__ {scalar_t__ p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_10__ {scalar_t__ p_pic; } ;
struct TYPE_13__ {int i_frames; int i_ratio; int i_width; int i_height; TYPE_1__ scene; } ;
typedef TYPE_4__ filter_sys_t ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4( filter_t *VAR_0, picture_t *VAR_1 )
{
    filter_sys_t *VAR_2 = (filter_sys_t *)VAR_0->p_sys;

    if( !VAR_1 ) return;

    if( VAR_2->i_frames % VAR_2->i_ratio != 0 )
    {
        VAR_2->i_frames++;
        return;
    }
    VAR_2->i_frames++;

    if( VAR_2->scene.p_pic )
        FUNC_3( VAR_2->scene.p_pic );

    if( (VAR_2->i_width <= 0) && (VAR_2->i_height > 0) )
    {
        VAR_2->i_width = (VAR_1->format.i_width * VAR_2->i_height) / VAR_1->format.i_height;
    }
    else if( (VAR_2->i_height <= 0) && (VAR_2->i_width > 0) )
    {
        VAR_2->i_height = (VAR_1->format.i_height * VAR_2->i_width) / VAR_1->format.i_width;
    }
    else if( (VAR_2->i_width <= 0) && (VAR_2->i_height <= 0) )
    {
        VAR_2->i_width = VAR_1->format.i_width;
        VAR_2->i_height = VAR_1->format.i_height;
    }

    VAR_2->scene.p_pic = FUNC_2( &VAR_1->format );
    if( VAR_2->scene.p_pic )
    {
        FUNC_1( VAR_2->scene.p_pic, VAR_1 );
        FUNC_0( VAR_0, VAR_2->scene.p_pic );
    }
}
