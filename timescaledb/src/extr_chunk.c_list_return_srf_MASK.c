
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int TupleDesc ;
struct TYPE_5__ {scalar_t__ call_cntr; scalar_t__ max_calls; scalar_t__ user_fctx; } ;
typedef int List ;
typedef int FunctionCallInfo ;
typedef TYPE_1__ FuncCallContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static Datum
FUNC_11(FunctionCallInfo VAR_3)
{
 FuncCallContext *VAR_4;
 uint64 VAR_5;
 TupleDesc VAR_6;
 List *VAR_7;
 Datum VAR_8;


 if (FUNC_1())
 {


  if (FUNC_8(VAR_3, ((void*)0), &VAR_6) != VAR_2)
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("function returning record called in context "
       "that cannot accept type record")));
 }


 VAR_4 = FUNC_2();

 VAR_5 = VAR_4->call_cntr;
 VAR_7 = (List *) VAR_4->user_fctx;


 if (VAR_5 < VAR_4->max_calls)
 {

  VAR_8 = FUNC_0(FUNC_9(VAR_7));
  VAR_4->user_fctx = FUNC_10(VAR_7);
  FUNC_4(VAR_4, VAR_8);
 }
 else
  FUNC_3(VAR_4);
}
