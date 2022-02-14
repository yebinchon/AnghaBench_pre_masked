
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Tuplesortstate ;
typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_7__ {scalar_t__ rows_compressed_into_current_value; int per_row_ctx; } ;
typedef TYPE_1__ RowCompressor ;
typedef int MemoryContext ;
typedef int CommandId ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,int *,int *) ;

__attribute__((used)) static void
FUNC_11(RowCompressor *VAR_1, Tuplesortstate *VAR_2,
          TupleDesc VAR_3)
{
 CommandId VAR_4 = FUNC_2(1);
 TupleTableSlot *VAR_5 = FUNC_3(VAR_3);
 bool VAR_6;
 bool VAR_7 = 1;

 for (VAR_6 = FUNC_10(VAR_2,
           1 ,

           0 ,

           VAR_5,
           ((void*)0) );
   VAR_6;
   VAR_6 = FUNC_10(VAR_2,
           1 ,

           0 ,

           VAR_5,
           ((void*)0) ))
 {
  bool VAR_8, VAR_9;
  MemoryContext VAR_10;
  FUNC_9(VAR_5);
  VAR_10 = FUNC_4(VAR_1->per_row_ctx);


  if (VAR_7)
  {
   FUNC_8(VAR_1, VAR_5);
   VAR_7 = 0;
  }

  VAR_8 = FUNC_7(VAR_1, VAR_5);
  VAR_9 =
   VAR_1->rows_compressed_into_current_value >= VAR_0;
  if (VAR_9 || VAR_8)
  {
   if (VAR_1->rows_compressed_into_current_value > 0)
    FUNC_6(VAR_1, VAR_4, VAR_8);
   if (VAR_8)
    FUNC_8(VAR_1, VAR_5);
  }

  FUNC_5(VAR_1, VAR_5);
  FUNC_4(VAR_10);
  FUNC_0(VAR_5);
 }

 if (VAR_1->rows_compressed_into_current_value > 0)
  FUNC_6(VAR_1, VAR_4, 1);

 FUNC_1(VAR_5);
}
