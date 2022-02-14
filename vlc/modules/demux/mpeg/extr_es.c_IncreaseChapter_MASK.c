
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_9__ {int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_8__ {int i_current; int i_count; TYPE_5__* p_entry; } ;
struct TYPE_10__ {int i_demux_flags; TYPE_2__ chapters; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ i_offset; TYPE_1__* p_seekpoint; } ;
typedef TYPE_5__ chap_entry_t ;
struct TYPE_7__ {scalar_t__ i_time_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_4, vlc_tick_t VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_4->p_sys;
    while( VAR_6->chapters.i_current + 1 < VAR_6->chapters.i_count )
    {
        const chap_entry_t *VAR_7 = &VAR_6->chapters.p_entry[VAR_6->chapters.i_current + 1];
        if( (VAR_7->i_offset != VAR_1 && FUNC_0( VAR_4->s ) < VAR_7->i_offset) ||
            (VAR_5 == VAR_3 || VAR_7->p_seekpoint->i_time_offset + VAR_2 > VAR_5) )
            break;
        ++VAR_6->chapters.i_current;
        VAR_6->i_demux_flags |= VAR_0;
    }
}
