
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t bpropslot; TYPE_2__* bpropcache; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_5__ {int mode; void* val; void* key; } ;
typedef void* IRRef1 ;
typedef int IRRef ;
typedef TYPE_2__ BPropEntry ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(jit_State *VAR_1, IRRef1 VAR_2, IRRef1 VAR_3, IRRef VAR_4)
{
  uint32_t VAR_5 = VAR_1->bpropslot;
  BPropEntry *VAR_6 = &VAR_1->bpropcache[VAR_5];
  VAR_1->bpropslot = (VAR_5 + 1) & (VAR_0-1);
  VAR_6->key = VAR_2;
  VAR_6->val = VAR_3;
  VAR_6->mode = VAR_4;
}
