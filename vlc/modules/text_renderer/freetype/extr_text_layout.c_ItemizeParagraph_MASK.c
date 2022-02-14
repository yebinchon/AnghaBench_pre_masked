
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int text_style_t ;
struct TYPE_5__ {scalar_t__ i_size; scalar_t__* p_scripts; scalar_t__* p_levels; int ** pp_styles; } ;
typedef TYPE_1__ paragraph_t ;
typedef scalar_t__ hb_script_t ;
typedef int filter_t ;
typedef scalar_t__ FriBidiLevel ;


 int FUNC_0 (int *,TYPE_1__*,int,int,int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int,int) ;
 int FUNC_2 (int *,int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4( filter_t *VAR_2, paragraph_t *VAR_3 )
{
    if( VAR_3->i_size <= 0 )
    {
        FUNC_3( VAR_2,
                 "ItemizeParagraph() invalid parameters. Paragraph size: %d",
                 VAR_3->i_size );
        return VAR_0;
    }

    int VAR_4 = 0;
    const text_style_t *VAR_5 = VAR_3->pp_styles[ 0 ];






    for( int VAR_6 = 0; VAR_6 <= VAR_3->i_size; ++VAR_6 )
    {
        if( VAR_6 == VAR_3->i_size




            || !FUNC_2( VAR_2, VAR_5, VAR_3->pp_styles[ VAR_6 ] ) )
        {
            int VAR_7;



            VAR_7 = FUNC_0( VAR_2, VAR_3, VAR_4, VAR_6, ((void*)0), ((void*)0) );

            if( VAR_7 )
                return VAR_7;

            if( VAR_6 < VAR_3->i_size )
            {
                VAR_4 = VAR_6;
                VAR_5 = VAR_3->pp_styles[ VAR_6 ];




            }
        }
    }
    return VAR_1;
}
