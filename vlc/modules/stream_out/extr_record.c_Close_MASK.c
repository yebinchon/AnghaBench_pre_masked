
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {struct TYPE_5__* psz_prefix; int id; int i_id; scalar_t__ p_out; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_out )
        FUNC_2( VAR_2->p_out, VAR_2->p_out );

    FUNC_0( VAR_2->i_id, VAR_2->id );
    FUNC_1( VAR_2->psz_prefix );
    FUNC_1( VAR_2 );
}
