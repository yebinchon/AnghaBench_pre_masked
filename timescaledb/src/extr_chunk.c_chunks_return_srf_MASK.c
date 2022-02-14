
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64 ;
typedef int TupleDesc ;
struct TYPE_7__ {int table_id; } ;
struct TYPE_6__ {size_t call_cntr; size_t max_calls; scalar_t__ user_fctx; } ;
typedef int FunctionCallInfo ;
typedef TYPE_1__ FuncCallContext ;
typedef int Datum ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static Datum
FUNC_8(FunctionCallInfo VAR_3)
{
 FuncCallContext *VAR_4;
 uint64 VAR_5;
 TupleDesc VAR_6;
 Chunk **VAR_7;


 if (FUNC_0())
 {


  if (FUNC_7(VAR_3, ((void*)0), &VAR_6) != VAR_2)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("function returning record called in context "
       "that cannot accept type record")));
 }


 VAR_4 = FUNC_1();

 VAR_5 = VAR_4->call_cntr;
 VAR_7 = (Chunk **) VAR_4->user_fctx;


 if (VAR_5 < VAR_4->max_calls)
  FUNC_3(VAR_4, VAR_7[VAR_5]->table_id);
 else
  FUNC_2(VAR_4);
}
