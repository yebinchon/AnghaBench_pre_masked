
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_codec; } ;
struct TYPE_5__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(decoder_t *VAR_1)
{
    return VAR_1->fmt_in.i_codec == VAR_0;
}
