
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {scalar_t__ i_physical_channels; scalar_t__ i_channels; scalar_t__ i_format; scalar_t__ i_rate; scalar_t__ i_chan_mode; } ;
struct TYPE_10__ {TYPE_5__ audio; } ;
struct TYPE_9__ {TYPE_5__ audio; } ;
struct TYPE_11__ {void* pf_audio_filter; TYPE_4__* p_sys; TYPE_2__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {int channel_map; } ;
typedef TYPE_4__ filter_sys_t ;
typedef int channel_map ;
typedef TYPE_5__ audio_format_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (TYPE_5__ const*) ;
 int FUNC_1 (int const) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int* VAR_12 ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_13 )
{
    filter_t *VAR_14 = (filter_t *)VAR_13;
    const audio_format_t *VAR_15 = &VAR_14->fmt_in.audio;
    const audio_format_t *VAR_16 = &VAR_14->fmt_out.audio;

    if( VAR_15->i_physical_channels == 0 )
    {
        FUNC_1( VAR_15->i_channels > 0 );
        if( VAR_16->i_physical_channels == 0 )
            return VAR_9;
        if( FUNC_0( VAR_16 ) == VAR_15->i_channels )
        {
            VAR_14->pf_audio_filter = VAR_5;
            return VAR_11;
        }
        else
        {
            if( VAR_15->i_channels > VAR_3 )
                FUNC_4(VAR_14, "%d channels will be dropped.",
                         VAR_15->i_channels - VAR_3);
            VAR_14->pf_audio_filter = VAR_6;
            return VAR_11;
        }
    }

    if( VAR_15->i_format != VAR_16->i_format
     || VAR_15->i_rate != VAR_16->i_rate
     || VAR_15->i_format != VAR_8 )
        return VAR_9;




    if( VAR_15->i_physical_channels == VAR_16->i_physical_channels
     && VAR_15->i_chan_mode == VAR_16->i_chan_mode )
        return VAR_9;

    VAR_14->p_sys = ((void*)0);

    if ( FUNC_0( VAR_16 ) == 1
      && FUNC_0( VAR_15 ) == 1 )
    {
        VAR_14->pf_audio_filter = VAR_5;
        return VAR_11;
    }


    uint16_t VAR_17 = VAR_15->i_physical_channels;
    uint16_t VAR_18 = VAR_16->i_physical_channels;


    int VAR_19 = 0;
    int VAR_20[VAR_3];
    for( unsigned VAR_21 = 0; VAR_21 < VAR_3; ++VAR_21 )
        VAR_20[VAR_21] = VAR_12[VAR_21] & VAR_17 ?
                       VAR_19++ : -1;

    unsigned VAR_22 = 0;
    int VAR_23[VAR_3];
    for( unsigned VAR_24 = 0; VAR_24 < VAR_3; ++VAR_24 )
    {
        const uint32_t VAR_25 = VAR_12[VAR_24];
        if( !( VAR_25 & VAR_18 ) )
            continue;

        if( FUNC_0( VAR_15 ) == 1 )
        {

            if( VAR_25 & VAR_0 )
                VAR_23[VAR_22] = 0;
            else
                VAR_23[VAR_22] = -1;
        }
        else if( VAR_20[VAR_24] != -1 )
        {

            FUNC_1( VAR_25 & VAR_17 );
            VAR_23[VAR_22] = VAR_20[VAR_24];
        }
        else
        {
            if( ( VAR_25 & VAR_1 )
             && !( VAR_18 & VAR_2 ) )
            {

                FUNC_1( VAR_24 + 2 < VAR_3 );
                FUNC_1( VAR_12[VAR_24 + 2] & VAR_2 );
                VAR_23[VAR_22] = VAR_20[VAR_24 + 2];
            }
            else if( ( VAR_25 & VAR_2 )
                  && !( VAR_18 & VAR_1 ) )
            {

                FUNC_1( (int) VAR_24 - 2 >= 0 );
                FUNC_1( VAR_12[VAR_24 - 2] & VAR_1 );
                VAR_23[VAR_22] = VAR_20[VAR_24 - 2];
            }
            else
                VAR_23[VAR_22] = -1;
        }
        VAR_22++;
    }

    for( unsigned VAR_26 = 0; VAR_26 < FUNC_0( VAR_16 ); ++VAR_26 )
    {
        FUNC_1( VAR_23[VAR_26] == -1
             || (unsigned) VAR_23[VAR_26] < FUNC_0( VAR_15 ) );
    }


    if( FUNC_0( VAR_16 ) == FUNC_0( VAR_15 ) )
    {



        bool VAR_27 = 1;
        for( unsigned VAR_28 = 0; VAR_28 < FUNC_0( VAR_16 ); ++VAR_28 )
            if( VAR_23[VAR_28] == -1 || (unsigned) VAR_23[VAR_28] != VAR_28 )
            {
                VAR_27 = 0;
                break;
            }
        if( VAR_27 )
        {
            VAR_14->pf_audio_filter = VAR_5;
            return VAR_11;
        }
    }

    filter_sys_t *VAR_29 = FUNC_2( sizeof(*VAR_29) );
    if( !VAR_29 )
        return VAR_10;
    VAR_14->p_sys = VAR_29;
    FUNC_3( VAR_29->channel_map, VAR_23, sizeof(VAR_23) );

    if( FUNC_0( VAR_16 ) > FUNC_0( VAR_15 ) )
        VAR_14->pf_audio_filter = VAR_7;
    else
        VAR_14->pf_audio_filter = VAR_4;

    return VAR_11;
}
