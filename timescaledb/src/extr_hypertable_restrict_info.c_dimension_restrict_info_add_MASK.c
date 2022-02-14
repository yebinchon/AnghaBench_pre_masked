
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dimension; } ;
struct TYPE_4__ {int type; } ;
typedef int DimensionValues ;
typedef int DimensionRestrictInfoOpen ;
typedef int DimensionRestrictInfoClosed ;
typedef TYPE_2__ DimensionRestrictInfo ;




 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_3(DimensionRestrictInfo *VAR_1, int VAR_2, DimensionValues *VAR_3)
{
 switch (VAR_1->dimension->type)
 {
  case 128:
   return FUNC_1((DimensionRestrictInfoOpen *) VAR_1,
             VAR_2,
             VAR_3);
  case 129:
   return FUNC_0((DimensionRestrictInfoClosed *) VAR_1,
               VAR_2,
               VAR_3);
  default:
   FUNC_2(VAR_0, "unknown dimension type: %d", VAR_1->dimension->type);

   return 0;
 }
}
