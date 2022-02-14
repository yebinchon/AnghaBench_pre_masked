
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ strategy; int * partitions; } ;
struct TYPE_6__ {int use_or; int values; } ;
typedef scalar_t__ StrategyNumber ;
typedef int List ;
typedef TYPE_1__ DimensionValues ;
typedef TYPE_2__ DimensionRestrictInfoClosed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(DimensionRestrictInfoClosed *VAR_3, StrategyNumber VAR_4,
           DimensionValues *VAR_5)
{
 List *VAR_6;
 bool VAR_7 = 0;

 if (VAR_4 != VAR_0)
 {
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_5->values);


 if (FUNC_2(VAR_6) > 1 && !VAR_5->use_or)
 {
  VAR_3->strategy = VAR_4;
  VAR_3->partitions = VAR_2;
  return 1;
 }

 if (VAR_3->strategy == VAR_1)

 {
  VAR_3->partitions = VAR_6;
  VAR_3->strategy = VAR_4;
  VAR_7 = 1;
 }
 else
 {

  if (VAR_3->partitions == VAR_2)
   return 1;




  VAR_3->partitions = FUNC_1(VAR_3->partitions, VAR_6);


  VAR_7 = 1;
 }
 return VAR_7;
}
