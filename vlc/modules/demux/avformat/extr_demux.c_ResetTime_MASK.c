
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_11__ {scalar_t__ rem; int quot; } ;
typedef TYPE_3__ lldiv_t ;
typedef scalar_t__ int64_t ;
struct TYPE_12__ {int out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_13__ {unsigned int i_tracks; TYPE_2__* tracks; scalar_t__ i_pcr; TYPE_1__* ic; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_10__ {scalar_t__ i_pcr; } ;
struct TYPE_9__ {scalar_t__ start_time; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 TYPE_3__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( demux_t *VAR_5, int64_t VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_5->p_sys;
    vlc_tick_t VAR_8;

    if( VAR_7->ic->start_time == (int64_t)VAR_0 || VAR_6 < 0 )
    {
        VAR_8 = VAR_4;
    }
    else
    {

        VAR_8 = FUNC_0(VAR_6);





        if( VAR_8 == VAR_4 )
            VAR_8 = VAR_3;
    }

    VAR_7->i_pcr = VAR_8;
    for( unsigned VAR_9 = 0; VAR_9 < VAR_7->i_tracks; VAR_9++ )
        VAR_7->tracks[VAR_9].i_pcr = VAR_4;

    if( VAR_8 != VAR_4 )
    {
        FUNC_2( VAR_5->out, VAR_2, VAR_8 );
        FUNC_1( VAR_5, VAR_8 );
    }
}
