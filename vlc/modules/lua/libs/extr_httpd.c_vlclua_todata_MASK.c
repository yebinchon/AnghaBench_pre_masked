
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int * FUNC_3 (size_t,int) ;

__attribute__((used)) static uint8_t *FUNC_4( lua_State *VAR_0, int VAR_1, int *VAR_2 )
{
    size_t VAR_3;
    const char *VAR_4 = FUNC_1( VAR_0, VAR_1, &VAR_3 );
    uint8_t *VAR_5 = FUNC_3( VAR_3, sizeof(uint8_t) );
    *VAR_2 = (int)VAR_3;
    if( !VAR_5 )
    {
        FUNC_0( VAR_0, "Error while allocating buffer." );
        return ((void*)0);
    }
    FUNC_2( VAR_5, VAR_4, VAR_3 );
    return VAR_5;
}
