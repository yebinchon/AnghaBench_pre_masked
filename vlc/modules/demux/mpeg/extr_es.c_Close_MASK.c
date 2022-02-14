
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_8__ {TYPE_4__* p_bits; } ;
struct TYPE_7__ {size_t i_count; TYPE_6__* p_entry; } ;
struct TYPE_10__ {int p_packetizer; TYPE_2__ mllt; TYPE_1__ chapters; scalar_t__ p_packetized_data; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_11__ {int p_seekpoint; } ;


 int FUNC_0 (size_t,TYPE_6__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( vlc_object_t * VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_packetized_data )
        FUNC_1( VAR_2->p_packetized_data );
    for( size_t VAR_3=0; VAR_3< VAR_2->chapters.i_count; VAR_3++ )
        FUNC_4( VAR_2->chapters.p_entry[VAR_3].p_seekpoint );
    FUNC_0( VAR_2->chapters.i_count, VAR_2->chapters.p_entry );
    if( VAR_2->mllt.p_bits )
        FUNC_3( VAR_2->mllt.p_bits );
    FUNC_2( VAR_2->p_packetizer );
    FUNC_3( VAR_2 );
}
