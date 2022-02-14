
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int p_laid; int p_style; int i_count; int p_uchars; } ;
typedef TYPE_1__ ruby_block_t ;
typedef int paragraph_t ;
struct TYPE_11__ {int yMin; int yMax; } ;
struct TYPE_13__ {int i_height; int i_base_line; TYPE_10__ bbox; struct TYPE_13__* p_next; } ;
typedef TYPE_2__ line_desc_t ;
struct TYPE_14__ {size_t i_count; char* p_uchars; unsigned int i_max_height; int b_balanced; int b_grid; int i_max_width; TYPE_1__** pp_ruby; int * pp_styles; } ;
typedef TYPE_3__ layout_text_block_t ;
typedef int filter_t ;
typedef int FT_BBox ;


 int FUNC_0 (int *,TYPE_10__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t,char*,int *,TYPE_1__**,int,unsigned int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,unsigned int,int ,int ,TYPE_2__**) ;
 int FUNC_7 (int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_8( filter_t *VAR_3,
                     const layout_text_block_t *VAR_4,
                     line_desc_t **VAR_5, FT_BBox *VAR_6,
                     int *VAR_7 )
{
    line_desc_t *VAR_8 = 0;
    line_desc_t **VAR_9 = &VAR_8;
    size_t VAR_10 = 0;
    unsigned VAR_11 = 0;
    unsigned VAR_12 = 0;
    int VAR_13 = 0;


    if( VAR_4->pp_ruby )
    {
        ruby_block_t *VAR_14 = ((void*)0);
        for( size_t VAR_15=0; VAR_15<VAR_4->i_count; VAR_15++ )
        {
            if( VAR_4->pp_ruby[VAR_15] == VAR_14 )
                continue;
            VAR_14 = VAR_4->pp_ruby[VAR_15];
            if( VAR_14 )
                FUNC_7( VAR_3, VAR_14->p_uchars, VAR_14->i_count,
                                VAR_14->p_style, &VAR_14->p_laid );
        }
    }


    for( size_t VAR_16 = 0; VAR_16 <= VAR_4->i_count; ++VAR_16 )
    {
        if( VAR_16 == VAR_4->i_count || VAR_4->p_uchars[ VAR_16 ] == '\n' )
        {
            if( VAR_10 == VAR_16 )
            {
                VAR_10 = VAR_16 + 1;
                continue;
            }

            paragraph_t *VAR_17 =
                    FUNC_2( VAR_3,
                                    VAR_16 - VAR_10,
                                    &VAR_4->p_uchars[VAR_10],
                                    &VAR_4->pp_styles[VAR_10],
                                    VAR_4->pp_ruby ?
                                    &VAR_4->pp_ruby[VAR_10] : ((void*)0),
                                    20, &VAR_12 );
            if( !VAR_17 )
            {
                if( VAR_8 ) FUNC_4( VAR_8 );
                return VAR_1;
            }

            if( FUNC_6( VAR_3, VAR_17,
                                 VAR_4->i_max_width,
                                 VAR_12,
                                 VAR_4->b_grid, VAR_4->b_balanced,
                                 VAR_9 ) )
            {
                FUNC_5( VAR_17 );
                if( VAR_8 ) FUNC_4( VAR_8 );
                return VAR_0;
            }

            FUNC_5( VAR_17 );

            for( ; *VAR_9; VAR_9 = &(*VAR_9)->p_next )
            {


                if( VAR_4->i_max_height > 0 && VAR_11 > VAR_4->i_max_height )
                {
                    VAR_11 = VAR_4->i_max_height + 1;
                    line_desc_t *VAR_18 = *VAR_9;
                    while( VAR_18 )
                    {
                        line_desc_t *VAR_19 = VAR_18->p_next;
                        FUNC_3( VAR_18 );
                        VAR_18 = VAR_19;
                    }
                    *VAR_9 = ((void*)0);
                    VAR_16 = VAR_4->i_count + 1;
                    break;
                }
                else if( (*VAR_9)->i_height > VAR_13 )
                {
                    VAR_13 = (*VAR_9)->i_height;
                }
                VAR_11 += (*VAR_9)->i_height;
            }
            VAR_10 = VAR_16 + 1;
        }
    }

    int VAR_20 = 0;
    FT_BBox VAR_21;
    FUNC_1( &VAR_21 );

    for( line_desc_t *VAR_22 = VAR_8; VAR_22; VAR_22 = VAR_22->p_next )
    {
        VAR_22->i_base_line = VAR_20;
        VAR_22->bbox.yMin -= VAR_20;
        VAR_22->bbox.yMax -= VAR_20;
        FUNC_0( &VAR_21, &VAR_22->bbox );

        VAR_20 += VAR_13;
    }

    *VAR_7 = VAR_13;
    *VAR_5 = VAR_8;
    *VAR_6 = VAR_21;
    return VAR_2;
}
