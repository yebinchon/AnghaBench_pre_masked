
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


struct TYPE_13__ {double i_value; int unit; } ;
struct TYPE_12__ {void* unit; } ;
struct TYPE_11__ {void* unit; } ;
struct TYPE_10__ {void* unit; } ;
struct TYPE_14__ {void* unit; } ;
struct TYPE_15__ {int font_style; TYPE_4__ font_size; TYPE_3__ origin_v; TYPE_2__ origin_h; TYPE_1__ extent_v; TYPE_5__ extent_h; } ;
typedef TYPE_6__ ttml_style_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ttml_style_t * FUNC_4( )
{
    ttml_style_t *VAR_3 = FUNC_0( 1, sizeof( ttml_style_t ) );
    if( FUNC_3( !VAR_3 ) )
        return ((void*)0);

    VAR_3->extent_h.unit = VAR_2;
    VAR_3->extent_v.unit = VAR_2;
    VAR_3->origin_h.unit = VAR_2;
    VAR_3->origin_v.unit = VAR_2;
    VAR_3->font_size.i_value = 1.0;
    VAR_3->font_size.unit = VAR_1;
    VAR_3->font_style = FUNC_2( VAR_0 );
    if( FUNC_3( !VAR_3->font_style ) )
    {
        FUNC_1( VAR_3 );
        return ((void*)0);
    }
    return VAR_3;
}
