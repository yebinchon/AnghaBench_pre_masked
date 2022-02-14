
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int i_stream_type; int i_pid; } ;
typedef TYPE_5__ tsmux_stream_t ;
typedef int ts_mux_standard ;
struct TYPE_16__ {int i_stream_id; int i_es_id; } ;
typedef TYPE_6__ pesmux_stream_t ;
struct TYPE_13__ {int i_id; } ;
struct TYPE_14__ {TYPE_3__ dvb; } ;
struct TYPE_12__ {int i_rate; int i_channels; } ;
struct TYPE_11__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_17__ {int i_codec; TYPE_4__ subs; TYPE_2__ audio; TYPE_1__ video; } ;
typedef TYPE_7__ es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1( ts_mux_standard VAR_4, const es_format_t *VAR_5,
                     tsmux_stream_t *VAR_6, pesmux_stream_t *VAR_7 )
{
    switch( VAR_5->i_codec )
    {


    case 135:
    case 140:
    case 142:

        VAR_6->i_stream_type = 0x02;
        VAR_7->i_stream_id = 0xe0;
        break;
    case 137:
        VAR_6->i_stream_type = 0x10;
        VAR_7->i_stream_id = 0xe0;
        VAR_7->i_es_id = VAR_6->i_pid;
        break;
    case 145:
        VAR_6->i_stream_type = 0x24;
        VAR_7->i_stream_id = 0xe0;
        break;
    case 146:
        VAR_6->i_stream_type = 0x1b;
        VAR_7->i_stream_id = 0xe0;
        break;

    case 147:
    case 148:
    case 128:
    case 129:
    case 130:
    case 153:
    case 154:
    case 155:
    case 143:
        VAR_6->i_stream_type = 0xa0;
        VAR_7->i_stream_id = 0xa0;
        break;
    case 156:

        VAR_7->i_stream_id = (VAR_0 << 8) | 0x60;
        VAR_6->i_stream_type = 0xd1;
        break;
    case 144:
        if( !FUNC_0( VAR_5->video.i_frame_rate,
                                     VAR_5->video.i_frame_rate_base ) )
            return VAR_2;
        VAR_6->i_stream_type = 0x21;
        VAR_7->i_stream_id = 0xbd;
    break;



    case 136:
    case 141:
    case 139:
        VAR_6->i_stream_type = VAR_5->audio.i_rate >= 32000 ? 0x03 : 0x04;
        VAR_7->i_stream_id = 0xc0;
        break;
    case 157:
        VAR_7->i_stream_id = 0xbd;
        if( VAR_4 == VAR_1 )
        {
            VAR_6->i_stream_type = 0x81;
        }
        else
        {
            VAR_6->i_stream_type = 0x06;
        }
        break;
    case 150:
        VAR_6->i_stream_type = 0x83;
        VAR_7->i_stream_id = 0xbd;
        break;
    case 134:
        if (VAR_5->audio.i_channels > 8)
            return VAR_2;
        VAR_7->i_stream_id = 0xbd;
        VAR_7->i_stream_id = 0x06;
        break;
    case 149:
        VAR_7->i_stream_id = 0xbd;
        if( VAR_4 == VAR_1 )
        {

            VAR_6->i_stream_type = 0x87;
        }
        else
        {
            VAR_6->i_stream_type = 0x06;
        }
        break;
    case 152:
        if( VAR_4 == VAR_1 )
        {
            return VAR_2;
        }
        else
        {
            VAR_6->i_stream_type = 0x06;
            VAR_7->i_stream_id = 0xbd;
        }
        break;
    case 138:



        VAR_6->i_stream_type = 0x0f;
        VAR_7->i_stream_id = 0xc0;
        VAR_7->i_es_id = VAR_6->i_pid;
        break;



    case 133:
        VAR_6->i_stream_type = 0x82;
        VAR_7->i_stream_id = 0xbd;
        break;
    case 132:
        VAR_6->i_stream_type = 0x12;
        VAR_7->i_stream_id = 0xfa;
        VAR_7->i_es_id = VAR_6->i_pid;
        break;
    case 151:
        VAR_6->i_stream_type = 0x06;
        VAR_7->i_es_id = VAR_5->subs.dvb.i_id;
        VAR_7->i_stream_id = 0xbd;
        break;
    case 131:
        VAR_6->i_stream_type = 0x06;
        VAR_7->i_stream_id = 0xbd;
        break;

    default:
        return VAR_2;
    }

    return VAR_3;
}
