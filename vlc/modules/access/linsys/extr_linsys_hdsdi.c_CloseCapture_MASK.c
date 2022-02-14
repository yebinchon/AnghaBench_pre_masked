
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {unsigned int i_vbuffers; int i_max_channel; unsigned int i_abuffers; int i_afd; int * pp_abuffers; int i_abuffer_size; int i_vfd; int * pp_vbuffers; int i_vbuffer_size; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_0( VAR_0 );





    FUNC_3( VAR_1->i_vfd );
    if ( VAR_1->i_max_channel != -1 )
    {





        FUNC_3( VAR_1->i_afd );
    }
}
