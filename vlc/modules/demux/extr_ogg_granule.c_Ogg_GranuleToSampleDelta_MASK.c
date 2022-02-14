
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int b_old; } ;
struct TYPE_8__ {TYPE_2__ dirac; } ;
struct TYPE_6__ {scalar_t__ i_codec; } ;
struct TYPE_9__ {TYPE_3__ special; TYPE_1__ fmt; } ;
typedef TYPE_4__ logical_stream_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int64_t FUNC_0( const logical_stream_t *VAR_1, int64_t VAR_2 )
{
    if( VAR_1->fmt.i_codec == VAR_0 && !VAR_1->special.dirac.b_old )
        return (VAR_2 >> 9) & 0x1fff;
    else
        return -1;
}
