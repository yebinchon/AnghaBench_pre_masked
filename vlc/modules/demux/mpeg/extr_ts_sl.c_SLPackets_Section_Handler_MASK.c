
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_36__ {TYPE_1__* p_es; } ;
typedef TYPE_3__ ts_stream_t ;
struct TYPE_35__ {int i_size; TYPE_8__** p_elems; } ;
struct TYPE_40__ {TYPE_2__ objects; } ;
struct TYPE_37__ {TYPE_7__ od; } ;
typedef TYPE_4__ ts_pmt_t ;
struct TYPE_30__ {int b_packetized; int i_group; int i_id; } ;
struct TYPE_38__ {scalar_t__ id; TYPE_10__ fmt; } ;
typedef TYPE_5__ ts_es_t ;
struct TYPE_39__ {size_t i_size; } ;
typedef TYPE_6__ sl_header_data ;
typedef TYPE_7__ od_descriptors_t ;
struct TYPE_41__ {TYPE_9__* es_descr; } ;
typedef TYPE_8__ od_descriptor_t ;
struct TYPE_34__ {int i_objectTypeIndication; int i_streamType; } ;
struct TYPE_42__ {TYPE_21__ dec_descr; scalar_t__ b_ok; int i_es_id; int sl_descr; } ;
typedef TYPE_9__ es_mpeg4_descriptor_t ;
typedef TYPE_10__ es_format_t ;
struct TYPE_31__ {int out; TYPE_12__* p_sys; } ;
typedef TYPE_11__ demux_t ;
struct TYPE_32__ {scalar_t__ seltype; int i_pmt_es; } ;
typedef TYPE_12__ demux_sys_t ;
struct TYPE_33__ {int i_sl_es_id; TYPE_4__* p_program; } ;


 int FUNC_0 (int ,TYPE_7__*,size_t,int const*) ;
 TYPE_6__ FUNC_1 (size_t,int const*,int *) ;
 int VAR_0 ;
 TYPE_9__* FUNC_2 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_11__*,TYPE_21__*,TYPE_10__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_11__*,int) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,int ,int ) ;
 int FUNC_10 (TYPE_10__*,TYPE_10__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_10__*) ;
 int FUNC_12 (int ,scalar_t__) ;

void FUNC_13( demux_t *VAR_3,
                                const uint8_t *VAR_4, size_t VAR_5,
                                const uint8_t *VAR_6, size_t VAR_7,
                                void *VAR_8 )
{
    FUNC_7(VAR_4); FUNC_7(VAR_5);
    demux_sys_t *VAR_9 = VAR_3->p_sys;
    ts_stream_t *VAR_10 = (ts_stream_t *) VAR_8;
    ts_pmt_t *VAR_11 = VAR_10->p_es->p_program;

    const es_mpeg4_descriptor_t *VAR_12 = FUNC_2( VAR_11, VAR_10->p_es->i_sl_es_id );
    if( VAR_12 && VAR_12->dec_descr.i_objectTypeIndication == 0x01 &&
        VAR_12->dec_descr.i_streamType == 0x01 )
    {
        const uint8_t *VAR_13 = VAR_6;
        size_t VAR_14 = VAR_7;

        od_descriptors_t *VAR_15 = &VAR_11->od;
        sl_header_data VAR_16 = FUNC_1( VAR_14, VAR_13, &VAR_12->sl_descr );

        FUNC_0( FUNC_6(VAR_3), VAR_15, VAR_14 - VAR_16.i_size, &VAR_13[VAR_16.i_size] );
        bool VAR_17 = 0;

        for( int VAR_18=0; VAR_18<VAR_15->objects.i_size; VAR_18++ )
        {
            od_descriptor_t *VAR_19 = VAR_15->objects.p_elems[VAR_18];
            for( int VAR_20 = 0; VAR_20 < VAR_0 && VAR_19->es_descr[VAR_20].b_ok; VAR_20++ )
            {
                VAR_12 = &VAR_19->es_descr[VAR_20];
                ts_es_t *VAR_21 = FUNC_3( VAR_11, VAR_12->i_es_id );
                es_format_t VAR_22;
                FUNC_9( &VAR_22, VAR_2, 0 );

                if ( VAR_12 && VAR_12->b_ok && VAR_21 &&
                     FUNC_4( VAR_3, &VAR_12->dec_descr, &VAR_22 ) &&
                     !FUNC_10( &VAR_22, &VAR_21->fmt ) )
                {
                    VAR_22.i_id = VAR_21->fmt.i_id;
                    VAR_22.i_group = VAR_21->fmt.i_group;
                    FUNC_8( &VAR_21->fmt );
                    VAR_21->fmt = VAR_22;

                    if( VAR_21->id )
                    {
                        FUNC_12( VAR_3->out, VAR_21->id );
                        VAR_9->i_pmt_es--;
                    }
                    VAR_21->fmt.b_packetized = 1;
                    VAR_21->id = FUNC_11( VAR_3->out, &VAR_21->fmt );
                    if( VAR_21->id )
                        VAR_9->i_pmt_es++;
                    VAR_17 = 1;
                }
                else
                    FUNC_8( &VAR_22 );
            }
        }

        if( VAR_17 )
            FUNC_5( VAR_3, VAR_9->seltype == VAR_1 );
    }
}
