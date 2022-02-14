
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {TYPE_1__* p_ctx; } ;
typedef TYPE_2__ ts_psip_t ;
typedef int ts_pid_t ;
typedef int ts_pid_list_t ;
struct TYPE_9__ {scalar_t__ i_table_type; int i_table_type_pid; struct TYPE_9__* p_next; } ;
typedef TYPE_3__ dvbpsi_atsc_mgt_table_t ;
struct TYPE_10__ {TYPE_3__* p_first_table; } ;
typedef TYPE_4__ dvbpsi_atsc_mgt_t ;
struct TYPE_7__ {scalar_t__ i_tabletype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static ts_pid_t *FUNC_2( ts_pid_list_t *VAR_2, const dvbpsi_atsc_mgt_t *VAR_3, ts_psip_t *VAR_4 )
{
    uint16_t VAR_5;
    FUNC_0( VAR_4->p_ctx->i_tabletype );
    if( VAR_4->p_ctx->i_tabletype >= VAR_1 )
        VAR_5 = VAR_4->p_ctx->i_tabletype - VAR_1 + VAR_0;
    else
        VAR_5 = VAR_4->p_ctx->i_tabletype - VAR_0 + VAR_1;

    for( const dvbpsi_atsc_mgt_table_t *VAR_6 = VAR_3->p_first_table;
                                        VAR_6; VAR_6 = VAR_6->p_next )
    {
        if( VAR_6->i_table_type == VAR_5 )
            return FUNC_1( VAR_2, VAR_6->i_table_type_pid );
    }
    return ((void*)0);
}
