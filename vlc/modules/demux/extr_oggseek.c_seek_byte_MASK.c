
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int b_page_waiting; int i_input_position; int oy; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_0, int64_t VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    if ( ! FUNC_1( VAR_0->s, VAR_1 ) )
    {
        FUNC_0( &VAR_2->oy );

        VAR_2->i_input_position = VAR_1;
        VAR_2->b_page_waiting = 0;
    }
}
