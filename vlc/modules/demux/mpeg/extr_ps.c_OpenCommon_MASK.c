
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* vlc_tick_t ;
typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_7__ {int s; int pf_control; int pf_demux; TYPE_2__* p_sys; int b_preparsing; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int i_mux_rate; int i_time_track_index; int i_start_byte; int i_lastpack_byte; int b_lost_sync; int b_have_pack; int b_bad_scr; int b_seekable; int format; int tk; int psm; scalar_t__ updates; scalar_t__ current_seekpoint; scalar_t__ current_title; scalar_t__ i_aob_mlp_count; void* i_current_pts; void* i_length; scalar_t__ i_scr_track_id; void* i_scr; void* i_first_scr; void* i_pack_scr; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int const*,...) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int const*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int const**,int) ;
 int FUNC_12 (int ,int *,int) ;
 void* FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14( vlc_object_t *VAR_14, bool VAR_15 )
{
    demux_t *VAR_16 = (demux_t*)VAR_14;
    demux_sys_t *VAR_17;

    const uint8_t *VAR_18;
    ssize_t VAR_19 = 0;
    ssize_t VAR_20 = 0;
    ssize_t VAR_21 = 0;
    unsigned VAR_22 = VAR_6;
    int VAR_23 = VAR_4;
    int VAR_24 = 0;
    vlc_tick_t VAR_25 = VAR_13;

    VAR_19 = FUNC_11( VAR_16->s, &VAR_18, 16 );
    if( VAR_19 < 16 )
    {
        FUNC_4( VAR_16, "cannot peek" );
        return VAR_10;
    }

    if( !FUNC_3( VAR_18, "PSMF", 4 ) &&
        (FUNC_0( &VAR_18[4] ) & 0x30303030) == 0x30303030 )
    {
        VAR_19 = FUNC_11( VAR_16->s, &VAR_18, 100 );
        if( VAR_19 < 100 )
            return VAR_10;
        VAR_21 = VAR_20 = FUNC_1( &VAR_18[10] );
        VAR_23 = VAR_5;
        FUNC_5( VAR_16, "Detected PSMF-PS header");
        VAR_24 = FUNC_0( &VAR_18[96] );
        if( FUNC_0( &VAR_18[86] ) > 0 )
            VAR_25 = FUNC_13( FUNC_0( &VAR_18[92] ), FUNC_0( &VAR_18[86] ));
    }
    else if( !FUNC_3( VAR_18, "RIFF", 4 ) && !FUNC_3( &VAR_18[8], "CDXA", 4 ) )
    {
        VAR_23 = VAR_1;
        VAR_22 = 0;
        VAR_21 = VAR_0;
        FUNC_5( VAR_16, "Detected CDXA-PS" );

    }
    else if( VAR_15 )
    {
        FUNC_6( VAR_16, "this does not look like an MPEG PS stream, "
                  "continuing anyway" );
        VAR_22 = 0;
    }

    for( unsigned VAR_26=0; VAR_26<VAR_22; VAR_26++ )
    {
        if( VAR_19 < VAR_20 + 16 )
        {
            VAR_19 = FUNC_11( VAR_16->s, &VAR_18, VAR_20 + 16 );
            if( VAR_19 < VAR_20 + 16 )
                return VAR_10;
        }

        const uint8_t VAR_27[3] = { 0x00, 0x00, 0x01 };
        const uint8_t *VAR_28 = &VAR_18[VAR_20];
        if( FUNC_3( VAR_28, VAR_27, 3 ) ||
           ( (VAR_28[3] & 0xB0) != 0xB0 &&
            !(VAR_28[3] >= 0xC0 && VAR_28[3] <= 0xEF) &&
              VAR_28[3] != VAR_8 &&
              VAR_28[3] != VAR_7 ) )
            return VAR_10;

        ssize_t VAR_29 = FUNC_7( VAR_28, 16 );
        if( VAR_29 < 5 )
            return VAR_10;
        VAR_20 += VAR_29;
    }

    if( VAR_21 > 0 && !VAR_16->b_preparsing &&
        FUNC_12( VAR_16->s, ((void*)0), VAR_21 ) != VAR_21 )
        return VAR_10;


    VAR_16->p_sys = VAR_17 = FUNC_2( sizeof( demux_sys_t ) );
    if( !VAR_17 ) return VAR_11;

    VAR_16->pf_demux = VAR_3;
    VAR_16->pf_control = VAR_2;


    VAR_17->i_mux_rate = VAR_24;
    VAR_17->i_pack_scr = VAR_13;
    VAR_17->i_first_scr = VAR_13;
    VAR_17->i_scr = VAR_13;
    VAR_17->i_scr_track_id = 0;
    VAR_17->i_length = VAR_25;
    VAR_17->i_current_pts = VAR_13;
    VAR_17->i_time_track_index = -1;
    VAR_17->i_aob_mlp_count = 0;
    VAR_17->i_start_byte = VAR_21;
    VAR_17->i_lastpack_byte = VAR_21;

    VAR_17->b_lost_sync = 0;
    VAR_17->b_have_pack = 0;
    VAR_17->b_bad_scr = 0;
    VAR_17->b_seekable = 0;
    VAR_17->format = VAR_23;
    VAR_17->current_title = 0;
    VAR_17->current_seekpoint = 0;
    VAR_17->updates = 0;

    FUNC_10( VAR_16->s, VAR_9, &VAR_17->b_seekable );

    FUNC_8( &VAR_17->psm );
    FUNC_9( VAR_17->tk );



    return VAR_12;
}
