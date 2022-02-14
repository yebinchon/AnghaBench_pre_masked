
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_10__ {TYPE_2__* p_hdlr; } ;
struct TYPE_11__ {int i_size; int i_handler; scalar_t__ i_type; struct TYPE_11__* p_next; TYPE_3__ data; TYPE_1__* p_father; } ;
struct TYPE_9__ {int i_handler_type; } ;
struct TYPE_8__ {TYPE_4__* p_first; } ;
typedef TYPE_4__ MP4_Box_t ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int *,TYPE_4__*,int *) ;
 int FUNC_1 (int *,TYPE_4__*,int *,int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    if( VAR_2->i_size < 8 || FUNC_3( VAR_1, ((void*)0), 8 ) < 8 )
        return 0;


    if ( !VAR_2->i_handler && VAR_2->p_father )
    {
        const MP4_Box_t *VAR_3 = VAR_2->p_father->p_first;
        while( VAR_3 )
        {
            if ( VAR_3->i_type == VAR_0 && VAR_3->data.p_hdlr )
            {
                VAR_2->i_handler = VAR_3->data.p_hdlr->i_handler_type;
                break;
            }
            VAR_3 = VAR_3->p_next;
        }
    }

    switch( VAR_2->i_handler )
    {
    case 0:
        FUNC_2( VAR_1, "no handler for ilst atom" );
        return 0;
    case 128:
        return FUNC_1( VAR_1, VAR_2, ((void*)0), ((void*)0), 1 );
    case 129:
        return FUNC_0( VAR_1, VAR_2, ((void*)0) );
    default:
        FUNC_2( VAR_1, "Unknown ilst handler type '%4.4s'", (char*)&VAR_2->i_handler );
        return 0;
    }
}
