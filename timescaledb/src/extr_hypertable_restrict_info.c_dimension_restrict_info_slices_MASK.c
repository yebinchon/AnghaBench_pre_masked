
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dimension; } ;
struct TYPE_4__ {int type; } ;
typedef int DimensionVec ;
typedef int DimensionRestrictInfoOpen ;
typedef int DimensionRestrictInfoClosed ;
typedef TYPE_2__ DimensionRestrictInfo ;




 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static DimensionVec *
FUNC_3(DimensionRestrictInfo *VAR_1)
{
 switch (VAR_1->dimension->type)
 {
  case 128:
   return FUNC_1((DimensionRestrictInfoOpen *) VAR_1);
  case 129:
   return FUNC_0((DimensionRestrictInfoClosed *) VAR_1);
  default:
   FUNC_2(VAR_0, "unknown dimension type");
   return ((void*)0);
 }
}
