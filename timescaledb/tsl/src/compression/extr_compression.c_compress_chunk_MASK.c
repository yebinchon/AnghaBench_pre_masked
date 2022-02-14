
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16 ;
typedef int Tuplesortstate ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_5__ {int natts; } ;
typedef int RowCompressor ;
typedef int Relation ;
typedef int Oid ;
typedef int ColumnCompressionInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int * FUNC_3 (int ,int const**,int,int*,int const***) ;
 int * FUNC_4 (int ,int,int const**) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int,int const**,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

void
FUNC_12(Oid VAR_1, Oid VAR_2, const ColumnCompressionInfo **VAR_3,
      int VAR_4)
{
 int VAR_5;
 const ColumnCompressionInfo **VAR_6;






 Relation VAR_7 = FUNC_6(VAR_1, VAR_0);





 Relation VAR_8 = FUNC_6(VAR_2, VAR_0);


 int16 *VAR_9 = FUNC_3(VAR_1,
               VAR_3,
               VAR_4,
               &VAR_5,
               &VAR_6);

 TupleDesc VAR_10 = FUNC_2(VAR_7);
 TupleDesc VAR_11 = FUNC_2(VAR_8);

 Tuplesortstate *VAR_12 = FUNC_4(VAR_7, VAR_5, VAR_6);

 RowCompressor VAR_13;

 FUNC_0(VAR_4 <= VAR_10->natts);
 FUNC_0(VAR_4 <= VAR_11->natts);

 FUNC_9(&VAR_13,
      VAR_10,
      VAR_8,
      VAR_4,
      VAR_3,
      VAR_9,
      VAR_11->natts);

 FUNC_7(&VAR_13, VAR_12, VAR_10);

 FUNC_8(&VAR_13);

 FUNC_11(VAR_12);

 FUNC_10(VAR_1);



 FUNC_5(VAR_2, 0, 0);

 FUNC_1(VAR_8);
 FUNC_1(VAR_7);
}
