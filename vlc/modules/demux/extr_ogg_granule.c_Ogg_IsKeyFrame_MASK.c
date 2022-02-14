
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ bytes; int* packet; int granulepos; } ;
typedef TYPE_4__ ogg_packet ;
struct TYPE_9__ {int b_old; } ;
struct TYPE_10__ {TYPE_2__ dirac; } ;
struct TYPE_8__ {int i_codec; } ;
struct TYPE_12__ {TYPE_3__ special; TYPE_1__ fmt; scalar_t__ b_oggds; } ;
typedef TYPE_5__ logical_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





bool FUNC_0( const logical_stream_t *VAR_3, const ogg_packet *VAR_4 )
{
    if ( VAR_3->b_oggds )
    {
        return ( VAR_4->bytes > 0 && VAR_4->packet[0] & VAR_0 );
    }
    else switch ( VAR_3->fmt.i_codec )
    {
        case 129:
        case 131:
            if ( VAR_4->bytes <= 0 || VAR_4->packet[0] & VAR_2 )
                return 0;
            else
                return !( VAR_4->packet[0] & VAR_1 );
        case 128:
            return ( ( ( VAR_4->granulepos >> 3 ) & 0x07FFFFFF ) == 0 );
        case 130:
            if( VAR_3->special.dirac.b_old )
                return (VAR_4->granulepos & 0x3FFFFFFF) == 0;
            else
                return (VAR_4->granulepos & 0xFF8000FF) == 0;
        default:
            return 1;
    }
}
