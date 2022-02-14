
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int stream_info; scalar_t__ b_stream_info; int p_packetizer; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_11__ {unsigned int i_buffer; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int *,TYPE_3__**) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,int ,int*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10( demux_t *VAR_6, vlc_tick_t VAR_7, double VAR_8,
                       uint64_t VAR_9, uint64_t VAR_10 )
{
    demux_sys_t *VAR_11 = VAR_6->p_sys;
    bool VAR_12 = 0;
    block_t *VAR_13;
    block_t *VAR_14;

    unsigned VAR_15 = VAR_0;

    bool VAR_16 = 0;
    FUNC_7( VAR_6->s, VAR_3, &VAR_16 );

    uint64_t VAR_17 = FUNC_9( VAR_6->s );

    while( !VAR_12 )
    {
        FUNC_0( VAR_11->p_packetizer );

        VAR_13 = ((void*)0);
        VAR_14 = ((void*)0);

        while( !VAR_13 )
        {
            if( !VAR_14 )
            {
                if( !(VAR_14 = FUNC_6( VAR_6->s, VAR_15 )) )
                    break;
            }

            VAR_13 = FUNC_1( VAR_11->p_packetizer,
                                              VAR_11->b_stream_info ? &VAR_11->stream_info : ((void*)0),
                                             &VAR_14 );
        }

        if( !VAR_13 )
        {
            if( VAR_14 )
                FUNC_5( VAR_14 );
            break;
        }

        if( VAR_13->i_buffer > VAR_15 )
            VAR_15 = VAR_13->i_buffer;


        if( VAR_13->i_dts >= VAR_7 )
        {
            vlc_tick_t VAR_18 = VAR_13->i_dts - VAR_7;

            if( VAR_18 > FUNC_2(100) && VAR_18 / VAR_8 > VAR_15 )
            {
                VAR_10 = VAR_17;
                VAR_17 -= ( VAR_18 / VAR_8 );
                VAR_17 = FUNC_3(VAR_17, VAR_9 + VAR_15);
            }
            else VAR_12 = 1;
        }
        else
        {
            vlc_tick_t VAR_19 = VAR_7 - VAR_13->i_dts;

            if( VAR_19 >= ((VAR_16) ? VAR_1 : VAR_2) &&
                VAR_19 / VAR_8 > VAR_15 )
            {
                VAR_9 = VAR_17;
                VAR_17 += ( VAR_19 / VAR_8 );
                VAR_17 = FUNC_4(VAR_17, VAR_10 - VAR_15);
            }
            else VAR_12 = 1;
        }

        if( VAR_13 )
            FUNC_5( VAR_13 );
        if( VAR_14 )
            FUNC_5( VAR_14 );

        if( !VAR_12 )
        {
            if( VAR_10 < VAR_9 || VAR_10 - VAR_9 < VAR_15 )
                break;

            if( VAR_5 != FUNC_8( VAR_6->s, VAR_17 ) )
                break;
        }
    }

    return VAR_12 ? VAR_5 : VAR_4;
}
