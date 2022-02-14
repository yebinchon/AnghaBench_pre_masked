
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int stime_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_packet_size; int stream; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__ const) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5( demux_t *VAR_4, int VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_4->p_sys;
    const uint64_t VAR_7 = FUNC_4( VAR_6->stream );
    int64_t VAR_8 = FUNC_2( VAR_6->stream );

    int VAR_9 = VAR_0;
    int64_t VAR_10;
    stime_t VAR_11 = -1;
    bool VAR_12 = 0;

    do
    {
        VAR_10 = VAR_8 - (VAR_6->i_packet_size * VAR_9);
        VAR_10 = FUNC_1( VAR_10, 0 );

        if( FUNC_3( VAR_6->stream, VAR_10 ) )
            return VAR_2;

        FUNC_0( VAR_4, VAR_5, 1, &VAR_11, &VAR_12 );


        VAR_9 += VAR_0;
    } while( VAR_10 > 0 && !VAR_12 &&
             VAR_9 < VAR_1 );

    if( FUNC_3( VAR_6->stream, VAR_7 ) )
        return VAR_2;

    return (VAR_12) ? VAR_3 : VAR_2;
}
