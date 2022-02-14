
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef int uint32_t ;
struct TYPE_8__ {int i_handler; scalar_t__ p_father; struct TYPE_8__* p_next; struct TYPE_8__* p_first; } ;
typedef TYPE_1__ MP4_Box_t ;





 TYPE_1__* FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_1__*) ;

void FUNC_4( vlc_meta_t *VAR_0, MP4_Box_t *VAR_1 )
{
    uint32_t VAR_2 = 0;
    if ( VAR_1->p_father )
        VAR_2 = VAR_1->i_handler;

    for( MP4_Box_t *VAR_3 = VAR_1->p_first; VAR_3; VAR_3 = VAR_3->p_next )
    {
        switch( VAR_2 )
        {
            case 128:
            {
                MP4_Box_t *VAR_4 = FUNC_0( VAR_1->p_father, "keys" );
                FUNC_3( VAR_0, VAR_3, VAR_4 );
                break;
            }

            case 130:
                FUNC_1( VAR_0, VAR_3 );
                break;

            case 129:
            default:
                FUNC_2( VAR_0, VAR_3 );
                break;
        }
    }
}
