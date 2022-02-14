
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_item_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2( input_item_t *VAR_0, char *(*VAR_1)(input_item_t *) )
{
    char *VAR_2 = VAR_1( VAR_0 );
    if( VAR_2 == ((void*)0) )
        return ((void*)0);
    char *VAR_3 = FUNC_1( VAR_2 );
    FUNC_0( VAR_2 );
    return VAR_3;
}
