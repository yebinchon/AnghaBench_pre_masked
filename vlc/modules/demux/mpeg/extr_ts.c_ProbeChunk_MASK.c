
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_37__ {int i_first; int i_first_dts; } ;
struct TYPE_38__ {int i_pid_pcr; int i_last_dts; int i_number; TYPE_8__ pcr; int i_last_dts_byte; } ;
typedef TYPE_9__ ts_pmt_t ;
struct TYPE_33__ {TYPE_11__* p_pat; TYPE_3__* p_stream; } ;
struct TYPE_25__ {scalar_t__ type; int i_pid; TYPE_4__ u; int i_flags; } ;
typedef TYPE_10__ ts_pid_t ;
struct TYPE_36__ {int i_size; TYPE_6__** p_elems; } ;
struct TYPE_26__ {TYPE_7__ programs; } ;
typedef TYPE_11__ ts_pat_t ;
typedef int stime_t ;
struct TYPE_27__ {TYPE_13__* p_sys; } ;
typedef TYPE_12__ demux_t ;
struct TYPE_28__ {int stream; } ;
typedef TYPE_13__ demux_sys_t ;
struct TYPE_29__ {scalar_t__ i_size; int* p_buffer; int i_buffer; } ;
typedef TYPE_14__ block_t ;
struct TYPE_34__ {TYPE_9__* p_pmt; } ;
struct TYPE_35__ {TYPE_5__ u; } ;
struct TYPE_32__ {TYPE_2__* p_es; } ;
struct TYPE_30__ {scalar_t__ i_cat; } ;
struct TYPE_31__ {TYPE_1__ fmt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_14__*) ;
 TYPE_10__* FUNC_1 (TYPE_13__*,int const) ;
 int FUNC_2 (TYPE_14__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int*,int,unsigned int*,int*,int*,int *,int *) ;
 TYPE_14__* FUNC_5 (TYPE_12__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_12__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_14__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10( demux_t *VAR_6, int VAR_7, bool VAR_8, stime_t *VAR_9, bool *VAR_10 )
{
    demux_sys_t *VAR_11 = VAR_6->p_sys;
    int VAR_12 = 0;
    block_t *VAR_13 = ((void*)0);

    for( ;; )
    {
        *VAR_9 = -1;

        if( VAR_12++ > VAR_1 || !( VAR_13 = FUNC_5( VAR_6 ) ) )
        {
            break;
        }

        if( VAR_13->i_size < VAR_2 &&
           ( VAR_13->p_buffer[1]&0x80 ) )
        {
            FUNC_8( VAR_13 );
            continue;
        }

        const int VAR_14 = FUNC_2( VAR_13 );
        ts_pid_t *VAR_15 = FUNC_1(VAR_11, VAR_14);

        VAR_15->i_flags |= VAR_0;

        if( VAR_14 != 0x1FFF && (VAR_13->p_buffer[1] & 0x80) == 0 )
        {
            bool VAR_16 = 1;
            bool VAR_17 = VAR_13->p_buffer[3] & 0x20;

            if( VAR_17 && VAR_13->i_buffer >= 4 + 2 + 5 )
                *VAR_9 = FUNC_0( VAR_13 );

            if( *VAR_9 == -1 &&
                (VAR_13->p_buffer[1] & 0xC0) == 0x40 &&
                (VAR_13->p_buffer[3] & 0xD0) == 0x10 &&
                VAR_15->type == VAR_3 &&
                VAR_15->u.p_stream->p_es->fmt.i_cat != VAR_4
              )
            {
                VAR_16 = 0;
                stime_t VAR_18 = -1;
                stime_t VAR_19 = -1;
                uint8_t VAR_20;
                unsigned VAR_21 = 4;
                if ( VAR_17 )
                    VAR_21 += 1 + FUNC_7(VAR_13->p_buffer[4], 182);

                if ( VAR_5 == FUNC_4( FUNC_6(VAR_6), &VAR_13->p_buffer[VAR_21],
                                                    VAR_13->i_buffer - VAR_21, &VAR_21,
                                                    &VAR_18, &VAR_19, &VAR_20, ((void*)0) ) )
                {
                    if( VAR_18 != -1 )
                        *VAR_9 = VAR_18;
                    else if( VAR_19 != -1 )
                        *VAR_9 = VAR_19;
                }
            }

            if( *VAR_9 != -1 )
            {
                ts_pat_t *VAR_22 = FUNC_1(VAR_11, 0)->u.p_pat;
                for( int VAR_23=0; VAR_23<VAR_22->programs.i_size; VAR_23++ )
                {
                    ts_pmt_t *VAR_24 = VAR_22->programs.p_elems[VAR_23]->u.p_pmt;
                    if( VAR_24->i_pid_pcr == VAR_15->i_pid ||
                          ( VAR_24->i_pid_pcr == 0x1FFF &&
                            FUNC_3( VAR_24, VAR_15->i_pid ) )
                      )
                    {
                        if( VAR_8 )
                        {
                            VAR_24->i_last_dts = *VAR_9;
                            VAR_24->i_last_dts_byte = FUNC_9( VAR_11->stream );
                        }

                        else if( VAR_16 && VAR_24->pcr.i_first == -1 )
                        {
                            VAR_24->pcr.i_first = *VAR_9;
                        }
                        else if( VAR_24->pcr.i_first_dts == -1 )
                        {
                            VAR_24->pcr.i_first_dts = *VAR_9;
                        }

                        if( VAR_7 == 0 || VAR_7 == VAR_24->i_number )
                            *VAR_10 = 1;
                    }
                }
            }
        }

        FUNC_8( VAR_13 );
    }

    return VAR_12;
}
