
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_13__ {int i_planes; TYPE_2__* p; int p_sys; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_14__ {TYPE_3__* p; int * pf_destroy; int p_sys; } ;
typedef TYPE_5__ picture_resource_t ;
struct TYPE_10__ {int * destroy; } ;
struct TYPE_15__ {TYPE_1__ gc; TYPE_4__ picture; } ;
typedef TYPE_6__ picture_priv_t ;
struct TYPE_12__ {int i_pitch; int i_lines; int p_pixels; } ;
struct TYPE_11__ {int i_pitch; int i_lines; int p_pixels; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_6__* FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

picture_t *FUNC_3( const video_format_t *VAR_1, const picture_resource_t *VAR_2 )
{
    FUNC_0(VAR_2 != ((void*)0));

    picture_priv_t *VAR_3 = FUNC_1(VAR_1, 0);
    if (FUNC_2(VAR_3 == ((void*)0)))
        return ((void*)0);

    picture_t *VAR_4 = &VAR_3->picture;

    VAR_4->p_sys = VAR_2->p_sys;

    if( VAR_2->pf_destroy != ((void*)0) )
        VAR_3->gc.destroy = VAR_2->pf_destroy;
    else
        VAR_3->gc.destroy = VAR_0;

    for( int VAR_5 = 0; VAR_5 < VAR_4->i_planes; VAR_5++ )
    {
        VAR_4->p[VAR_5].p_pixels = VAR_2->p[VAR_5].p_pixels;
        VAR_4->p[VAR_5].i_lines = VAR_2->p[VAR_5].i_lines;
        VAR_4->p[VAR_5].i_pitch = VAR_2->p[VAR_5].i_pitch;
    }

    return VAR_4;
}
