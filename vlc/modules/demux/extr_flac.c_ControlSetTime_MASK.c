
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int out; int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {scalar_t__ const i_data_pos; int i_seekpoint; int i_next_block_flags; TYPE_1__** seekpoint; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_8__ {scalar_t__ i_time_offset; scalar_t__ i_byte_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,double const,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_5, vlc_tick_t VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_5->p_sys;
    bool VAR_8;
    int VAR_9;


    FUNC_6( VAR_5->s, VAR_2, &VAR_8 );
    if( !VAR_8 )
        return VAR_3;

    const vlc_tick_t VAR_10 = FUNC_0( VAR_5 );
    if( VAR_10 <= 0 )
        return VAR_3;

    const uint64_t VAR_11 = FUNC_5( VAR_5->s );
    if( VAR_11 <= VAR_7->i_data_pos )
        return VAR_3;

    const double VAR_12 = (double) VAR_10 / (VAR_11 - VAR_7->i_data_pos);
    if( VAR_12 == 0 )
        return VAR_3;

    uint64_t VAR_13 = VAR_7->i_data_pos;
    uint64_t VAR_14 = VAR_11;
    uint64_t VAR_15;

    FUNC_3( VAR_7->i_seekpoint > 0 );
    if( VAR_7->i_seekpoint > 1 )
    {

        for( VAR_9 = VAR_7->i_seekpoint-1; VAR_9 >= 0; VAR_9-- )
        {
            if( VAR_7->seekpoint[VAR_9]->i_time_offset <= VAR_6 )
                break;
        }

        VAR_13 = VAR_7->seekpoint[0]->i_byte_offset + VAR_7->i_data_pos;
        if( VAR_9+1 < VAR_7->i_seekpoint )
            VAR_14 = VAR_7->seekpoint[VAR_9+1]->i_byte_offset + VAR_7->i_data_pos;

        VAR_15 = VAR_13;
    }
    else
    {
        VAR_15 = VAR_6 / VAR_12;
    }

    if( VAR_4 != FUNC_7( VAR_5->s, VAR_15 ) )
        return VAR_3;

    int VAR_16 = FUNC_1( VAR_5, VAR_6, VAR_12, VAR_13, VAR_14 );
    if( VAR_16 == VAR_4 )
    {
        VAR_7->i_next_block_flags |= VAR_0;
        FUNC_2( VAR_7 );
        FUNC_4( VAR_5->out, VAR_1, VAR_6 );
    }

    return VAR_16;
}
