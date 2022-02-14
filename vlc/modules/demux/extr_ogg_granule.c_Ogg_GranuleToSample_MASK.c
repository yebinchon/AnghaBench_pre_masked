
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ogg_int64_t ;
struct TYPE_6__ {int b_old; } ;
struct TYPE_7__ {TYPE_1__ dirac; } ;
struct TYPE_8__ {int i_codec; } ;
struct TYPE_9__ {int i_granule_shift; TYPE_2__ special; int b_oggds; int i_first_frame_index; TYPE_3__ fmt; } ;
typedef TYPE_4__ logical_stream_t ;
typedef int int64_t ;
__attribute__((used)) static int64_t FUNC_0( const logical_stream_t *VAR_0, int64_t VAR_1 )
{
    switch( VAR_0->fmt.i_codec )
    {
        case 130:
            if( VAR_0->i_first_frame_index == 0 && !VAR_0->b_oggds )
                VAR_1++;

        case 137:
        case 134:
        {
            ogg_int64_t VAR_2 = VAR_1 >> VAR_0->i_granule_shift;
            ogg_int64_t VAR_3 = VAR_1 - ( VAR_2 << VAR_0->i_granule_shift );
            return VAR_2 + VAR_3;
        }
        case 128:
        case 133:
            return VAR_1 >> VAR_0->i_granule_shift;
        case 136:
            if( VAR_0->special.dirac.b_old )
                return (VAR_1 >> 30) + (VAR_1 & 0x3FFFFFFF);
            else
                return (VAR_1 >> 31);
        case 132:
        case 129:
        case 131:
        case 135:
            return VAR_1 ;
        default:
            return VAR_1;
    }
}
