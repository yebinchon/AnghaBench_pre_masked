
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int rsinfo ;
typedef scalar_t__ fmNodePtr ;
typedef int TupleTableSlot ;
struct TYPE_10__ {int natts; } ;
struct TYPE_9__ {scalar_t__ resultinfo; } ;
struct TYPE_8__ {int econtext; TYPE_3__* setDesc; int setResult; int allowedModes; int type; } ;
typedef TYPE_1__ ReturnSetInfo ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__ FunctionCallInfoData ;
typedef int EState ;
typedef int Datum ;
typedef int CollectedCommand ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__,int *,int,int ,int *,int *) ;
 int VAR_1 ;
 int * FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,TYPE_3__*,int *,int*) ;
 int * FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int ,int,int,int *) ;

List *
FUNC_14(void)
{
 ReturnSetInfo VAR_6;
 FunctionCallInfoData VAR_7;
 TupleTableSlot *VAR_8;
 EState *VAR_9 = FUNC_0();
 List *VAR_10 = VAR_2;

 FUNC_8(VAR_7, &VAR_5, 1, VAR_1, ((void*)0), ((void*)0));
 FUNC_10(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_4;
 VAR_6.allowedModes = VAR_3;
 VAR_6.econtext = FUNC_1(VAR_9);
 VAR_7.resultinfo = (fmNodePtr) &VAR_6;

 FUNC_7(&VAR_7);

 VAR_8 = FUNC_9(VAR_6.setDesc);

 while (FUNC_13(VAR_6.setResult, 1, 0, VAR_8))
 {
  HeapTuple VAR_11 = FUNC_4(VAR_8);
  CollectedCommand *VAR_12;
  Datum VAR_13[VAR_0];
  bool VAR_14[VAR_0];

  FUNC_11(VAR_11, VAR_6.setDesc, VAR_13, VAR_14);

  if (VAR_6.setDesc->natts > 8 && !VAR_14[8])
  {
   VAR_12 = (CollectedCommand *) FUNC_2(VAR_13[8]);
   VAR_10 = FUNC_12(VAR_10, VAR_12);
  }
 }

 FUNC_6(VAR_6.econtext, 0);
 FUNC_5(VAR_9);
 FUNC_3(VAR_8);

 return VAR_10;
}
