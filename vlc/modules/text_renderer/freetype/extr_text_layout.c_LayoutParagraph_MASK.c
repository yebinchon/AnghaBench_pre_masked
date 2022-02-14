
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* p_style; } ;
typedef TYPE_3__ run_desc_t ;
struct TYPE_17__ {TYPE_1__* p_laid; } ;
typedef TYPE_4__ const ruby_block_t ;
struct TYPE_18__ {scalar_t__ i_size; scalar_t__ i_runs_count; size_t* pi_run_ids; TYPE_7__* p_glyph_bitmaps; TYPE_3__* p_runs; TYPE_4__ const** pp_ruby; } ;
typedef TYPE_5__ paragraph_t ;
struct TYPE_19__ {struct TYPE_19__* p_next; } ;
typedef TYPE_6__ line_desc_t ;
typedef int filter_t ;
struct TYPE_20__ {int i_x_advance; } ;
struct TYPE_15__ {scalar_t__ e_wrapinfo; } ;
struct TYPE_14__ {int i_width; } ;
typedef unsigned int FT_Pos ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*,int,int,int,TYPE_6__**) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int FUNC_6( filter_t *VAR_4, paragraph_t *VAR_5,
                            unsigned VAR_6, unsigned VAR_7,
                            bool VAR_8, bool VAR_9,
                            line_desc_t **VAR_10 )
{
    if( VAR_5->i_size <= 0 || VAR_5->i_runs_count <= 0 )
    {
        FUNC_5( VAR_4, "LayoutParagraph() invalid parameters. "
                 "Paragraph size: %d. Runs count %d",
                 VAR_5->i_size, VAR_5->i_runs_count );
        return VAR_2;
    }





    if( VAR_6 <= VAR_7 )
    {
        FUNC_5( VAR_4, "LayoutParagraph(): Invalid max width" );
        return VAR_2;
    }

    VAR_6 <<= 6;
    VAR_7 <<= 6;

    int VAR_11 = 0;
    FT_Pos VAR_12 = 0;
    FT_Pos VAR_13 = VAR_6;
    FT_Pos VAR_14 = 0;
    FT_Pos VAR_15 = 0;
    int VAR_16 = -1;
    line_desc_t *VAR_17 = ((void*)0);
    line_desc_t **VAR_18 = &VAR_17;

    for( int VAR_19 = 0; VAR_19 < VAR_5->i_size; ++VAR_19 )
    {
        if( !FUNC_1( VAR_5, VAR_19 ) || VAR_19 != VAR_16 + 1 )
            VAR_14 += VAR_5->p_glyph_bitmaps[ VAR_19 ].i_x_advance;
        else
            VAR_16 = VAR_19;
    }
    VAR_16 = -1;

    if( VAR_14 == 0 )
    {
        for( int VAR_20=0; VAR_20 < VAR_5->i_size; ++VAR_20 )
            FUNC_3( &VAR_5->p_glyph_bitmaps[ VAR_20 ] );
        return VAR_3;
    }

    if( VAR_9 )
    {
        int VAR_21 = VAR_14 / (VAR_6 - VAR_7) + 1;
        VAR_13 = VAR_14 / VAR_21;
    }

    for( int VAR_22 = 0; VAR_22 <= VAR_5->i_size; ++VAR_22 )
    {
        if( VAR_22 == VAR_5->i_size )
        {
            if( VAR_11 < VAR_22 )
                if( FUNC_2( VAR_4, VAR_5,
                                VAR_11, VAR_22 - 1, VAR_8, VAR_18 ) )
                    goto error;

            break;
        }

        if( VAR_5->pp_ruby &&
            VAR_5->pp_ruby[VAR_22] &&
            VAR_5->pp_ruby[VAR_22]->p_laid )
        {

            const ruby_block_t *VAR_23 = VAR_5->pp_ruby[VAR_22];
            int VAR_24 = 0;
            int VAR_25 = VAR_23->p_laid->i_width;
            while( VAR_22 + 1 < VAR_5->i_size &&
                   VAR_23 == VAR_5->pp_ruby[VAR_22 + 1] )
                VAR_24 += VAR_5->p_glyph_bitmaps[ VAR_22++ ].i_x_advance;

            VAR_12 += (VAR_24 < VAR_25) ? VAR_25 : VAR_24;
            continue;
        }

        if( FUNC_1( VAR_5, VAR_22 ) )
        {
            if( VAR_11 == VAR_22 )
            {





                FUNC_3( &VAR_5->p_glyph_bitmaps[ VAR_22 ] );
                VAR_11 = VAR_22 + 1;
                continue;
            }

            if( VAR_16 == VAR_22 - 1 )
            {
                VAR_16 = VAR_22;
                continue;
            }

            VAR_16 = VAR_22;
            VAR_15 = VAR_12;
        }

        const run_desc_t *VAR_26 = &VAR_5->p_runs[VAR_5->pi_run_ids[VAR_22]];
        const int VAR_27 = VAR_5->p_glyph_bitmaps[ VAR_22 ].i_x_advance;

        if( ( VAR_15 + VAR_27 > VAR_13 &&
              VAR_26->p_style->e_wrapinfo == VAR_0 )
            || VAR_12 + VAR_27 > VAR_6 )
        {
            if( VAR_11 == VAR_22 )
            {


                FUNC_4( VAR_4, "LayoutParagraph(): First glyph width in line exceeds maximum, skipping" );
                for( ; VAR_22 < VAR_5->i_size; ++VAR_22 )
                    FUNC_3( &VAR_5->p_glyph_bitmaps[ VAR_22 ] );
                return VAR_3;
            }

            int VAR_28;
            if( VAR_16 > VAR_11 && VAR_26->p_style->e_wrapinfo == VAR_0 )
                VAR_28 = VAR_16;
            else
                VAR_28 = VAR_22;

            if( FUNC_2( VAR_4, VAR_5, VAR_11,
                            VAR_28 - 1, VAR_8, VAR_18 ) )
                goto error;



            if( VAR_26->p_style->e_wrapinfo == VAR_1 )
            {
                for( ; VAR_22 < VAR_5->i_size; ++VAR_22 )
                    FUNC_3( &VAR_5->p_glyph_bitmaps[ VAR_22 ] );
                break;
            }

            VAR_18 = &( *VAR_18 )->p_next;



            if( VAR_28 == VAR_16 )
            {
                VAR_12 = VAR_12 - VAR_15;
                if( VAR_28 + 1 < VAR_5->i_size )
                    VAR_11 = VAR_28 + 1;
                else
                    VAR_11 = VAR_28;
            }
            else
            {
                VAR_12 = 0;
                VAR_11 = VAR_28;
            }
            VAR_15 = 0;
        }
        VAR_12 += VAR_27;
    }

    *VAR_10 = VAR_17;
    return VAR_3;

error:
    for( int VAR_29 = VAR_11; VAR_29 < VAR_5->i_size; ++VAR_29 )
        FUNC_3( &VAR_5->p_glyph_bitmaps[ VAR_29 ] );
    if( VAR_17 )
        FUNC_0( VAR_17 );
    return VAR_2;
}
