
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_3__ {void* compressed_chunk_id; int table_name; int schema_name; void* hypertable_id; void* id; } ;
typedef int HeapTuple ;
typedef TYPE_1__ FormData_chunk ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int const,int const,int *,int*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_6(FormData_chunk *VAR_8, const HeapTuple VAR_9, const TupleDesc VAR_10)
{
 bool VAR_11[VAR_7];
 Datum VAR_12[VAR_7];

 FUNC_4(VAR_9, VAR_10, VAR_12, VAR_11);

 FUNC_0(!VAR_11[FUNC_1(VAR_2)]);
 FUNC_0(!VAR_11[FUNC_1(VAR_1)]);
 FUNC_0(!VAR_11[FUNC_1(VAR_3)]);
 FUNC_0(!VAR_11[FUNC_1(VAR_4)]);

 VAR_8->id = FUNC_2(VAR_12[FUNC_1(VAR_2)]);
 VAR_8->hypertable_id = FUNC_2(VAR_12[FUNC_1(VAR_1)]);
 FUNC_5(&VAR_8->schema_name,
     FUNC_3(VAR_12[FUNC_1(VAR_3)]),
     VAR_6);
 FUNC_5(&VAR_8->table_name,
     FUNC_3(VAR_12[FUNC_1(VAR_4)]),
     VAR_6);

 if (VAR_11[FUNC_1(VAR_0)])
  VAR_8->compressed_chunk_id = VAR_5;
 else
  VAR_8->compressed_chunk_id =
   FUNC_2(VAR_12[FUNC_1(VAR_0)]);
}
