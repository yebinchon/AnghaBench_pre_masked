
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int uint16_t ;
struct TYPE_19__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ sout_mux_t ;
struct TYPE_15__ {int member_0; int member_3; int member_5; int member_6; int member_7; int member_4; int member_2; int member_1; } ;
struct TYPE_23__ {int member_2; int Data1; TYPE_1__ member_3; int member_1; int member_0; } ;
struct TYPE_16__ {int wValidBitsPerSample; } ;
struct TYPE_22__ {int cbSize; int wBitsPerSample; int nBlockAlign; void* nAvgBytesPerSec; void* nSamplesPerSec; int nChannels; int wFormatTag; } ;
struct TYPE_14__ {TYPE_9__ SubFormat; void* dwChannelMask; TYPE_2__ Samples; TYPE_8__ Format; } ;
struct TYPE_20__ {int b_used; int i_channel_mask; int i_chans_to_reorder; int b_ext; TYPE_11__ waveformat; void** waveheader2; void** waveheader; int pi_chan_table; } ;
typedef TYPE_6__ sout_mux_sys_t ;
struct TYPE_21__ {TYPE_4__* p_fmt; } ;
typedef TYPE_7__ sout_input_t ;
typedef int WAVEFORMATEXTENSIBLE ;
typedef TYPE_8__ WAVEFORMATEX ;
struct TYPE_17__ {int i_channels; int i_rate; int i_physical_channels; int i_bitspersample; } ;
struct TYPE_18__ {scalar_t__ i_cat; TYPE_3__ audio; int i_codec; } ;
typedef TYPE_9__ GUID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void**,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 void* FUNC_2 (char,char,char,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,int ,int,int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (TYPE_11__*,int ,int) ;
 int FUNC_6 (TYPE_5__*,char*,...) ;
 int* VAR_4 ;
 int VAR_5 ;
 unsigned int* VAR_6 ;

__attribute__((used)) static int FUNC_7( sout_mux_t *VAR_7, sout_input_t *VAR_8 )
{
    GUID VAR_9 = {0, 0, 0x10,{0x80, 0, 0, 0xaa, 0, 0x38, 0x9b, 0x71}};
    sout_mux_sys_t *VAR_10 = VAR_7->p_sys;
    WAVEFORMATEX *VAR_11 = &VAR_10->waveformat.Format;
    int VAR_12;
    uint16_t VAR_13;
    bool VAR_14;

    if( VAR_8->p_fmt->i_cat != VAR_0 )
    {
        FUNC_6( VAR_7, "not an audio stream" );
        return VAR_1;
    }

    if( VAR_10->b_used )
    {
        FUNC_6( VAR_7, "can't add more than 1 stream" );
        return VAR_1;
    }

    FUNC_6( VAR_7, "adding %i input channels, %iHz",
             VAR_8->p_fmt->audio.i_channels,
             VAR_8->p_fmt->audio.i_rate );

    VAR_10->i_channel_mask = 0;
    if( VAR_8->p_fmt->audio.i_physical_channels )
    {
        for( unsigned VAR_15 = 0; VAR_15 < VAR_6[VAR_15]; VAR_15++ )
            if( VAR_8->p_fmt->audio.i_physical_channels & VAR_6[VAR_15])
                VAR_10->i_channel_mask |= VAR_4[VAR_15];

        VAR_10->i_chans_to_reorder =
            FUNC_3( VAR_4, VAR_5,
                                      VAR_10->i_channel_mask,
                                      VAR_10->pi_chan_table );

        FUNC_6( VAR_7, "channel mask: %x, reordering: %u",
                 VAR_10->i_channel_mask, VAR_10->i_chans_to_reorder );
    }

    FUNC_4( VAR_8->p_fmt->i_codec, &VAR_13 );
    VAR_14 = VAR_10->b_ext = VAR_8->p_fmt->audio.i_channels > 2;


    VAR_10->waveheader[0] = FUNC_2('R', 'I', 'F', 'F');
    FUNC_0( &VAR_10->waveheader[1], 0 );
    VAR_10->waveheader[2] = FUNC_2('W', 'A', 'V', 'E');
    VAR_10->waveheader[3] = FUNC_2('f', 'm', 't', ' ');
    FUNC_0( &VAR_10->waveheader[4], VAR_14 ? 40 : 16 );

    VAR_10->waveheader2[0] = FUNC_2('d', 'a', 't', 'a');
    FUNC_0( &VAR_10->waveheader2[1], 0 );


    FUNC_5( &VAR_10->waveformat, 0, sizeof(WAVEFORMATEXTENSIBLE) );
    FUNC_1( &VAR_11->wFormatTag,
            VAR_14 ? VAR_3 : VAR_13 );
    FUNC_1( &VAR_11->nChannels,
            VAR_8->p_fmt->audio.i_channels );
    FUNC_0( &VAR_11->nSamplesPerSec, VAR_8->p_fmt->audio.i_rate );
    VAR_12 = VAR_8->p_fmt->audio.i_channels *
        VAR_8->p_fmt->audio.i_bitspersample / 8;
    FUNC_0( &VAR_11->nAvgBytesPerSec,
             VAR_12 * VAR_8->p_fmt->audio.i_rate );
    FUNC_1( &VAR_11->nBlockAlign, VAR_12 );
    FUNC_1( &VAR_11->wBitsPerSample,
            VAR_8->p_fmt->audio.i_bitspersample );
    FUNC_1( &VAR_11->cbSize, 22 );
    FUNC_1( &VAR_10->waveformat.Samples.wValidBitsPerSample,
            VAR_8->p_fmt->audio.i_bitspersample );
    FUNC_0( &VAR_10->waveformat.dwChannelMask,
             VAR_10->i_channel_mask );
    VAR_10->waveformat.SubFormat = VAR_9;
    VAR_10->waveformat.SubFormat.Data1 = VAR_13;


    VAR_10->b_used = 1;

    return VAR_2;
}
