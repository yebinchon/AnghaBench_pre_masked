
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int ack_event; int tid; int hmq; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4 ( vlc_object_t *VAR_2 )
{
    vout_display_t * VAR_3 = (vout_display_t *)VAR_2;
    vout_display_sys_t * VAR_4 = VAR_3->sys;

    FUNC_2( VAR_4->hmq, VAR_1, 0, 0 );

    FUNC_1( &VAR_4->tid, VAR_0 );

    FUNC_0( VAR_4->ack_event );

    FUNC_3( VAR_4 );
}
