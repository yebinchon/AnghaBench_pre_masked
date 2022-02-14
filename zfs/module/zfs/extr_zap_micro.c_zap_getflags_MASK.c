
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zap_ismicro; } ;
typedef TYPE_1__ zap_t ;
typedef int uint64_t ;
struct TYPE_6__ {int zap_flags; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;

uint64_t
FUNC_1(zap_t *VAR_0)
{
 if (VAR_0->zap_ismicro)
  return (0);
 return (FUNC_0(VAR_0)->zap_flags);
}
