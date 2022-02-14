
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int gapfill_typid; int subslot_time; int time_index; int * subslot; } ;
typedef TYPE_1__ GapFillState ;
typedef int Datum ;
typedef int CustomScanState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_7(GapFillState *VAR_2)
{
 Datum VAR_3;
 bool VAR_4;
 TupleTableSlot *VAR_5 = FUNC_4((CustomScanState *) VAR_2);

 if (!VAR_5)
  return ((void*)0);

 VAR_2->subslot = VAR_5;
 VAR_3 = FUNC_6(VAR_5, FUNC_0(VAR_2->time_index), &VAR_4);
 if (VAR_4)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("invalid time_bucket_gapfill argument: ts cannot be NULL")));

 VAR_2->subslot_time = FUNC_5(VAR_3, VAR_2->gapfill_typid);

 return VAR_5;
}
