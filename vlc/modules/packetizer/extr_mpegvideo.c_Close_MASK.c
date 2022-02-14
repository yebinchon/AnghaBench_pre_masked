
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int packetizer; scalar_t__ p_frame; scalar_t__ p_ext; scalar_t__ p_seq; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_0 )
{
    decoder_t *VAR_1 = (decoder_t*)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_seq )
    {
        FUNC_1( VAR_2->p_seq );
    }
    if( VAR_2->p_ext )
    {
        FUNC_1( VAR_2->p_ext );
    }
    if( VAR_2->p_frame )
    {
        FUNC_0( VAR_2->p_frame );
    }
    FUNC_3( &VAR_2->packetizer );

    FUNC_4( VAR_1, "packetizer-mpegvideo-sync-iframe" );

    FUNC_2( VAR_2 );
}
