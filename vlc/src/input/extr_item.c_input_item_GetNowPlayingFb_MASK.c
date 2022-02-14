
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_item_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

char *FUNC_3( input_item_t *VAR_2 )
{
    char *VAR_3 = FUNC_1( VAR_2, VAR_1 );
    if( !VAR_3 || FUNC_2( VAR_3 ) == 0 )
    {
        FUNC_0( VAR_3 );
        return FUNC_1( VAR_2, VAR_0 );
    }

    return VAR_3;
}
