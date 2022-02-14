
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,char const**) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0 )
{
    xml_reader_t *VAR_1 = *(xml_reader_t**)FUNC_0( VAR_0, 1, "xml_reader" );
    const char *VAR_2;
    const char *VAR_3 = FUNC_2( VAR_1, &VAR_2 );
    if( !VAR_3 )
        return 0;

    FUNC_1( VAR_0, VAR_3 );
    FUNC_1( VAR_0, VAR_2 );
    return 2;
}
