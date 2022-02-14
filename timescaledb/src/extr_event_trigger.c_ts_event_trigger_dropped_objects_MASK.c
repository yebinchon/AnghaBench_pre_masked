
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rsinfo ;
typedef scalar_t__ fmNodePtr ;
typedef int TupleTableSlot ;
struct TYPE_7__ {scalar_t__ resultinfo; } ;
struct TYPE_6__ {int econtext; int setDesc; int setResult; int allowedModes; int type; } ;
typedef TYPE_1__ ReturnSetInfo ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__ FunctionCallInfoData ;
typedef int EState ;
typedef int Datum ;



 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__,int *,int ,int ,int *,int *) ;
 int VAR_1 ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int * VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_12 (int ) ;

 int VAR_5 ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int *,int*) ;
 int * FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (char*,char*) ;
 scalar_t__ FUNC_26 (int ,int,int,int *) ;

List *
FUNC_27(void)
{
 ReturnSetInfo VAR_6;
 FunctionCallInfoData VAR_7;
 TupleTableSlot *VAR_8;
 EState *VAR_9 = FUNC_0();
 List *VAR_10 = VAR_2;

 FUNC_9(VAR_7, &VAR_5, 0, VAR_1, ((void*)0), ((void*)0));
 FUNC_11(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_4;
 VAR_6.allowedModes = VAR_3;
 VAR_6.econtext = FUNC_1(VAR_9);
 VAR_7.resultinfo = (fmNodePtr) &VAR_6;

 FUNC_8(&VAR_7);

 VAR_8 = FUNC_10(VAR_6.setDesc);

 while (FUNC_26(VAR_6.setResult, 1, 0, VAR_8))
 {
  HeapTuple VAR_11 = FUNC_5(VAR_8);
  Datum VAR_12[VAR_0];
  bool VAR_13[VAR_0];
  Oid VAR_14;
  char *VAR_15;

  FUNC_14(VAR_11, VAR_6.setDesc, VAR_12, VAR_13);

  VAR_14 = FUNC_3(VAR_12[0]);

  switch (VAR_14)
  {
   case 131:
    VAR_15 = FUNC_12(VAR_12[6]);
    if (VAR_15 != ((void*)0) && FUNC_25(VAR_15, "table constraint") == 0)
    {
     List *VAR_16 = FUNC_13(FUNC_2(VAR_12[10]));

     VAR_10 = FUNC_15(VAR_10,
           FUNC_22(FUNC_18(VAR_16),
                      FUNC_16(VAR_16),
                      FUNC_17(VAR_16)));
    }
    break;
   case 129:
    VAR_15 = FUNC_12(VAR_12[6]);
    if (VAR_15 == ((void*)0))
     break;
    if (FUNC_25(VAR_15, "index") == 0)
    {
     List *VAR_17 = FUNC_13(FUNC_2(VAR_12[10]));

     VAR_10 = FUNC_15(VAR_10,
           FUNC_19(FUNC_17(VAR_17),
                 FUNC_16(VAR_17)));
    }
    else if (FUNC_25(VAR_15, "table") == 0)
    {
     List *VAR_18 = FUNC_13(FUNC_2(VAR_12[10]));

     VAR_10 = FUNC_15(VAR_10,
           FUNC_21(FUNC_17(VAR_18),
                 FUNC_16(VAR_18)));
    }
    else if (FUNC_25(VAR_15, "view") == 0)
    {
     List *VAR_19 = FUNC_13(FUNC_2(VAR_12[10]));

     VAR_10 = FUNC_15(VAR_10,
           FUNC_24(FUNC_17(VAR_19),
                   FUNC_16(VAR_19)));
    }
    break;
   case 130:
   {
    List *VAR_20 = FUNC_13(FUNC_2(VAR_12[10]));

    VAR_10 = FUNC_15(VAR_10, FUNC_20(FUNC_16(VAR_20)));
   }
   break;
   case 128:
   {
    List *VAR_21 = FUNC_13(FUNC_2(VAR_12[10]));

    VAR_10 = FUNC_15(VAR_10,
          FUNC_23(FUNC_18(VAR_21),
                  FUNC_16(VAR_21),
                  FUNC_17(VAR_21)));
   }
   break;

   default:
    break;
  }
 }

 FUNC_7(VAR_6.econtext, 0);
 FUNC_6(VAR_9);
 FUNC_4(VAR_8);

 return VAR_10;
}
