
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_string; void* f_float; void* i_int; int b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int lua_State ;
typedef void* lua_Number ;
typedef int lua_Integer ;
typedef void* int64_t ;


 void* VAR_0 ;
 void* VAR_1 ;


 int VAR_2 ;




 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_3, int VAR_4, vlc_value_t *VAR_5 )
{
    switch( VAR_4 & VAR_2 )
    {
        case 128:
            break;
        case 132:
            VAR_5->b_bool = FUNC_1( VAR_3, -1 );
            break;
        case 130:






            if( sizeof( lua_Integer ) < sizeof( VAR_5->i_int ) )
            {
                lua_Number VAR_6 = FUNC_3( VAR_3, -1 );


                VAR_5->i_int = (int64_t)FUNC_0( VAR_6 );
                if( VAR_1 < VAR_5->i_int && VAR_5->i_int < VAR_0 )
                    VAR_5->i_int = FUNC_2( VAR_3, -1 );
            }
            else
                VAR_5->i_int = FUNC_2( VAR_3, -1 );
            break;
        case 129:
            VAR_5->psz_string = (char*)FUNC_4( VAR_3, -1 );
            break;
        case 131:
            VAR_5->f_float = FUNC_3( VAR_3, -1 );
            break;
        case 133:
            FUNC_5( VAR_3 );
            break;
        default:
            FUNC_5( VAR_3 );
    }
    return 1;
}
