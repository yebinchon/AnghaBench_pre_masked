
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_9__ {int (* append_val ) (TYPE_3__*,int ) ;int (* append_null ) (TYPE_3__*) ;} ;
struct TYPE_8__ {int n_input_columns; int rows_compressed_into_current_value; TYPE_1__* per_column; } ;
struct TYPE_7__ {int * min_max_metadata_builder; TYPE_3__* compressor; } ;
typedef TYPE_2__ RowCompressor ;
typedef int Datum ;
typedef TYPE_3__ Compressor ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_6(RowCompressor *VAR_0, TupleTableSlot *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->n_input_columns; VAR_2++)
 {
  Compressor *VAR_3 = VAR_0->per_column[VAR_2].compressor;
  bool VAR_4;
  Datum VAR_5;


  if (VAR_3 == ((void*)0))
   continue;



  VAR_5 = FUNC_3(VAR_1, FUNC_0(VAR_2), &VAR_4);
  if (VAR_4)
  {
   VAR_3->append_null(VAR_3);
   if (VAR_0->per_column[VAR_2].min_max_metadata_builder != ((void*)0))
    FUNC_1(
     VAR_0->per_column[VAR_2].min_max_metadata_builder);
  }
  else
  {
   VAR_3->append_val(VAR_3, VAR_5);
   if (VAR_0->per_column[VAR_2].min_max_metadata_builder != ((void*)0))
    FUNC_2(VAR_0->per_column[VAR_2]
               .min_max_metadata_builder,
              VAR_5);
  }
 }

 VAR_0->rows_compressed_into_current_value += 1;
}
