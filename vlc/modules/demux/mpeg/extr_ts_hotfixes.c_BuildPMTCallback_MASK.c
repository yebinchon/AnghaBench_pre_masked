
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p_pmt; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ ts_pid_t ;
struct TYPE_10__ {struct TYPE_10__* p_next; int p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_7__ {int handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( void *VAR_1, block_t *VAR_2 )
{
    ts_pid_t *VAR_3 = (ts_pid_t *) VAR_1;
    FUNC_0(VAR_3->type == VAR_0);
    while( VAR_2 )
    {
        FUNC_2( VAR_3->u.p_pmt->handle,
                            VAR_2->p_buffer );
        block_t *VAR_4 = VAR_2->p_next;
        FUNC_1( VAR_2 );
        VAR_2 = VAR_4;
    }
}
