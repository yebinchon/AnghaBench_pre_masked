
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int L; } ;
struct TYPE_24__ {char tok; int * str; TYPE_5__* cts; } ;
struct TYPE_23__ {scalar_t__ u32; int id; } ;
struct TYPE_22__ {scalar_t__ size; int info; } ;
typedef int GCstr ;
typedef TYPE_1__ CType ;
typedef int CTSize ;
typedef TYPE_2__ CPValue ;
typedef TYPE_3__ CPState ;


 char VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,char) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,char) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_1__*) ;
 TYPE_1__* FUNC_13 (TYPE_5__*,TYPE_1__*,int *,int *) ;
 TYPE_1__* FUNC_14 (TYPE_5__*,int ) ;
 int * FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(CPState *VAR_4, CPValue *VAR_5)
{
  for (;;) {
    CType *VAR_6;
    if (FUNC_6(VAR_4, '[')) {
      CPValue VAR_7;
      FUNC_4(VAR_4, &VAR_7);
      VAR_6 = FUNC_14(VAR_4->cts, VAR_5->id);
      if (!FUNC_10(VAR_6->info)) {
 VAR_6 = FUNC_14(VAR_4->cts, VAR_7);
 if (!FUNC_10(VAR_6->info))
   FUNC_1(VAR_4, VAR_6);
      }
      FUNC_0(VAR_4, ']');
      VAR_5->u32 = 0;
    } else if (VAR_4->tok == '.' || VAR_4->tok == VAR_0) {
      CTSize VAR_8;
      CType *VAR_9;
      VAR_6 = FUNC_14(VAR_4->cts, VAR_5->id);
      if (VAR_4->tok == VAR_0) {
 if (!FUNC_10(VAR_6->info))
   FUNC_1(VAR_4, VAR_6);
 VAR_6 = FUNC_14(VAR_4->cts, FUNC_7(VAR_6->info));
      }
      FUNC_5(VAR_4);
      if (VAR_4->tok != VAR_1) FUNC_2(VAR_4, VAR_1);
      if (!FUNC_11(VAR_6->info) || VAR_6->size == VAR_2 ||
   !(VAR_9 = FUNC_13(VAR_4->cts, VAR_6, VAR_4->str, &VAR_8)) ||
   FUNC_8(VAR_9->info)) {
 GCstr *VAR_10 = FUNC_15(VAR_4->cts->L, FUNC_12(VAR_4->cts, VAR_6), ((void*)0));
 FUNC_3(VAR_4, 0, VAR_3, FUNC_16(VAR_10), FUNC_16(VAR_4->str));
      }
      VAR_6 = VAR_9;
      VAR_5->u32 = FUNC_9(VAR_6->info) ? VAR_6->size : 0;
      FUNC_5(VAR_4);
    } else {
      return;
    }
    VAR_5->id = FUNC_7(VAR_6->info);
  }
}
