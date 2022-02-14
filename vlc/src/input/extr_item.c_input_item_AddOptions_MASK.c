
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const* const,unsigned int) ;

int FUNC_1( input_item_t *VAR_1, int VAR_2,
                           const char *const *VAR_3,
                           unsigned VAR_4 )
{
    int VAR_5 = VAR_0;
    for( int VAR_6 = 0; VAR_6 < VAR_2 && VAR_5 == VAR_0; VAR_6++ )
        VAR_5 = FUNC_0( VAR_1, VAR_3[VAR_6], VAR_4 );
    return VAR_5;
}
