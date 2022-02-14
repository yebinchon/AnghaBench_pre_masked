
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_4__ {scalar_t__ p_block; int p_client; scalar_t__ es; int thread; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_3( VAR_2->thread );
    FUNC_4( VAR_2->thread, ((void*)0) );

    if ( VAR_2->es )
        FUNC_1( VAR_1->out, VAR_2->es );

    FUNC_2( VAR_2->p_client );

    if ( VAR_2->p_block )
        FUNC_0( VAR_2->p_block );
}
