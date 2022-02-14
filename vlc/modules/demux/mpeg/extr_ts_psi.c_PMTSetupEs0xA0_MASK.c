
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* i_height; void* i_visible_height; void* i_width; void* i_visible_width; } ;
struct TYPE_10__ {scalar_t__ i_extra; int b_packetized; scalar_t__ p_extra; TYPE_1__ video; } ;
struct TYPE_9__ {TYPE_3__ fmt; } ;
typedef TYPE_2__ ts_es_t ;
typedef TYPE_3__ es_format_t ;
typedef int dvbpsi_pmt_es_t ;
struct TYPE_11__ {int i_length; int * p_data; } ;
typedef TYPE_4__ dvbpsi_descriptor_t ;
typedef int demux_t ;


 void* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int const*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8( demux_t *VAR_1, ts_es_t *VAR_2,
                           const dvbpsi_pmt_es_t *VAR_3 )
{

    dvbpsi_descriptor_t *VAR_4 = FUNC_1( VAR_3, 0xa0 );
    if( !VAR_4 || VAR_4->i_length < 10 )
    {
        FUNC_7( VAR_1,
                  "private MSCODEC (vlc) without bih private descriptor" );
        return;
    }

    es_format_t *VAR_5 = &VAR_2->fmt;
    FUNC_4( &VAR_2->fmt, VAR_0,
                      FUNC_2( VAR_4->p_data[0], VAR_4->p_data[1],
                                 VAR_4->p_data[2], VAR_4->p_data[3] ) );
    VAR_5->video.i_width = FUNC_0( &VAR_4->p_data[4] );
    VAR_5->video.i_height = FUNC_0( &VAR_4->p_data[6] );
    VAR_5->video.i_visible_width = VAR_5->video.i_width;
    VAR_5->video.i_visible_height = VAR_5->video.i_height;
    VAR_5->i_extra = FUNC_0( &VAR_4->p_data[8] );

    if( VAR_5->i_extra > 0 )
    {
        VAR_5->p_extra = FUNC_5( VAR_5->i_extra );
        if( VAR_5->p_extra )
            FUNC_6( VAR_5->p_extra, &VAR_4->p_data[10],
                    FUNC_3( VAR_5->i_extra, VAR_4->i_length - 10 ) );
        else
            VAR_5->i_extra = 0;
    }



    VAR_5->b_packetized = 1;
}
