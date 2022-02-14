
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_type; } ;
typedef TYPE_1__ ts_cmd_t ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4( ts_cmd_t *VAR_0 )
{
    switch( VAR_0->i_type )
    {
    case 131:
        FUNC_0( VAR_0 );
        break;
    case 128:
        FUNC_2( VAR_0 );
        break;
    case 130:
        FUNC_1( VAR_0 );
        break;
    case 129:
        break;
    default:
        FUNC_3();
        break;
    }
}
