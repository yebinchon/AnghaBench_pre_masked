
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_stream_type; } ;
typedef TYPE_2__ tsmux_stream_t ;
struct TYPE_6__ {int i_visible_height; int i_visible_width; } ;
struct TYPE_8__ {TYPE_1__ video; } ;
typedef TYPE_3__ es_format_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( uint8_t *VAR_1, uint8_t *VAR_2,
                               const tsmux_stream_t *VAR_3, const es_format_t *VAR_4 )
{
    uint8_t VAR_5 = 0x00;

    switch( VAR_3->i_stream_type )
    {
        case 0x01:
        case 0x02:
        case 0x80:
            VAR_5 = 0x01;
            break;

        case 0x24:
        case 0x10:
        case 0x1b:
        case 0xA0:
        case 0xd1:
            VAR_5 = 0x16;
            break;

        default:
            break;
    }

    if( VAR_5 == 0x01 && VAR_4->video.i_visible_height > 468 &&
                          VAR_4->video.i_visible_width > 720 )
    {
         VAR_5 = 0x11;
    }
    else if( VAR_5 == 0x16 && VAR_4->video.i_visible_height > 468 &&
                               VAR_4->video.i_visible_width > 720 )
    {
         VAR_5 = 0x19;
    }

    if( VAR_5 != 0x00 )
    {
        if( *VAR_1 != VAR_0 || VAR_5 > *VAR_2 )
        {
            *VAR_2 = VAR_5;
            *VAR_1 = VAR_0;
        }
        return;
    }

    if( *VAR_1 != VAR_0 )
    {

        switch( VAR_3->i_stream_type )
        {
            case 0x03:
            case 0x04:
                VAR_5 = 0x02;
                break;

            case 0x06:
            case 0x0f:
            case 0x81:
            case 0x83:
                VAR_5 = 0x0A;
                break;

            default:
                break;
        }

        if( VAR_5 > *VAR_2 )
            *VAR_2 = VAR_5;
    }
}
