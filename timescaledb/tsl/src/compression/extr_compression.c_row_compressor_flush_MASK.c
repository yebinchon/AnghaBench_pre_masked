
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int16 ;
struct TYPE_10__ {void* (* finish ) (TYPE_4__*) ;} ;
struct TYPE_9__ {size_t min_metadata_attr_offset; size_t max_metadata_attr_offset; int * min_max_metadata_builder; TYPE_1__* segment_info; TYPE_4__* compressor; } ;
struct TYPE_8__ {size_t n_input_columns; size_t* uncompressed_col_to_compressed_col; int* compressed_is_null; size_t count_metadata_column_offset; scalar_t__ rows_compressed_into_current_value; size_t sequence_num_metadata_column_offset; scalar_t__ sequence_num; int per_row_ctx; void** compressed_values; TYPE_3__* per_column; int bistate; int compressed_table; } ;
struct TYPE_7__ {int is_null; int typ_by_val; void* val; } ;
typedef TYPE_2__ RowCompressor ;
typedef TYPE_3__ PerColumn ;
typedef int HeapTuple ;
typedef TYPE_4__ Compressor ;
typedef int CommandId ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,void**,int*) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_15(RowCompressor *VAR_3, CommandId VAR_4, bool VAR_5)
{
 int16 VAR_6;
 HeapTuple VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->n_input_columns; VAR_6++)
 {
  PerColumn *VAR_8 = &VAR_3->per_column[VAR_6];
  Compressor *VAR_9;
  int16 VAR_10;
  if (VAR_8->compressor == ((void*)0) && VAR_8->segment_info == ((void*)0))
   continue;

  VAR_9 = VAR_8->compressor;
  VAR_10 = VAR_3->uncompressed_col_to_compressed_col[VAR_6];

  FUNC_0(VAR_10 >= 0);

  if (VAR_9 != ((void*)0))
  {
   void *VAR_11;
   FUNC_0(VAR_8->segment_info == ((void*)0));

   VAR_11 = VAR_9->finish(VAR_9);


   VAR_3->compressed_is_null[VAR_10] = VAR_11 == ((void*)0);
   if (VAR_11 != ((void*)0))
    VAR_3->compressed_values[VAR_10] =
     FUNC_4(VAR_11);

   if (VAR_8->min_max_metadata_builder != ((void*)0))
   {
    FUNC_0(VAR_8->min_metadata_attr_offset >= 0);
    FUNC_0(VAR_8->max_metadata_attr_offset >= 0);

    if (!FUNC_10(VAR_8->min_max_metadata_builder))
    {
     FUNC_0(VAR_11 != ((void*)0));
     VAR_3->compressed_is_null[VAR_8->min_metadata_attr_offset] = 0;
     VAR_3->compressed_is_null[VAR_8->max_metadata_attr_offset] = 0;

     VAR_3->compressed_values[VAR_8->min_metadata_attr_offset] =
      FUNC_12(VAR_8->min_max_metadata_builder);
     VAR_3->compressed_values[VAR_8->max_metadata_attr_offset] =
      FUNC_11(VAR_8->min_max_metadata_builder);
    }
    else
    {
     FUNC_0(VAR_11 == ((void*)0));
     VAR_3->compressed_is_null[VAR_8->min_metadata_attr_offset] = 1;
     VAR_3->compressed_is_null[VAR_8->max_metadata_attr_offset] = 1;
    }
   }
  }
  else if (VAR_8->segment_info != ((void*)0))
  {
   VAR_3->compressed_values[VAR_10] = VAR_8->segment_info->val;
   VAR_3->compressed_is_null[VAR_10] = VAR_8->segment_info->is_null;
  }
 }

 VAR_3->compressed_values[VAR_3->count_metadata_column_offset] =
  FUNC_2(VAR_3->rows_compressed_into_current_value);
 VAR_3->compressed_is_null[VAR_3->count_metadata_column_offset] = 0;

 VAR_3->compressed_values[VAR_3->sequence_num_metadata_column_offset] =
  FUNC_2(VAR_3->sequence_num);
 VAR_3->compressed_is_null[VAR_3->sequence_num_metadata_column_offset] = 0;


 if (VAR_3->sequence_num > VAR_1 - VAR_2)
  FUNC_6(VAR_0, "sequence id overflow");

 VAR_3->sequence_num += VAR_2;

 VAR_7 = FUNC_7(FUNC_5(VAR_3->compressed_table),
            VAR_3->compressed_values,
            VAR_3->compressed_is_null);
 FUNC_8(VAR_3->compressed_table,
    VAR_7,
    VAR_4,
    0 ,
    VAR_3->bistate);



 for (VAR_6 = 0; VAR_6 < VAR_3->n_input_columns; VAR_6++)
 {
  PerColumn *VAR_12 = &VAR_3->per_column[VAR_6];
  int16 VAR_13;
  if (VAR_12->compressor == ((void*)0) && VAR_12->segment_info == ((void*)0))
   continue;

  VAR_13 = VAR_3->uncompressed_col_to_compressed_col[VAR_6];
  FUNC_0(VAR_13 >= 0);
  if (VAR_3->compressed_is_null[VAR_13])
   continue;


  if (VAR_12->segment_info != ((void*)0) && !VAR_5)
   continue;

  if (VAR_12->compressor != ((void*)0) || !VAR_12->segment_info->typ_by_val)
   FUNC_9(FUNC_1(VAR_3->compressed_values[VAR_13]));

  if (VAR_12->min_max_metadata_builder != ((void*)0))
  {

   if (!VAR_3->compressed_is_null[VAR_12->min_metadata_attr_offset])
   {
    VAR_3->compressed_values[VAR_12->min_metadata_attr_offset] = 0;
    VAR_3->compressed_is_null[VAR_12->min_metadata_attr_offset] = 1;
   }
   if (!VAR_3->compressed_is_null[VAR_12->max_metadata_attr_offset])
   {
    VAR_3->compressed_values[VAR_12->max_metadata_attr_offset] = 0;
    VAR_3->compressed_is_null[VAR_12->max_metadata_attr_offset] = 1;
   }
   FUNC_13(VAR_12->min_max_metadata_builder);
  }

  VAR_3->compressed_values[VAR_13] = 0;
  VAR_3->compressed_is_null[VAR_13] = 1;
 }

 VAR_3->rows_compressed_into_current_value = 0;
 FUNC_3(VAR_3->per_row_ctx);
}
