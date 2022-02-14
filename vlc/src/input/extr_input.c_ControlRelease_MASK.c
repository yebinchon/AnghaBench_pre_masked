
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_es_id_t ;
struct TYPE_5__ {int ** ids; } ;
struct TYPE_6__ {int p_address; } ;
struct TYPE_7__ {TYPE_1__ list; int * id; TYPE_2__ val; } ;
typedef TYPE_3__ input_control_param_t ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( int VAR_0, const input_control_param_t *VAR_1 )
{
    if( VAR_1 == ((void*)0) )
        return;

    switch( VAR_0 )
    {
    case 133:
        if( VAR_1->val.p_address )
            FUNC_1( VAR_1->val.p_address );
        break;
    case 129:
        if( VAR_1->val.p_address )
            FUNC_3( VAR_1->val.p_address );
        break;
    case 131:
    case 128:
    case 132:
        FUNC_2( VAR_1->id );
        break;
    case 130:
    {
        for (size_t VAR_2 = 0; ; VAR_2++)
        {
            vlc_es_id_t *VAR_3 = VAR_1->list.ids[VAR_2];
            if (VAR_3 == ((void*)0))
                break;
            FUNC_2(VAR_3);
        }
        FUNC_0(VAR_1->list.ids);
        break;
    }

    default:
        break;
    }
}
