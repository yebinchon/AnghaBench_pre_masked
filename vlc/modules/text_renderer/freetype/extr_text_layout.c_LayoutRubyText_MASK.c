
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uni_char_t ;
typedef int text_style_t ;
typedef int paragraph_t ;
typedef int line_desc_t ;
typedef int filter_t ;


 int * FUNC_0 (int *,int,int const*,int **,int *,int,unsigned int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int,int,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int **) ;
 int ** FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5( filter_t *VAR_2,
                           const uni_char_t *VAR_3,
                           int VAR_4,
                           text_style_t *VAR_5,
                           line_desc_t **VAR_6 )
{
    unsigned int VAR_7;

    text_style_t **VAR_8 = FUNC_4(sizeof(*VAR_8) * VAR_4);
    for(int VAR_9=0;VAR_9<VAR_4;VAR_9++)
        VAR_8[VAR_9] = VAR_5;

    paragraph_t *VAR_10 = FUNC_0( VAR_2, VAR_4,
                                               VAR_3, VAR_8,
                                               ((void*)0), 1,
                                               &VAR_7 );
    if( !VAR_10 )
    {
        FUNC_3( VAR_8 );
        return VAR_0;
    }

    if( FUNC_2( VAR_2, VAR_10,
                    0, VAR_4 - 1,
                    0, VAR_6 ) )
    {
        FUNC_3( VAR_8 );
        FUNC_1( VAR_10 );
        return VAR_0;
    }

    FUNC_1( VAR_10 );
    FUNC_3( VAR_8 );

    return VAR_1;
}
