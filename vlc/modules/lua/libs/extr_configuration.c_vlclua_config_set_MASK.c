
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;






 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_7( VAR_0, 1 );
    switch( FUNC_0( VAR_1 ) )
    {
        case 128:
            FUNC_3( VAR_1, FUNC_7( VAR_0, 2 ) );
            break;

        case 129:
            FUNC_2( VAR_1, FUNC_5( VAR_0, 2 ) );
            break;

        case 131:
            FUNC_2( VAR_1, FUNC_4( VAR_0, 2 ) );
            break;

        case 130:
            FUNC_1( VAR_1, FUNC_6( VAR_0, 2 ) );
            break;

        default:
            return FUNC_8( VAR_0 );
    }
    return 0;
}
