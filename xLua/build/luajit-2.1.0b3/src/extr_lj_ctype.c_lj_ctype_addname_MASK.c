
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__* hash; } ;
struct TYPE_5__ {scalar_t__ next; int name; } ;
typedef scalar_t__ CTypeID1 ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CTState ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(CTState *VAR_0, CType *VAR_1, CTypeID VAR_2)
{
  uint32_t VAR_3 = FUNC_0(FUNC_1(VAR_1->name));
  VAR_1->next = VAR_0->hash[VAR_3];
  VAR_0->hash[VAR_3] = (CTypeID1)VAR_2;
}
