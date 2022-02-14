
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {size_t i_seek_track; scalar_t__ i_wait_keyframe; TYPE_3__** track; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {int p_es; } ;
typedef TYPE_3__ asf_track_t ;
struct TYPE_10__ {TYPE_1__* p_demux; } ;
typedef TYPE_4__ asf_packet_sys_t ;


 int FUNC_0 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static bool FUNC_1( asf_packet_sys_t *VAR_0, uint8_t VAR_1, bool VAR_2 )
{
    demux_t *VAR_3 = VAR_0->p_demux;
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    const asf_track_t *VAR_5 = VAR_4->track[VAR_1];

    if( VAR_5 == ((void*)0) )
    {
        FUNC_0( VAR_3, "undeclared stream[Id 0x%x]", VAR_1 );
        return 1;
    }

    if( VAR_4->i_wait_keyframe )
    {
        if ( VAR_1 == VAR_4->i_seek_track )
        {
            if ( !VAR_2 )
            {
                VAR_4->i_wait_keyframe--;
                return 1;
            }
            else
                VAR_4->i_wait_keyframe = 0;
        }
        else
            return 1;
    }

    if( !VAR_5->p_es )
        return 1;

    return 0;
}
