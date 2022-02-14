
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ l_mem ;
struct TYPE_3__ {scalar_t__ GCdebt; int totalbytes; } ;
typedef TYPE_1__ global_State ;



void FUNC_0 (global_State *VAR_0, l_mem VAR_1) {
  VAR_0->totalbytes -= (VAR_1 - VAR_0->GCdebt);
  VAR_0->GCdebt = VAR_1;
}
