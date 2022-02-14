
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_4__ {int range_end; int range_start; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef TYPE_2__ DimensionSlice ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,int*) ;

__attribute__((used)) static Datum
FUNC_6(FunctionCallInfo VAR_2, DimensionSlice *VAR_3)
{
 TupleDesc VAR_4;
 Datum VAR_5[2];
 bool VAR_6[2] = { 0 };
 HeapTuple VAR_7;

 if (FUNC_4(VAR_2, ((void*)0), &VAR_4) != VAR_1)
  FUNC_3(VAR_0, "function returning record called in context that cannot accept type record");

 VAR_4 = FUNC_0(VAR_4);

 VAR_5[0] = FUNC_2(VAR_3->fd.range_start);
 VAR_5[1] = FUNC_2(VAR_3->fd.range_end);
 VAR_7 = FUNC_5(VAR_4, VAR_5, VAR_6);

 return FUNC_1(VAR_7);
}
