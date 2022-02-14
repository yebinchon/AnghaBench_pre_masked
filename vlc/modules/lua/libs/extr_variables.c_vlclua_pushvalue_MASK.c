
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_float; int psz_string; int i_int; int b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int lua_Integer ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_3, int VAR_4, vlc_value_t VAR_5 )
{
    switch( VAR_4 & VAR_2 )
    {
        case 132:
            FUNC_0( VAR_3, VAR_5.b_bool );
            break;
        case 130:
            if( sizeof( lua_Integer ) < sizeof( VAR_5.i_int ) &&
                ( VAR_5.i_int < VAR_1 || VAR_0 < VAR_5.i_int ) )
                FUNC_2( VAR_3, (lua_Number)VAR_5.i_int );
            else
                FUNC_1( VAR_3, VAR_5.i_int );
            break;
        case 129:
            FUNC_3( VAR_3, VAR_5.psz_string );
            break;
        case 131:
            FUNC_2( VAR_3, VAR_5.f_float );
            break;
        case 133:
            FUNC_4( VAR_3 );
            break;
        case 128:
        default:
            FUNC_4( VAR_3 );
    }
    return 1;
}
