
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int) ;

int FUNC_3( lua_State *VAR_4, int VAR_5 )
{
    FUNC_0( VAR_4, VAR_5 );

    int VAR_6;

    switch( VAR_5 )
    {
        case 128: VAR_6 = 0; break;
        case 133: VAR_6 = VAR_2; break;
        case 129: VAR_6 = VAR_3; break;
        case 135: VAR_6 = VAR_0; break;
        case 132: VAR_6 = VAR_1; break;
        case 131: VAR_6 = VAR_1; break;
        case 130: VAR_6 = VAR_1; break;
        case 134:
            FUNC_1( VAR_4, "generic error" );
            return 2;
        default:
            FUNC_1( VAR_4, "unknown error" );
            return 2;
    }

    FUNC_1( VAR_4, FUNC_2(VAR_6) );
    return 2;
}
