
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int lock_sink; int i_seq_sent_next; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

uint16_t FUNC_2( sout_stream_id_sys_t *VAR_0 )
{

    uint16_t VAR_1;

    FUNC_0( &VAR_0->lock_sink );
    VAR_1 = VAR_0->i_seq_sent_next;
    FUNC_1( &VAR_0->lock_sink );

    return VAR_1;
}
