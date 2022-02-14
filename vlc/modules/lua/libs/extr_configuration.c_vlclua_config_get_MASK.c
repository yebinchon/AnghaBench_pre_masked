
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;






 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_5( VAR_0, 1 );
    switch( FUNC_3( VAR_1 ) )
    {
        case 128:
        {
            char *VAR_2 = FUNC_2( VAR_1 );
            FUNC_9( VAR_0, VAR_2 );
            FUNC_4( VAR_2 );
            break;
        }

        case 129:
            FUNC_7( VAR_0, FUNC_1( VAR_1 ) );
            break;

        case 131:
            FUNC_6( VAR_0, FUNC_1( VAR_1 ) );
            break;

        case 130:
            FUNC_8( VAR_0, FUNC_0( VAR_1 ) );
            break;

        default:
            return FUNC_10( VAR_0 );

    }
    return 1;
}
