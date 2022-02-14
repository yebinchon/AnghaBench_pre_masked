
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int16 ;
struct TYPE_3__ {size_t num_compressed_columns; int bistate; int mycid; int out_rel; int decompressed_is_nulls; int decompressed_datums; int out_desc; int * per_compressed_cols; } ;
typedef TYPE_1__ RowDecompressor ;
typedef int HeapTuple ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(RowDecompressor *VAR_0)
{



 bool VAR_1 = 0;
 bool VAR_2 = 0;
 do
 {

  VAR_2 = 1;
  for (int16 VAR_3 = 0; VAR_3 < VAR_0->num_compressed_columns; VAR_3++)
  {
   bool VAR_4 =
    FUNC_3(&VAR_0->per_compressed_cols[VAR_3],
           VAR_0->decompressed_datums,
           VAR_0->decompressed_is_nulls);
   VAR_2 &= VAR_4;
  }




  if (!VAR_2 || !VAR_1)
  {

   HeapTuple VAR_5 = FUNC_0(VAR_0->out_desc,
                 VAR_0->decompressed_datums,
                 VAR_0->decompressed_is_nulls);
   FUNC_2(VAR_0->out_rel,
      VAR_5,
      VAR_0->mycid,
      0 ,
      VAR_0->bistate);

   FUNC_1(VAR_5);
   VAR_1 = 1;
  }
 } while (!VAR_2);
}
