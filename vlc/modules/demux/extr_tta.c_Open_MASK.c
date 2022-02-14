
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_12__ {int i_rate; void* i_bitspersample; void* i_channels; } ;
struct TYPE_13__ {int i_extra; int * p_extra; TYPE_2__ audio; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_11__ {int force; } ;
struct TYPE_14__ {int out; int s; TYPE_5__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_15__ {int i_datalength; int i_framelength; int i_totalframes; int i_start; int p_es; void** pi_seektable; scalar_t__ i_currentframe; } ;
typedef TYPE_5__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void** FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int const*,char*,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 int FUNC_12 (int ,int const**,int) ;
 int FUNC_13 (int ,int *,int) ;

__attribute__((used)) static int FUNC_14( vlc_object_t * VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;
    demux_sys_t *VAR_11;
    es_format_t VAR_12;
    const uint8_t *VAR_13;
    uint8_t VAR_14[22];
    uint8_t *VAR_15;
    int VAR_16 = 0;



    if( FUNC_12( VAR_10->s, &VAR_13, 4 ) < 4 )
        return VAR_6;

    if( FUNC_8( VAR_13, "TTA1", 4 ) )
    {
        if( !VAR_10->obj.force )
            return VAR_6;


        FUNC_10( VAR_10, "this doesn't look like a true-audio stream, "
                 "continuing anyway" );
    }

    if( FUNC_13( VAR_10->s, VAR_14, 22 ) < 22 )
        return VAR_6;


    VAR_10->pf_demux = VAR_2;
    VAR_10->pf_control = VAR_1;
    VAR_10->p_sys = VAR_11 = FUNC_7( sizeof( demux_sys_t ) );
    if( !VAR_11 )
        return VAR_7;

    VAR_11->pi_seektable = ((void*)0);


    FUNC_5( &VAR_12, VAR_0, VAR_5 );
    VAR_12.audio.i_channels = FUNC_2( &VAR_14[6] );
    VAR_12.audio.i_bitspersample = FUNC_2( &VAR_14[8] );
    VAR_12.audio.i_rate = FUNC_1( &VAR_14[10] );
    if( VAR_12.audio.i_rate == 0 ||
        VAR_12.audio.i_rate > ( 1 << 20 ) )
    {
        FUNC_11( VAR_10, "Wrong sample rate" );
        goto error;
    }

    VAR_11->i_datalength = FUNC_1( &VAR_14[14] );
    VAR_11->i_framelength = VAR_4 * VAR_12.audio.i_rate;

    VAR_11->i_totalframes = VAR_11->i_datalength / VAR_11->i_framelength +
                          ((VAR_11->i_datalength % VAR_11->i_framelength) != 0);
    VAR_11->i_currentframe = 0;
    if( (VAR_3 - 22 - 4) / sizeof(uint32_t) < VAR_11->i_totalframes )
        goto error;

    VAR_16 = sizeof(uint32_t)*VAR_11->i_totalframes;


    VAR_12.i_extra = 22 + VAR_16 + 4;
    VAR_12.p_extra = VAR_15 = FUNC_7( VAR_12.i_extra );
    if( !VAR_15 )
    {
        VAR_12.i_extra = 0;
        goto error;
    }

    FUNC_9( VAR_15, VAR_14, 22 );
    VAR_15 += 22;
    if( FUNC_13( VAR_10->s, VAR_15, VAR_16 )
             != VAR_16 )
        goto error;

    VAR_11->pi_seektable = FUNC_3( VAR_11->i_totalframes, sizeof(uint32_t) );
    if( !VAR_11->pi_seektable )
        goto error;
    for( uint32_t VAR_17 = 0; VAR_17 < VAR_11->i_totalframes; VAR_17++ )
    {
        VAR_11->pi_seektable[VAR_17] = FUNC_1( VAR_15 );
        VAR_15 += 4;
    }

    if( 4 != FUNC_13( VAR_10->s, VAR_15, 4 ) )
        goto error;
    VAR_15 += 4;

    VAR_11->p_es = FUNC_6( VAR_10->out, &VAR_12 );
    VAR_11->i_start = VAR_15 - (uint8_t *)VAR_12.p_extra;
    FUNC_4( &VAR_12 );

    return VAR_8;
error:
    FUNC_4( &VAR_12 );
    FUNC_0( VAR_9 );
    return VAR_6;
}
