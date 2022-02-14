
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * p_psip; int * p_si; int * p_stream; int * p_pmt; int * p_pat; } ;
struct TYPE_14__ {int i_refcount; scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ ts_pid_t ;
struct TYPE_15__ {int p_sys; } ;
typedef TYPE_3__ demux_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;







 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;

void FUNC_8( demux_t *VAR_0, ts_pid_t *VAR_1 )
{
    if( VAR_1->i_refcount == 0 )
    {
        FUNC_2( VAR_1->type == 133 );
        return;
    }
    else if( VAR_1->i_refcount == 1 )
    {
        VAR_1->i_refcount--;
    }
    else if( VAR_1->i_refcount > 1 )
    {
        FUNC_2( VAR_1->type != 133 && VAR_1->type != 132 );
        VAR_1->i_refcount--;
    }

    if( VAR_1->i_refcount == 0 )
    {
        switch( VAR_1->type )
        {
        default:
        case 133:
            FUNC_2( VAR_1->type != 133 );
            break;

        case 134:
            break;

        case 132:
            FUNC_3( VAR_0, VAR_1->u.p_pat );
            VAR_1->u.p_pat = ((void*)0);
            break;

        case 131:
            FUNC_4( VAR_0, VAR_1->u.p_pmt );
            VAR_1->u.p_pmt = ((void*)0);
            break;

        case 128:
            FUNC_7( VAR_0, VAR_1->u.p_stream );
            VAR_1->u.p_stream = ((void*)0);
            break;

        case 129:
            FUNC_6( VAR_0, VAR_1->u.p_si );
            VAR_1->u.p_si = ((void*)0);
            break;

        case 130:
            FUNC_5( VAR_0, VAR_1->u.p_psip );
            VAR_1->u.p_psip = ((void*)0);
            break;
        }

        FUNC_1( VAR_0->p_sys, VAR_1, 0 );
        FUNC_0( VAR_1 );
    }
}
