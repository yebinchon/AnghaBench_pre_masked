
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tts_nvalid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_11__ {struct TYPE_11__* parent; } ;
struct TYPE_10__ {int * segment_info; int * compressor; } ;
struct TYPE_9__ {scalar_t__ rows_compressed_into_current_value; int n_input_columns; TYPE_7__* per_row_ctx; TYPE_3__* per_column; } ;
typedef TYPE_2__ RowCompressor ;
typedef TYPE_3__ PerColumn ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void
FUNC_5(RowCompressor *VAR_0, TupleTableSlot *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->rows_compressed_into_current_value == 0);
 FUNC_0(VAR_0->n_input_columns <= VAR_1->tts_nvalid);

 for (VAR_2 = 0; VAR_2 < VAR_0->n_input_columns; VAR_2++)
 {
  PerColumn *VAR_3 = &VAR_0->per_column[VAR_2];
  Datum VAR_4;
  bool VAR_5;

  if (VAR_3->segment_info == ((void*)0))
   continue;

  FUNC_0(VAR_3->compressor == ((void*)0));

  FUNC_2(VAR_0->per_row_ctx->parent);

  VAR_4 = FUNC_4(VAR_1, FUNC_1(VAR_2), &VAR_5);
  FUNC_3(VAR_3->segment_info, VAR_4, VAR_5);
  FUNC_2(VAR_0->per_row_ctx);
 }
}
