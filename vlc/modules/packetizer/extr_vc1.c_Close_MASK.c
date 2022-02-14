
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_7__ {scalar_t__ p_ep; } ;
struct TYPE_6__ {scalar_t__ p_sh; } ;
struct TYPE_9__ {int cc; int cc_next; TYPE_2__ ep; TYPE_1__ sh; scalar_t__ p_frame; int packetizer; } ;
typedef TYPE_4__ decoder_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_0 )
{
    decoder_t *VAR_1 = (decoder_t*)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_3( &VAR_2->packetizer );
    if( VAR_2->p_frame )
        FUNC_0( VAR_2->p_frame );
    if( VAR_2->sh.p_sh )
        FUNC_0( VAR_2->sh.p_sh );
    if( VAR_2->ep.p_ep )
        FUNC_0( VAR_2->ep.p_ep );

    FUNC_1( &VAR_2->cc_next );
    FUNC_1( &VAR_2->cc );

    FUNC_2( VAR_2 );
}
