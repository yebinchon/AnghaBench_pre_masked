
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_12__ ;


struct TYPE_26__ {unsigned int i_rate; unsigned int i_channels; unsigned int i_physical_channels; int i_bitspersample; int i_format; } ;
struct TYPE_27__ {int i_codec; TYPE_12__ audio; } ;
struct TYPE_28__ {TYPE_1__ fmt_out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_29__ {scalar_t__ i_header_size; int i_type; int pi_chan_table; int i_chans_to_reorder; int end_date; scalar_t__ b_packetizer; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_30__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_buffer; scalar_t__ i_dts; int p_buffer; void* i_length; } ;
typedef TYPE_4__ block_t ;
struct TYPE_31__ {int i_bits; int i_channels; } ;
typedef TYPE_5__ aob_group_t ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*,unsigned int,TYPE_5__*) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int ) ;
 int FUNC_4 (TYPE_2__*) ;




 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,unsigned int) ;
 int FUNC_6 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,int ) ;
 int FUNC_7 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,unsigned int,int ,int ,int ) ;
 int FUNC_10 (TYPE_12__*) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (int *) ;
 void* FUNC_13 (int *,int) ;
 int FUNC_14 (int *,unsigned int,int) ;
 int FUNC_15 (int *,scalar_t__) ;
 TYPE_4__* FUNC_16 (TYPE_2__*,int) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,char*) ;
 int FUNC_19 (TYPE_2__*,char*) ;
 int FUNC_20 () ;

__attribute__((used)) static block_t *FUNC_21( decoder_t *VAR_6, block_t **VAR_7 )
{
    decoder_sys_t *VAR_8 = VAR_6->p_sys;
    block_t *VAR_9;
    unsigned int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
    int VAR_14;

    if( !VAR_7 || !*VAR_7 ) return ((void*)0);

    VAR_9 = *VAR_7;
    *VAR_7 = ((void*)0);

    if( VAR_9->i_flags & (VAR_0|VAR_1) )
    {
        FUNC_4( VAR_6 );
        if( VAR_9->i_flags & VAR_0 )
        {
            FUNC_11( VAR_9 );
            *VAR_7 = ((void*)0);
            return ((void*)0);
        }
    }


    if( VAR_9->i_pts != VAR_5 &&
        VAR_9->i_pts != FUNC_12( &VAR_8->end_date ) )
    {
        FUNC_15( &VAR_8->end_date, VAR_9->i_pts );
    }

    if( FUNC_12( &VAR_8->end_date ) == VAR_5 )
    {

        FUNC_11( VAR_9 );
        return ((void*)0);
    }

    if( VAR_9->i_buffer <= VAR_8->i_header_size )
    {
        FUNC_18(VAR_6, "frame is too short");
        FUNC_11( VAR_9 );
        return ((void*)0);
    }

    int VAR_15;
    unsigned VAR_16 = 0;
    unsigned VAR_17 = 0;
    aob_group_t VAR_18[2];

    switch( VAR_8->i_type )
    {
    case 129:
        VAR_15 = FUNC_6( &VAR_10, &VAR_12, &VAR_11, &VAR_13,
                           VAR_9->p_buffer );
        break;
    case 131:
        VAR_15 = FUNC_1( &VAR_10, &VAR_12, &VAR_11, &VAR_13, &VAR_17,
                           VAR_18,
                           VAR_9->p_buffer );
        break;
    case 130:
        VAR_15 = FUNC_3( VAR_8, &VAR_10, &VAR_12, &VAR_16, &VAR_11, &VAR_13,
                          VAR_9->p_buffer );
        break;
    case 128:
        VAR_15 = FUNC_7( &VAR_10, &VAR_12, &VAR_11, &VAR_13,
                            VAR_9->p_buffer );
        break;
    default:
        FUNC_8();
    }

    if( VAR_15 || VAR_9->i_buffer <= VAR_8->i_header_size + VAR_17 )
    {
        FUNC_19( VAR_6, "no frame sync or too small frame" );
        FUNC_11( VAR_9 );
        return ((void*)0);
    }


    if( VAR_6->fmt_out.audio.i_rate != VAR_10 )
    {
        FUNC_14( &VAR_8->end_date, VAR_10, 1 );
        FUNC_15( &VAR_8->end_date, VAR_9->i_pts );
    }
    VAR_6->fmt_out.audio.i_rate = VAR_10;
    VAR_6->fmt_out.audio.i_channels = VAR_12;
    VAR_6->fmt_out.audio.i_physical_channels = VAR_11;

    if ( VAR_8->i_type == 131 )
    {
        VAR_14 = (VAR_9->i_buffer - VAR_8->i_header_size - VAR_17) /
                         (
                            ( (VAR_18[0].i_bits / 8) * VAR_18[0].i_channels ) +
                            ( (VAR_18[1].i_bits / 8) * VAR_18[1].i_channels )
                         );
    }
    else
    {
        VAR_14 = (VAR_9->i_buffer - VAR_8->i_header_size - VAR_17) /
                         (VAR_12 + VAR_16) * 8 / VAR_13;
    }

    if( VAR_8->b_packetizer )
    {
        VAR_9->i_pts = VAR_9->i_dts = FUNC_12( &VAR_8->end_date );
        VAR_9->i_length =
            FUNC_13( &VAR_8->end_date, VAR_14 ) -
            VAR_9->i_pts;


        return VAR_9;
    }
    else
    {

        if( VAR_13 == 16 )
        {
            VAR_6->fmt_out.audio.i_format =
            VAR_6->fmt_out.i_codec = VAR_2;
            VAR_6->fmt_out.audio.i_bitspersample = 16;
        }
        else
        {
            VAR_6->fmt_out.audio.i_format =
            VAR_6->fmt_out.i_codec = VAR_3;
            VAR_6->fmt_out.audio.i_bitspersample = 32;
        }
        FUNC_10(&VAR_6->fmt_out.audio);


        block_t *VAR_19;
        if( FUNC_17( VAR_6 ) != VAR_4 ||
           !(VAR_19 = FUNC_16( VAR_6, VAR_14 )) )
        {
            FUNC_11( VAR_9 );
            return ((void*)0);
        }

        VAR_19->i_pts = FUNC_12( &VAR_8->end_date );
        VAR_19->i_length =
            FUNC_13( &VAR_8->end_date, VAR_14 )
            - VAR_19->i_pts;

        VAR_9->p_buffer += VAR_8->i_header_size + VAR_17;
        VAR_9->i_buffer -= VAR_8->i_header_size + VAR_17;

        switch( VAR_8->i_type )
        {
        case 128:
        case 129:
            FUNC_5( VAR_19, VAR_9, VAR_13 );
            break;
        case 131:
            FUNC_0( VAR_19, VAR_9, VAR_13, VAR_18 );
            break;
        default:
            FUNC_20();
        case 130:
            FUNC_2( VAR_19, VAR_9, VAR_14, VAR_12, VAR_16, VAR_13 );
            break;
        }

        if( VAR_8->i_chans_to_reorder )
        {
            FUNC_9( VAR_19->p_buffer, VAR_19->i_buffer,
                                 VAR_8->i_chans_to_reorder, VAR_8->pi_chan_table,
                                 VAR_6->fmt_out.i_codec );
        }

        FUNC_11( VAR_9 );
        return VAR_19;
    }
}
