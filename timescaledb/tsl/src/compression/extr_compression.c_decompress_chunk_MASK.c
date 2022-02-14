
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int type_oid; } ;
struct TYPE_10__ {scalar_t__ num_compressed_columns; void* decompressed_datums; void* decompressed_is_nulls; int bistate; int per_compressed_cols; int mycid; int out_rel; TYPE_1__* out_desc; } ;
struct TYPE_9__ {scalar_t__ natts; } ;
typedef int ScanKey ;
typedef TYPE_2__ RowDecompressor ;
typedef int Relation ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int * HeapTuple ;
typedef int HeapScanDesc ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int *,TYPE_1__*,int *,int*) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int ,int ) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (int ,int,int *,int*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_2__*) ;
 TYPE_3__* FUNC_22 (int ) ;

void
FUNC_23(Oid VAR_5, Oid VAR_6)
{
 Relation VAR_7 = FUNC_20(VAR_6, VAR_3);





 Relation VAR_8 = FUNC_20(VAR_5, VAR_3);


 TupleDesc VAR_9 = FUNC_11(VAR_8);
 TupleDesc VAR_10 = FUNC_11(VAR_7);

 Oid VAR_11 = FUNC_22(VAR_1)->type_oid;

 FUNC_1(VAR_9->natts >= VAR_10->natts);
 FUNC_1(FUNC_9(VAR_11));

 {
  RowDecompressor VAR_12 = {
   .per_compressed_cols = FUNC_12(VAR_9,
                VAR_10,
                VAR_6,
                VAR_11),
   .num_compressed_columns = VAR_9->natts,

   .out_desc = VAR_10,
   .out_rel = VAR_7,

   .mycid = FUNC_4(1),
   .bistate = FUNC_3(),


   .decompressed_datums = FUNC_17(sizeof(Datum) * VAR_10->natts),
   .decompressed_is_nulls = FUNC_17(sizeof(bool) * VAR_10->natts),
  };
  Datum *VAR_13 = FUNC_17(sizeof(*VAR_13) * VAR_9->natts);
  bool *VAR_14 = FUNC_17(sizeof(*VAR_14) * VAR_9->natts);

  HeapTuple VAR_15;
  HeapScanDesc VAR_16 = FUNC_13(VAR_8, FUNC_5(), 0, (ScanKey) ((void*)0));
  MemoryContext VAR_17 =
   FUNC_0(VAR_2,
          "decompress chunk per-compressed row",
          VAR_0);

  for (VAR_15 = FUNC_16(VAR_16, VAR_4);
    VAR_15 != ((void*)0);
    VAR_15 = FUNC_16(VAR_16, VAR_4))
  {
   MemoryContext VAR_18;

   FUNC_1(FUNC_6(VAR_15));

   VAR_18 = FUNC_8(VAR_17);

   FUNC_14(VAR_15, VAR_9, VAR_13, VAR_14);
   FUNC_18(VAR_12.per_compressed_cols,
               VAR_9->natts,
               VAR_13,
               VAR_14);

   FUNC_21(&VAR_12);
   FUNC_8(VAR_18);
   FUNC_7(VAR_17);
  }

  FUNC_15(VAR_16);
  FUNC_2(VAR_12.bistate);
 }



 FUNC_19(VAR_6, 0, 0);

 FUNC_10(VAR_7);
 FUNC_10(VAR_8);
}
