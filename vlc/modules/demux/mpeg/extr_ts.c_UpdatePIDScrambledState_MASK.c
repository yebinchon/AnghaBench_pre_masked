
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* p_stream; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ u; int i_flags; int i_pid; } ;
typedef TYPE_3__ ts_pid_t ;
struct TYPE_12__ {int out; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_9__ {int p_es; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*,char*,int ,int,int) ;

__attribute__((used)) static void FUNC_3( demux_t *VAR_2, ts_pid_t *VAR_3, bool VAR_4 )
{
    if( !FUNC_0(*VAR_3) == !VAR_4 )
        return;

    FUNC_2( VAR_2, "scrambled state changed on pid %d (%d->%d)",
              VAR_3->i_pid, !!FUNC_0(*VAR_3), VAR_4 );

    if( VAR_4 )
        VAR_3->i_flags |= VAR_0;
    else
        VAR_3->i_flags &= ~VAR_0;

    if( VAR_3->type == VAR_1 )
        FUNC_1( VAR_2->out, VAR_3->u.p_stream->p_es, VAR_4 );
}
