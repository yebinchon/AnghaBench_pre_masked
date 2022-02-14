
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {int i_cc; int i_pid; } ;
typedef TYPE_1__ ts_pid_t ;
struct TYPE_13__ {int i_last_pid; size_t i_all; size_t i_all_alloc; TYPE_1__* p_last; TYPE_1__** pp_all; TYPE_1__ dummy; TYPE_1__ base_si; TYPE_1__ pat; } ;
typedef TYPE_2__ ts_pid_list_t ;
struct searchkey {int i_pid; TYPE_1__** pp_last; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__** FUNC_1 (struct searchkey*,TYPE_1__**,size_t,int,int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**,size_t) ;
 TYPE_1__** FUNC_4 (TYPE_1__**,int) ;
 int VAR_1 ;

ts_pid_t * FUNC_5( ts_pid_list_t *VAR_2, uint16_t VAR_3 )
{
    switch( VAR_3 )
    {
        case 0:
            return &VAR_2->pat;
        case 0x1FFB:
            return &VAR_2->base_si;
        case 0x1FFF:
            return &VAR_2->dummy;
        default:
            if( VAR_2->i_last_pid == VAR_3 )
                return VAR_2->p_last;
        break;
    }

    size_t VAR_4 = 0;
    ts_pid_t *VAR_5 = ((void*)0);

    if( VAR_2->pp_all )
    {
        struct searchkey VAR_6;
        VAR_6.i_pid = VAR_3;
        VAR_6.pp_last = ((void*)0);

        ts_pid_t **VAR_7 = FUNC_1( &VAR_6, VAR_2->pp_all, VAR_2->i_all,
                                      sizeof(ts_pid_t *), VAR_1 );
        if ( VAR_7 )
            VAR_5 = *VAR_7;
        else
            VAR_4 = (VAR_6.pp_last - VAR_2->pp_all);
    }

    if( VAR_5 == ((void*)0) )
    {
        if( VAR_2->i_all >= VAR_2->i_all_alloc )
        {
            ts_pid_t **VAR_8 = FUNC_4( VAR_2->pp_all,
                                            (VAR_2->i_all_alloc + VAR_0) * sizeof(ts_pid_t *) );
            if( !VAR_8 )
            {
                FUNC_0();

            }
            VAR_2->pp_all = VAR_8;
            VAR_2->i_all_alloc += VAR_0;
        }

        VAR_5 = FUNC_2( 1, sizeof(*VAR_5) );
        if( !VAR_5 )
        {
            FUNC_0();

        }

        VAR_5->i_cc = 0xff;
        VAR_5->i_pid = VAR_3;


        if( VAR_2->i_all )
        {
            if( VAR_2->pp_all[VAR_4]->i_pid < VAR_3 )
                VAR_4++;

            FUNC_3( &VAR_2->pp_all[VAR_4 + 1],
                    &VAR_2->pp_all[VAR_4],
                    (VAR_2->i_all - VAR_4) * sizeof(ts_pid_t *) );
        }

        VAR_2->pp_all[VAR_4] = VAR_5;
        VAR_2->i_all++;

    }

    VAR_2->p_last = VAR_5;
    VAR_2->i_last_pid = VAR_3;

    return VAR_5;
}
