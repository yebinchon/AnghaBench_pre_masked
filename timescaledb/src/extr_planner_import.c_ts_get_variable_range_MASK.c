
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_8__ {int statsTuple; int atttype; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_9__ {int nvalues; int * values; } ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_2__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (TYPE_1__*,int ) ;

bool
FUNC_11(PlannerInfo *VAR_5, VariableStatData *VAR_6, Oid VAR_7, Datum *VAR_8,
       Datum *VAR_9)
{
 Datum VAR_10 = 0;
 Datum VAR_11 = 0;
 bool VAR_12 = 0;
 int16 VAR_13;
 bool VAR_14;
 Oid VAR_15;
 AttStatsSlot VAR_16;
 int VAR_17;
 if (!FUNC_2(VAR_6->statsTuple))
 {

  return 0;
 }
 if (!FUNC_10(VAR_6, (VAR_15 = FUNC_8(VAR_7))))
  return 0;

 FUNC_9(VAR_6->atttype, &VAR_13, &VAR_14);
 if (FUNC_7(&VAR_16,
       VAR_6->statsTuple,
       VAR_3,
       VAR_7,
       VAR_0))
 {
  if (VAR_16.nvalues > 0)
  {
   VAR_10 = FUNC_3(VAR_16.values[0], VAR_14, VAR_13);
   VAR_11 = FUNC_3(VAR_16.values[VAR_16.nvalues - 1], VAR_14, VAR_13);
   VAR_12 = 1;
  }
  FUNC_5(&VAR_16);
 }
 else if (FUNC_7(&VAR_16, VAR_6->statsTuple, VAR_3, VAR_2, 0))
 {
  FUNC_5(&VAR_16);
  return 0;
 }







 if (FUNC_7(&VAR_16,
       VAR_6->statsTuple,
       VAR_4,
       VAR_2,
       VAR_0))
 {
  bool VAR_18 = 0;
  bool VAR_19 = 0;
  FmgrInfo VAR_20;

  FUNC_4(VAR_15, &VAR_20);

  for (VAR_17 = 0; VAR_17 < VAR_16.nvalues; VAR_17++)
  {
   if (!VAR_12)
   {
    VAR_10 = VAR_11 = VAR_16.values[VAR_17];
    VAR_18 = VAR_19 = VAR_12 = 1;
    continue;
   }
   if (FUNC_0(
     FUNC_1(&VAR_20, VAR_1, VAR_16.values[VAR_17], VAR_10)))
   {
    VAR_10 = VAR_16.values[VAR_17];
    VAR_18 = 1;
   }
   if (FUNC_0(
     FUNC_1(&VAR_20, VAR_1, VAR_11, VAR_16.values[VAR_17])))
   {
    VAR_11 = VAR_16.values[VAR_17];
    VAR_19 = 1;
   }
  }
  if (VAR_18)
   VAR_10 = FUNC_3(VAR_10, VAR_14, VAR_13);
  if (VAR_19)
   VAR_11 = FUNC_3(VAR_11, VAR_14, VAR_13);
  FUNC_5(&VAR_16);
 }

 *VAR_8 = VAR_10;
 *VAR_9 = VAR_11;
 return VAR_12;
}
