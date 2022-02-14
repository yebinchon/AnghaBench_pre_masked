
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_3__ {void* compressed_hypertable_id; int compressed; int chunk_target_size; int chunk_sizing_func_name; int chunk_sizing_func_schema; int num_dimensions; int associated_table_prefix; int associated_schema_name; int table_name; int schema_name; void* id; } ;
typedef int HeapTuple ;
typedef TYPE_1__ FormData_hypertable ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int const,int const,int *,int*) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_9(FormData_hypertable *VAR_14, const HeapTuple VAR_15, const TupleDesc VAR_16)
{
 bool VAR_17[VAR_13];
 Datum VAR_18[VAR_13];

 FUNC_7(VAR_15, VAR_16, VAR_18, VAR_17);

 FUNC_0(!VAR_17[FUNC_1(VAR_7)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_9)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_10)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_0)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_1)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_8)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_3)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_2)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_4)]);
 FUNC_0(!VAR_17[FUNC_1(VAR_5)]);

 VAR_14->id = FUNC_4(VAR_18[FUNC_1(VAR_7)]);
 FUNC_8(&VAR_14->schema_name,
     FUNC_6(VAR_18[FUNC_1(VAR_9)]),
     VAR_12);
 FUNC_8(&VAR_14->table_name,
     FUNC_6(VAR_18[FUNC_1(VAR_10)]),
     VAR_12);
 FUNC_8(&VAR_14->associated_schema_name,
     FUNC_6(VAR_18[FUNC_1(VAR_0)]),
     VAR_12);
 FUNC_8(&VAR_14->associated_table_prefix,
     FUNC_6(VAR_18[FUNC_1(VAR_1)]),
     VAR_12);

 VAR_14->num_dimensions =
  FUNC_3(VAR_18[FUNC_1(VAR_8)]);

 FUNC_8(&VAR_14->chunk_sizing_func_schema,
     FUNC_6(VAR_18[FUNC_1(VAR_3)]),
     VAR_12);
 FUNC_8(&VAR_14->chunk_sizing_func_name,
     FUNC_6(VAR_18[FUNC_1(VAR_2)]),
     VAR_12);

 VAR_14->chunk_target_size =
  FUNC_5(VAR_18[FUNC_1(VAR_4)]);
 VAR_14->compressed = FUNC_2(VAR_18[FUNC_1(VAR_5)]);

 if (VAR_17[FUNC_1(VAR_6)])
  VAR_14->compressed_hypertable_id = VAR_11;
 else
  VAR_14->compressed_hypertable_id = FUNC_4(
   VAR_18[FUNC_1(VAR_6)]);
}
