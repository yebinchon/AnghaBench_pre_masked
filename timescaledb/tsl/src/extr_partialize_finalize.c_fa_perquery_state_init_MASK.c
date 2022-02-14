
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int* argnull; scalar_t__* arg; } ;
struct TYPE_11__ {TYPE_9__ finalfn_fcinfo; int finalfn; int finalfnoid; } ;
struct TYPE_10__ {int internal_deserialfn; TYPE_9__ internal_deserialfn_fcinfo; int recv_fn; int typIOParam; int transtype; int deserialfn; TYPE_9__ deserialfn_fcinfo; int deserialfnoid; int combinefn; TYPE_9__ combfn_fcinfo; int combinefnoid; } ;
struct TYPE_15__ {TYPE_2__ final_meta; TYPE_1__ combine_meta; } ;
struct TYPE_14__ {scalar_t__ aggnumdirectargs; int aggtranstype; scalar_t__ aggfinalextra; int aggdeserialfn; int aggcombinefn; int aggfinalfn; } ;
struct TYPE_13__ {TYPE_3__* flinfo; scalar_t__ context; } ;
struct TYPE_12__ {void* fn_extra; int fn_mcxt; } ;
typedef int Oid ;
typedef int Node ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_4__* FunctionCallInfo ;
typedef TYPE_5__* Form_pg_aggregate ;
typedef TYPE_6__ FAPerQueryState ;
typedef int Expr ;
typedef scalar_t__ Datum ;
typedef int ArrayType ;
typedef int AggState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_9__,int *,int,int ,void*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int * FUNC_8 (int) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int,int ,int ,int ,int ,int **) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ,int *,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int ,int *,int *) ;
 int FUNC_20 (int ) ;
 int * FUNC_21 (int *,size_t*) ;

__attribute__((used)) static FAPerQueryState *
FUNC_22(FunctionCallInfo VAR_3)
{
 char *VAR_4 = FUNC_7(2) ? ((void*)0) : FUNC_5(*FUNC_9(2));
 char *VAR_5 = FUNC_7(3) ? ((void*)0) : FUNC_5(*FUNC_9(3));
 ArrayType *VAR_6 = FUNC_7(4) ? ((void*)0) : FUNC_8(4);
 Oid VAR_7 = FUNC_13(FUNC_10(1));

 Oid VAR_8 = FUNC_15(VAR_4, VAR_5);
 FAPerQueryState *VAR_9;
 HeapTuple VAR_10;
 Form_pg_aggregate VAR_11;
 MemoryContext VAR_12 = VAR_3->flinfo->fn_mcxt;
 MemoryContext VAR_13 = FUNC_4(VAR_12);
 AggState *VAR_14 = (AggState *) VAR_3->context;


 VAR_10 = FUNC_12(VAR_0, VAR_7);
 if (!FUNC_1(VAR_10))
  FUNC_16(VAR_1, "cache lookup failed for aggregate %u", VAR_7);
 VAR_11 = (Form_pg_aggregate) FUNC_0(VAR_10);


 if (VAR_11->aggnumdirectargs != 0)
  FUNC_16(VAR_1,
    "function calls with direct args are not supported by TimescaleDB finalize agg");
 VAR_9 = (FAPerQueryState *) FUNC_3(VAR_12, sizeof(FAPerQueryState));

 VAR_9->final_meta.finalfnoid = VAR_11->aggfinalfn;
 VAR_9->combine_meta.combinefnoid = VAR_11->aggcombinefn;
 VAR_9->combine_meta.deserialfnoid = VAR_11->aggdeserialfn;
 VAR_9->combine_meta.transtype = VAR_11->aggtranstype;
 FUNC_11(VAR_10);


 if (!FUNC_6(VAR_9->combine_meta.combinefnoid))
  FUNC_16(VAR_1,
    "no valid combine function for the aggregate specified in Timescale finalize call");

 FUNC_17(VAR_9->combine_meta.combinefnoid, &VAR_9->combine_meta.combinefn, VAR_12);
 FUNC_2(VAR_9->combine_meta.combfn_fcinfo,
        &VAR_9->combine_meta.combinefn,
        2,
        VAR_8,
        (void *) VAR_14,
        ((void*)0));

 if (FUNC_6(VAR_9->combine_meta.deserialfnoid))

 {
  FUNC_17(VAR_9->combine_meta.deserialfnoid,
       &VAR_9->combine_meta.deserialfn,
       VAR_12);
  FUNC_2(VAR_9->combine_meta.deserialfn_fcinfo,
         &VAR_9->combine_meta.deserialfn,
         1,
         VAR_8,
         (void *) VAR_14,
         ((void*)0));
 }
 else
 {


  FUNC_19(VAR_9->combine_meta.transtype,
          &VAR_9->combine_meta.recv_fn,
          &VAR_9->combine_meta.typIOParam);
  FUNC_17(VAR_9->combine_meta.recv_fn,
       &VAR_9->combine_meta.internal_deserialfn,
       VAR_12);
  FUNC_2(VAR_9->combine_meta.internal_deserialfn_fcinfo,
         &VAR_9->combine_meta.internal_deserialfn,
         3,
         VAR_2,
         ((void*)0),
         ((void*)0));
 }

 if (FUNC_6(VAR_9->final_meta.finalfnoid))
 {
  int VAR_15 = 1;
  Oid *VAR_16 = ((void*)0);
  size_t VAR_17 = 0;
  if (VAR_11->aggfinalextra)
  {
   VAR_16 = FUNC_21(VAR_6, &VAR_17);
   VAR_15 += VAR_17;
  }
  if (VAR_15 != FUNC_20(VAR_9->final_meta.finalfnoid))
   FUNC_16(VAR_1, "invalid number of input types");

  FUNC_17(VAR_9->final_meta.finalfnoid, &VAR_9->final_meta.finalfn, VAR_12);

  FUNC_2(VAR_9->final_meta.finalfn_fcinfo,
         &VAR_9->final_meta.finalfn,
         VAR_15,
         VAR_8,
         (void *) VAR_14,
         ((void*)0));
  if (VAR_17 > 0)
  {
   Expr *VAR_18;
   int VAR_19;
   FUNC_14(VAR_16,
           VAR_15,
           VAR_11->aggtranstype,
           VAR_16[VAR_17 - 1],
           VAR_8,
           VAR_9->final_meta.finalfnoid,
           &VAR_18);
   FUNC_18((Node *) VAR_18, &VAR_9->final_meta.finalfn);
   for (VAR_19 = 1; VAR_19 < VAR_15; VAR_19++)
   {
    VAR_9->final_meta.finalfn_fcinfo.arg[VAR_19] = (Datum) 0;
    VAR_9->final_meta.finalfn_fcinfo.argnull[VAR_19] = 1;
   }
  }
 }
 VAR_3->flinfo->fn_extra = (void *) VAR_9;

 FUNC_4(VAR_13);

 return VAR_9;
}
