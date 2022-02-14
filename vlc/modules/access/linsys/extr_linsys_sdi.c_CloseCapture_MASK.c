
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {unsigned int i_buffers; int * pp_buffers; int i_fd; int i_buffer_size; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_0( VAR_0 );
    for ( unsigned int VAR_2 = 0; VAR_2 < VAR_1->i_buffers; VAR_2++ )
        FUNC_2( VAR_1->pp_buffers[VAR_2], VAR_1->i_buffer_size );
    FUNC_3( VAR_1->i_fd );
    FUNC_1( VAR_1->pp_buffers );
}
