
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ i_chroma; int * p_palette; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_11__ {int den; int num; } ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_13__ {int i_alpha; int b_balanced_text; TYPE_3__ fmt; TYPE_2__ zoom_v; TYPE_1__ zoom_h; } ;
typedef TYPE_4__ subpicture_region_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__ const*) ;

subpicture_region_t * FUNC_3( const video_format_t *VAR_1 )
{
    subpicture_region_t *VAR_2 = FUNC_0( 1, sizeof(*VAR_2 ) );
    if( !VAR_2 )
        return ((void*)0);

    VAR_2->zoom_h.den = VAR_2->zoom_h.num = 1;
    VAR_2->zoom_v.den = VAR_2->zoom_v.num = 1;

    if ( VAR_1->i_chroma == VAR_0 )
    {
        FUNC_2( &VAR_2->fmt, VAR_1 );

        if( VAR_2->fmt.p_palette == ((void*)0) )
        {
            VAR_2->fmt.p_palette = FUNC_0( 1, sizeof(*VAR_2->fmt.p_palette) );
            if( VAR_2->fmt.p_palette == ((void*)0) )
            {
                FUNC_1( VAR_2 );
                return ((void*)0);
            }
        }
    }
    else
    {
        VAR_2->fmt = *VAR_1;
        VAR_2->fmt.p_palette = ((void*)0);
    }

    VAR_2->i_alpha = 0xff;
    VAR_2->b_balanced_text = 1;

    return VAR_2;
}
