
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uni_char_t ;
typedef int text_style_t ;
typedef int ruby_block_t ;
typedef int paragraph_t ;
typedef int filter_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int,int,unsigned int*) ;
 int * FUNC_4 (int *,int,int const*,int **,int **,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static paragraph_t * FUNC_9( filter_t *VAR_0,
                                     int VAR_1,
                                     const uni_char_t *VAR_2,
                                     text_style_t **VAR_3,
                                     ruby_block_t **VAR_4,
                                     int VAR_5,
                                     unsigned *VAR_6 )
{
    paragraph_t *VAR_7 = FUNC_4( VAR_0, VAR_1,
                                VAR_2,
                                VAR_3,
                                VAR_4,
                                VAR_5 );
    if( !VAR_7 )
        return ((void*)0);






    if( FUNC_2( VAR_0, VAR_7 ) )
        goto error;
    if( FUNC_3( VAR_0, VAR_7, 0, 1, VAR_6 ) )
        goto error;


    return VAR_7;

error:
    if( VAR_7 )
        FUNC_1( VAR_7 );

    return ((void*)0);
}
