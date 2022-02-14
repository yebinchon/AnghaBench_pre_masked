
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int i_timescale; int i_cumulated_duration; int i_duration; int b_fragments_probed; int b_seekable; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 double FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_2, double VAR_3, bool VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;

    if ( !VAR_5->b_seekable || !VAR_5->i_timescale )
        return VAR_0;

    uint64_t VAR_6 = FUNC_3(VAR_5->i_duration, VAR_5->i_cumulated_duration);
    if( !VAR_6 && !VAR_5->b_fragments_probed )
    {
        int VAR_7 = FUNC_2( VAR_2 );
        if( VAR_7 != VAR_1 )
            return VAR_7;
        VAR_6 = FUNC_3(VAR_5->i_duration, VAR_5->i_cumulated_duration);
    }

    if( !VAR_6 )
        return VAR_0;

    return FUNC_0( VAR_2, (vlc_tick_t)( VAR_3 *
                           FUNC_1( VAR_6, VAR_5->i_timescale ) ), VAR_4 );
}
