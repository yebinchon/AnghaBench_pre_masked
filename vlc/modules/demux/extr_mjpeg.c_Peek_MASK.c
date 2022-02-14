
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_data_peeked; int i_frame_size_estimate; int p_peek; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static bool FUNC_2( demux_t *VAR_0, bool VAR_1 )
{
    int VAR_2;
    demux_sys_t *VAR_3 = VAR_0->p_sys;

    if( VAR_1 )
    {
        VAR_3->i_data_peeked = 0;
    }
    else if( VAR_3->i_data_peeked == VAR_3->i_frame_size_estimate )
    {
        VAR_3->i_frame_size_estimate += 5120;
    }
    VAR_2 = FUNC_1( VAR_0->s, &VAR_3->p_peek,
                          VAR_3->i_frame_size_estimate );
    if( VAR_2 == VAR_3->i_data_peeked )
    {
        FUNC_0( VAR_0, "no more data" );
        return 0;
    }
    VAR_3->i_data_peeked = VAR_2;
    if( VAR_2 <= 0 )
    {
        FUNC_0( VAR_0, "cannot peek data" );
        return 0;
    }
    return 1;
}
