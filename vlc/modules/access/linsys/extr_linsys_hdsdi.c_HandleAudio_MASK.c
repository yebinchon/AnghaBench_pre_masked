
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {int i_channel; int * p_es; int i_delay; } ;
typedef TYPE_1__ hdsdi_audio_t ;
struct TYPE_9__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {int i_ablock_size; scalar_t__ i_aincr; scalar_t__ i_next_adate; int i_sample_rate; scalar_t__ i_max_channel; TYPE_1__* p_audios; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ i_length; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int,int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3, const uint8_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;

    for ( int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
    {
        hdsdi_audio_t *VAR_7 = &VAR_5->p_audios[VAR_6];
        if ( VAR_7->i_channel != -1 && VAR_7->p_es != ((void*)0) )
        {
            block_t *VAR_8 = FUNC_1( VAR_5->i_ablock_size );
            if( FUNC_3( !VAR_8 ) )
                return VAR_1;
            FUNC_0( (int16_t *)VAR_8->p_buffer, (const int16_t *)VAR_4,
                        VAR_5->i_ablock_size / 4,
                        VAR_7->i_channel * 2, VAR_5->i_max_channel + 1 );

            VAR_8->i_dts = VAR_8->i_pts
                = VAR_5->i_next_adate + FUNC_4(VAR_7->i_delay,
                                                              VAR_5->i_sample_rate);
            VAR_8->i_length = VAR_5->i_aincr;
            FUNC_2( VAR_3->out, VAR_7->p_es, VAR_8 );
        }
    }
    VAR_5->i_next_adate += VAR_5->i_aincr;
    return VAR_2;
}
