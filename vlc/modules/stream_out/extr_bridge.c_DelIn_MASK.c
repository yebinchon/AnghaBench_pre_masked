
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_next; scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_7__ {int id; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;
struct TYPE_8__ {TYPE_2__* id_audio; TYPE_2__* id_video; } ;
typedef TYPE_3__ in_sout_stream_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( sout_stream_t *VAR_0, void *VAR_1 )
{
    in_sout_stream_sys_t *VAR_2 = (in_sout_stream_sys_t *)VAR_0->p_sys;
    sout_stream_id_sys_t *VAR_3 = (sout_stream_id_sys_t *)VAR_1;

    if( VAR_3 == VAR_2->id_video ) VAR_2->id_video = ((void*)0);
    if( VAR_3 == VAR_2->id_audio ) VAR_2->id_audio = ((void*)0);

    FUNC_1( VAR_0->p_next, VAR_3->id );
    FUNC_0( VAR_3 );
}
