
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * psz_text; struct TYPE_10__* p_next; } ;
typedef TYPE_2__ text_segment_t ;
struct TYPE_11__ {scalar_t__ i_start; scalar_t__ i_stop; int b_ephemer; TYPE_4__* p_region; } ;
typedef TYPE_3__ subpicture_t ;
struct TYPE_9__ {scalar_t__ i_chroma; } ;
struct TYPE_12__ {TYPE_2__* p_text; TYPE_1__ fmt; } ;
typedef TYPE_4__ subpicture_region_t ;
typedef int encoder_t ;
struct TYPE_13__ {size_t i_buffer; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_length; scalar_t__* p_buffer; } ;
typedef TYPE_5__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__*,int *,size_t) ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static block_t *FUNC_4( encoder_t *VAR_1, subpicture_t *VAR_2 )
{
    FUNC_0( VAR_1 );

    subpicture_region_t *VAR_3;
    block_t *VAR_4;
    size_t VAR_5 = 0;

    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    VAR_3 = VAR_2->p_region;
    if( ( VAR_3 == ((void*)0) )
     || ( VAR_3->fmt.i_chroma != VAR_0 )
     || ( VAR_3->p_text == ((void*)0) )
     || ( VAR_3->p_text->psz_text == ((void*)0)) )
        return ((void*)0);


    for( const text_segment_t *VAR_6 = VAR_3->p_text;
                               VAR_6; VAR_6 = VAR_6->p_next )
    {
        if( VAR_6->psz_text == ((void*)0) )
            continue;
        VAR_5 += FUNC_3( VAR_6->psz_text );
    }

    VAR_4 = FUNC_1( VAR_5 + 1 );
    if( !VAR_4 )
        return ((void*)0);

    VAR_4->i_buffer = 0;
    for( const text_segment_t *VAR_7 = VAR_3->p_text;
                               VAR_7; VAR_7 = VAR_7->p_next )
    {
        if( VAR_7->psz_text == ((void*)0) )
            continue;
        VAR_5 = FUNC_3( VAR_7->psz_text );
        FUNC_2( &VAR_4->p_buffer[VAR_4->i_buffer],
                VAR_7->psz_text, VAR_5 );
        VAR_4->i_buffer += VAR_5;
    }
    VAR_4->p_buffer[VAR_4->i_buffer] = 0;

    VAR_4->i_pts = VAR_4->i_dts = VAR_2->i_start;
    if( !VAR_2->b_ephemer && ( VAR_2->i_stop > VAR_2->i_start ) )
        VAR_4->i_length = VAR_2->i_stop - VAR_2->i_start;

    return VAR_4;
}
