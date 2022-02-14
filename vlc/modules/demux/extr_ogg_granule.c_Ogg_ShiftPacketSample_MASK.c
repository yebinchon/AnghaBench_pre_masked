
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i_framesize; int i_framesperpacket; } ;
struct TYPE_7__ {scalar_t__ b_interlaced; } ;
struct TYPE_10__ {TYPE_3__ speex; TYPE_1__ dirac; } ;
struct TYPE_8__ {scalar_t__ i_cat; scalar_t__ i_codec; } ;
struct TYPE_11__ {TYPE_4__ special; TYPE_2__ fmt; scalar_t__ b_oggds; } ;
typedef TYPE_5__ logical_stream_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int64_t FUNC_0( const logical_stream_t *VAR_4,
                                      int64_t VAR_5, bool VAR_6 )
{




    int64_t VAR_7 = 0;
    if( VAR_4->b_oggds )
        VAR_7 = (VAR_6 ? 0 : 1);
    else
        VAR_7 = (VAR_6 ? -1 : 0);

    if( VAR_4->fmt.i_cat == VAR_1 )
    {
        if( VAR_4->fmt.i_codec == VAR_2 )
            VAR_5 += (VAR_4->special.dirac.b_interlaced ? 1 : 2) * (VAR_7 + 1);
        else
            VAR_5 += VAR_7 * 1;
    }
    else if( VAR_4->fmt.i_cat == VAR_0 )
    {
        if( VAR_4->fmt.i_codec == VAR_3 )
        {
            VAR_5 += VAR_7 *
                        VAR_4->special.speex.i_framesize *
                        VAR_4->special.speex.i_framesperpacket;
        }
        else
        {
            if( VAR_7 != 0 )
                return -1;
        }
    }
    return VAR_5;
}
