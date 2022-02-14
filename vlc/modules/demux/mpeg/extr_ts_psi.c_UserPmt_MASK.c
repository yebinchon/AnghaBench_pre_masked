
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_28__ {int i_number; unsigned long i_pid_pcr; int e_streams; int handle; } ;
typedef TYPE_4__ ts_pmt_t ;
struct TYPE_27__ {TYPE_20__* p_stream; TYPE_1__* p_pat; TYPE_4__* p_pmt; } ;
struct TYPE_29__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_5__ ts_pid_t ;
struct TYPE_30__ {int b_packetized; int i_group; unsigned long i_id; int i_cat; int i_codec; } ;
typedef TYPE_6__ es_format_t ;
struct TYPE_31__ {int out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ demux_t ;
struct TYPE_32__ {int b_user_pmt; int i_pmt_es; scalar_t__ b_es_id_pid; } ;
typedef TYPE_8__ demux_sys_t ;
struct TYPE_26__ {int id; TYPE_6__ fmt; } ;
struct TYPE_25__ {TYPE_2__* p_es; int transport; } ;
struct TYPE_24__ {int programs; } ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (TYPE_8__*,unsigned long) ;
 int FUNC_2 (TYPE_7__*,TYPE_20__*,int const,int *) ;
 int FUNC_3 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_7__*,int ,TYPE_5__*,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char,char,char,char) ;
 int VAR_11 ;
 int FUNC_6 (int ,int,int ,TYPE_7__*) ;
 int FUNC_7 (TYPE_6__*,int,int const) ;
 int FUNC_8 (int ,TYPE_6__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_7__*,char*,unsigned long,...) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (char*) ;
 void* FUNC_15 (char*,char**,int ) ;
 unsigned long FUNC_16 (char*,char**,int ) ;

int FUNC_17( demux_t *VAR_12, const char *VAR_13 )
{
    demux_sys_t *VAR_14 = VAR_12->p_sys;
    char *VAR_15 = FUNC_13( VAR_13 );
    char *VAR_16 = VAR_15;
    int VAR_17;

    if( !VAR_15 )
        return VAR_10;


    unsigned long VAR_18 = FUNC_16( VAR_16, &VAR_16, 0 );
    if( VAR_18 < 2 || VAR_18 >= 8192 )
        goto error;


    VAR_17 = 0;
    if( *VAR_16 == ':' )
        VAR_17 = FUNC_15( &VAR_16[1], &VAR_16, 0 );


    ts_pid_t *VAR_19 = FUNC_1(VAR_14, VAR_18);

    FUNC_10( VAR_12, "user pmt specified (pid=%lu,number=%d)", VAR_18, VAR_17 );
    if ( !FUNC_4( VAR_12, VAR_5, VAR_19, FUNC_1(VAR_14, 0) ) )
        goto error;


    ts_pmt_t *VAR_20 = VAR_19->u.p_pmt;
    VAR_20->i_number = VAR_17 != 0 ? VAR_17 : VAR_3;
    if( !FUNC_6( VAR_20->handle,
                            ((VAR_17 != VAR_3 ? VAR_17 : 1)),
                            VAR_1, VAR_12 ) )
    {
        FUNC_3( VAR_12, VAR_19 );
        goto error;
    }

    FUNC_0( FUNC_1(VAR_14, 0)->u.p_pat->programs, VAR_19 );

    VAR_16 = FUNC_11( VAR_16, '=' );
    if( VAR_16 )
        VAR_16++;
    while( VAR_16 && *VAR_16 )
    {
        char *VAR_21 = FUNC_11( VAR_16, ',' );

        if( VAR_21 )
            *VAR_21++ = '\0';

        VAR_18 = FUNC_16( VAR_16, &VAR_16, 0 );
        if( *VAR_16 != ':' || VAR_18 < 2 || VAR_18 >= 8192 )
            goto next;

        char *VAR_22 = &VAR_16[1];
        if( !FUNC_12( VAR_22, "pcr" ) )
        {
            VAR_20->i_pid_pcr = VAR_18;
        }
        else if( FUNC_1(VAR_14, VAR_18)->type == VAR_4 )
        {
            ts_pid_t *VAR_23 = FUNC_1(VAR_14, VAR_18);

            char *VAR_24 = FUNC_11( VAR_22, '=' );
            if( VAR_24 )
                *VAR_24++ = '\0';

            if ( !FUNC_4( VAR_12, VAR_6, VAR_23, VAR_19 ) )
                continue;

            FUNC_0( VAR_20->e_streams, VAR_23 );

            if( VAR_20->i_pid_pcr <= 0 )
                VAR_20->i_pid_pcr = VAR_18;

            es_format_t *VAR_25 = &VAR_23->u.p_stream->p_es->fmt;

            if( VAR_24 && FUNC_14( VAR_24 ) == 4 )
            {
                const vlc_fourcc_t VAR_26 = FUNC_5( VAR_24[0], VAR_24[1],
                                                         VAR_24[2], VAR_24[3] );
                int VAR_27 = VAR_7;

                if( !FUNC_12( VAR_22, "video" ) )
                    VAR_27 = VAR_8;
                else if( !FUNC_12( VAR_22, "audio" ) )
                    VAR_27 = VAR_0;
                else if( !FUNC_12( VAR_22, "spu" ) )
                    VAR_27 = VAR_2;

                FUNC_7( VAR_25, VAR_27, VAR_26 );
                VAR_25->b_packetized = 0;
            }
            else
            {
                const int VAR_28 = FUNC_15( VAR_22, ((void*)0), 0 );
                FUNC_2( VAR_12, VAR_23->u.p_stream, VAR_28, &VAR_23->u.p_stream->transport );
            }

            VAR_25->i_group = VAR_17;
            if( VAR_14->b_es_id_pid )
                VAR_25->i_id = VAR_18;

            if( VAR_25->i_cat != VAR_7 )
            {
                FUNC_10( VAR_12, "  * es pid=%lu fcc=%4.4s", VAR_18,
                         (char*)&VAR_25->i_codec );
                VAR_23->u.p_stream->p_es->id = FUNC_8( VAR_12->out, VAR_25 );
                VAR_14->i_pmt_es++;
            }
        }

    next:
        VAR_16 = VAR_21;
    }

    VAR_14->b_user_pmt = 1;
    FUNC_9( VAR_15 );
    return VAR_11;

error:
    FUNC_9( VAR_15 );
    return VAR_9;
}
