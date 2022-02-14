
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int text_style_t ;
struct TYPE_7__ {int i_start_offset; int i_end_offset; int direction; int script; int const* p_style; int p_face; } ;
typedef TYPE_1__ run_desc_t ;
struct TYPE_8__ {int i_size; int i_runs_count; int i_runs_size; int* p_levels; int* pi_run_ids; int * p_scripts; int const** pp_styles; TYPE_1__* p_runs; } ;
typedef TYPE_2__ paragraph_t ;
typedef int filter_t ;
typedef int FT_Face ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3( filter_t *VAR_5,
                   paragraph_t *VAR_6,
                   int VAR_7,
                   int VAR_8,
                   FT_Face VAR_9,
                   const text_style_t *VAR_10 )
{
    if( VAR_7 >= VAR_8
     || VAR_7 < 0 || VAR_7 >= VAR_6->i_size
     || VAR_8 <= 0 || VAR_8 > VAR_6->i_size )
    {
        FUNC_1( VAR_5,
                 "AddRun() invalid parameters. Paragraph size: %d, "
                 "Start offset: %d, End offset: %d",
                 VAR_6->i_size, VAR_7, VAR_8 );
        return VAR_2;
    }

    if( VAR_6->i_runs_count == VAR_6->i_runs_size )
    {
        run_desc_t *VAR_11 =
            FUNC_2( VAR_6->p_runs,
                     VAR_6->i_runs_size * 2 * sizeof( *VAR_11 ) );
        if( !VAR_11 )
            return VAR_3;

        FUNC_0( VAR_11 + VAR_6->i_runs_size , 0,
                VAR_6->i_runs_size * sizeof( *VAR_11 ) );

        VAR_6->p_runs = VAR_11;
        VAR_6->i_runs_size *= 2;
    }

    int VAR_12 = VAR_6->i_runs_count;
    run_desc_t *VAR_13 = VAR_6->p_runs + VAR_6->i_runs_count++;
    VAR_13->i_start_offset = VAR_7;
    VAR_13->i_end_offset = VAR_8;
    VAR_13->p_face = VAR_9;

    if( VAR_10 )
        VAR_13->p_style = VAR_10;
    else
        VAR_13->p_style = VAR_6->pp_styles[ VAR_7 ];







    for( int VAR_14 = VAR_7; VAR_14 < VAR_8; ++VAR_14 )
        VAR_6->pi_run_ids[ VAR_14 ] = VAR_12;

    return VAR_4;
}
