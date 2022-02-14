
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int jack_port_t ;
typedef int jack_default_audio_sample_t ;
struct TYPE_14__ {int i_channels; int i_rate; int i_bitspersample; int i_blockalign; } ;
struct TYPE_15__ {int i_bitrate; TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_16__ {int * out; TYPE_4__* p_sys; int pf_control; int pf_demux; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_17__ {int i_channels; int i_match_ports; char const** pp_jack_port_input; char const** pp_jack_buffer; char const** pp_jack_port_table; int jack_sample_rate; int jack_sample_size; int pts; int p_es_audio; int * p_jack_client; int jack_buffer_size; scalar_t__ psz_ports; int * p_jack_ringbuffer; } ;
typedef TYPE_4__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (char const**) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,int ,int *) ;
 int FUNC_11 (int *,char const*,int ) ;
 int FUNC_12 (int *) ;
 char** FUNC_13 (int *,int *,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char const*) ;
 char const* FUNC_16 (int *,char*,int ,int ,int ) ;
 int FUNC_17 (int *,char const*) ;
 int * FUNC_18 (int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,TYPE_3__*) ;
 void* FUNC_21 (int) ;
 int FUNC_22 (TYPE_3__*,char*) ;
 int FUNC_23 (char*,int,char*,unsigned int) ;
 int FUNC_24 (char*,char*,int) ;
 int FUNC_25 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_26 (TYPE_3__*,char*) ;
 TYPE_4__* FUNC_27 (int *,int,int) ;

__attribute__((used)) static int FUNC_28( vlc_object_t *VAR_15 )
{
    demux_t *VAR_16 = ( demux_t* )VAR_15;
    demux_sys_t *VAR_17;
    es_format_t VAR_18;
    int VAR_19 = 0;

    if (VAR_16->out == ((void*)0))
        return VAR_9;

    VAR_16->pf_demux = VAR_2;
    VAR_16->pf_control = VAR_1;


    VAR_16->p_sys = VAR_17 = FUNC_27( VAR_15, 1, sizeof( demux_sys_t ) );
    if( !VAR_17 )
        return VAR_10;


    FUNC_0( VAR_16 );


    FUNC_25( VAR_16, "jack-input-use-vlc-pace",
        VAR_13 | VAR_14 );
    FUNC_25( VAR_16, "jack-input-auto-connect",
        VAR_13 | VAR_14 );



    char VAR_20[32];
    FUNC_24( VAR_20, "vlc-input-%d", FUNC_7() );
    VAR_17->p_jack_client = FUNC_10( VAR_20, VAR_4, ((void*)0) );
    if( VAR_17->p_jack_client == ((void*)0) )
    {
        FUNC_22( VAR_16, "failed to connect to JACK server" );
        return VAR_9;
    }


    if( VAR_17->psz_ports )
    {
        FUNC_1( VAR_16 );
        if( VAR_17->i_channels == 0 )
        {
            VAR_17->i_channels = VAR_17->i_match_ports;
        }
    }


    if( VAR_17->i_channels == 0 ) VAR_17->i_channels = 2 ;
    VAR_17->pp_jack_port_input = FUNC_21(
        VAR_17->i_channels * sizeof( jack_port_t* ) );
    if( VAR_17->pp_jack_port_input == ((void*)0) )
    {
        FUNC_9( VAR_17->p_jack_client );
        return VAR_10;
    }




    VAR_17->p_jack_ringbuffer = FUNC_18( VAR_17->i_channels
         * FUNC_14( VAR_17->p_jack_client )
         * sizeof( jack_default_audio_sample_t ) );
    if( VAR_17->p_jack_ringbuffer == ((void*)0) )
    {
        FUNC_6( VAR_17->pp_jack_port_input );
        FUNC_9( VAR_17->p_jack_client );
        return VAR_10;
    }


    for( unsigned VAR_21 = 0; VAR_21 < VAR_17->i_channels; VAR_21++ )
    {
        char VAR_22[32];
        FUNC_23( VAR_22, 32, "vlc_in_%d", VAR_21+1 );
        VAR_17->pp_jack_port_input[VAR_21] = FUNC_16(
            VAR_17->p_jack_client, VAR_22, VAR_3,
            VAR_5, 0 );
        if( VAR_17->pp_jack_port_input[VAR_21] == ((void*)0) )
        {
            FUNC_22( VAR_16, "failed to register a JACK port" );
            FUNC_19( VAR_17->p_jack_ringbuffer );
            FUNC_6( VAR_17->pp_jack_port_input );
            FUNC_9( VAR_17->p_jack_client );
            return VAR_9;
        }
    }


    VAR_17->pp_jack_buffer = FUNC_21 ( VAR_17->i_channels
        * sizeof( jack_default_audio_sample_t * ) );
    if( VAR_17->pp_jack_buffer == ((void*)0) )
    {
        for( unsigned VAR_23 = 0; VAR_23 < VAR_17->i_channels; VAR_23++ )
            FUNC_17( VAR_17->p_jack_client, VAR_17->pp_jack_port_input[VAR_23] );
        FUNC_19( VAR_17->p_jack_ringbuffer );
        FUNC_6( VAR_17->pp_jack_port_input );
        FUNC_9( VAR_17->p_jack_client );
        return VAR_10;
    }


    FUNC_20( VAR_17->p_jack_client, VAR_7, VAR_16 );


    if ( FUNC_8( VAR_17->p_jack_client ) )
    {
        FUNC_22( VAR_16, "failed to activate JACK client" );
        FUNC_6( VAR_17->pp_jack_buffer );
        for( unsigned VAR_24 = 0; VAR_24 < VAR_17->i_channels; VAR_24++ )
            FUNC_17( VAR_17->p_jack_client, VAR_17->pp_jack_port_input[VAR_24] );
        FUNC_19( VAR_17->p_jack_ringbuffer );
        FUNC_6( VAR_17->pp_jack_port_input );
        FUNC_9( VAR_17->p_jack_client );
        return VAR_9;
    }



    if( VAR_17->psz_ports )
    {
        for( int VAR_25 = 0; VAR_25 < VAR_17->i_match_ports; VAR_25++ )
        {
            int VAR_26 = VAR_25 % VAR_17->i_channels;
            FUNC_11( VAR_17->p_jack_client, VAR_17->pp_jack_port_table[VAR_25],
                FUNC_15( VAR_17->pp_jack_port_input[VAR_26] ) );
        }
    }


    if( FUNC_26( VAR_16, "jack-input-auto-connect" ) && !VAR_17->psz_ports )
    {
        const char **VAR_27 = FUNC_13( VAR_17->p_jack_client,
                                                           ((void*)0), ((void*)0), VAR_6 );

        while( VAR_27 && VAR_27[VAR_19] )
        {
            VAR_19++;
        }

        for( int VAR_28 = 0; VAR_28 < VAR_19; VAR_28++ )
        {
            int VAR_29 = VAR_28 % VAR_17->i_channels;
            FUNC_11( VAR_17->p_jack_client, VAR_27[VAR_28],
                FUNC_15( VAR_17->pp_jack_port_input[VAR_29] ) );
        }

        FUNC_6( VAR_27 );
    }



    VAR_17->jack_buffer_size = FUNC_12( VAR_17->p_jack_client );

    VAR_17->jack_sample_rate = FUNC_14( VAR_17->p_jack_client );

    VAR_17->jack_sample_size = sizeof( jack_default_audio_sample_t );


    FUNC_4( &VAR_18, VAR_0, VAR_8 );
    VAR_18.audio.i_channels = VAR_17->i_channels;
    VAR_18.audio.i_rate = VAR_17->jack_sample_rate;
    VAR_18.audio.i_bitspersample = VAR_17->jack_sample_size * 8;
    VAR_18.audio.i_blockalign = VAR_18.audio.i_bitspersample / 8;
    VAR_18.i_bitrate = VAR_18.audio.i_rate * VAR_18.audio.i_bitspersample
        * VAR_18.audio.i_channels;

    VAR_17->p_es_audio = FUNC_5( VAR_16->out, &VAR_18 );
    FUNC_2( &VAR_17->pts, VAR_18.audio.i_rate, 1 );
    FUNC_3( &VAR_17->pts, VAR_12 );

    return VAR_11;
}
