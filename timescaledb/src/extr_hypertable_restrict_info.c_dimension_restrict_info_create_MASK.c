
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int base; } ;
struct TYPE_8__ {int base; } ;
struct TYPE_7__ {int type; } ;
typedef int DimensionRestrictInfo ;
typedef TYPE_1__ Dimension ;




 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static DimensionRestrictInfo *
FUNC_3(Dimension *VAR_1)
{
 switch (VAR_1->type)
 {
  case 128:
   return &FUNC_1(VAR_1)->base;
  case 129:
   return &FUNC_0(VAR_1)->base;
  default:
   FUNC_2(VAR_0, "unknown dimension type");
   return ((void*)0);
 }
}
