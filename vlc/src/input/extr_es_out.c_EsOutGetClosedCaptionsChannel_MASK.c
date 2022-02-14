
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_channel; } ;
struct TYPE_5__ {TYPE_2__ cc; } ;
struct TYPE_7__ {scalar_t__ i_codec; TYPE_1__ subs; } ;
typedef TYPE_3__ es_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0( const es_format_t *VAR_2 )
{
    int VAR_3;
    if( VAR_2->i_codec == VAR_0 && VAR_2->subs.cc.i_channel < 4 )
        VAR_3 = VAR_2->subs.cc.i_channel;
    else if( VAR_2->i_codec == VAR_1 && VAR_2->subs.cc.i_channel < 64 )
        VAR_3 = VAR_2->subs.cc.i_channel;
    else
        VAR_3 = -1;
    return VAR_3;
}
