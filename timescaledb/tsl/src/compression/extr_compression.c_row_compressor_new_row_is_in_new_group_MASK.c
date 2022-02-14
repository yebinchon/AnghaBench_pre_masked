
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int * segment_info; int * compressor; } ;
struct TYPE_4__ {int n_input_columns; TYPE_2__* per_column; } ;
typedef TYPE_1__ RowCompressor ;
typedef TYPE_2__ PerColumn ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int*) ;

__attribute__((used)) static bool
FUNC_5(RowCompressor *VAR_0, TupleTableSlot *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->n_input_columns; VAR_2++)
 {
  PerColumn *VAR_3 = &VAR_0->per_column[VAR_2];
  Datum VAR_4 = FUNC_2(0);
  bool VAR_5;

  if (VAR_3->segment_info == ((void*)0))
   continue;

  FUNC_0(VAR_3->compressor == ((void*)0));

  VAR_4 = FUNC_4(VAR_1, FUNC_1(VAR_2), &VAR_5);

  if (!FUNC_3(VAR_3->segment_info, VAR_4, VAR_5))
   return 1;
 }

 return 0;
}
