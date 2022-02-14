
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text_style_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*) ;

text_style_t *FUNC_2( const text_style_t *VAR_0 )
{
    if( !VAR_0 )
        return ((void*)0);

    text_style_t *VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );
    if( VAR_1 )
        FUNC_1( VAR_1, VAR_0 );
    return VAR_1;
}
