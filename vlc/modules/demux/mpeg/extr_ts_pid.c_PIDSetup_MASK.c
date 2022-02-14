
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ts_pid_type_t ;
struct TYPE_6__ {int p_psip; int p_si; int p_stream; int p_pmt; int p_pat; } ;
struct TYPE_7__ {int i_pid; scalar_t__ i_refcount; int type; TYPE_1__ u; } ;
typedef TYPE_2__ ts_pid_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_2__*) ;







 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

bool FUNC_8( demux_t *VAR_1, ts_pid_type_t VAR_2, ts_pid_t *VAR_3, ts_pid_t *VAR_4 )
{
    if( VAR_3 == VAR_4 || VAR_3->i_pid == 0x1FFF )
        return 0;

    if( VAR_3->i_refcount == 0 )
    {
        FUNC_1( VAR_3->type == 133 );
        switch( VAR_2 )
        {
        case 133:
            FUNC_0( VAR_3 );
            return 1;

        case 134:
            return 1;

        case 132:
            FUNC_0( VAR_3 );
            VAR_3->u.p_pat = FUNC_3( VAR_1 );
            if( !VAR_3->u.p_pat )
                return 0;
            break;

        case 131:
            FUNC_0( VAR_3 );
            VAR_3->u.p_pmt = FUNC_4( VAR_1 );
            if( !VAR_3->u.p_pmt )
                return 0;
            break;

        case 128:
            FUNC_0( VAR_3 );
            VAR_3->u.p_stream = FUNC_7( VAR_1, VAR_4->u.p_pmt );
            if( !VAR_3->u.p_stream )
                return 0;
            break;

        case 129:
            FUNC_0( VAR_3 );
            VAR_3->u.p_si = FUNC_6( VAR_1 );
            if( !VAR_3->u.p_si )
                return 0;
            break;

        case 130:
            FUNC_0( VAR_3 );
            VAR_3->u.p_psip = FUNC_5( VAR_1 );
            if( !VAR_3->u.p_psip )
                return 0;
            break;

        default:
            FUNC_1(0);
            break;
        }

        VAR_3->i_refcount++;
        VAR_3->type = VAR_2;
    }
    else if( VAR_3->type == VAR_2 && VAR_3->i_refcount < VAR_0 )
    {
        VAR_3->i_refcount++;
    }
    else
    {
        if( VAR_3->type != 133 )
            FUNC_2( VAR_1, "Tried to redeclare pid %d with another type", VAR_3->i_pid );
        return 0;
    }

    return 1;
}
