
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64 ;
typedef int TupleDesc ;
struct TYPE_5__ {int column_name; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ fd; int * partitioning; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__ Dimension ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int64
FUNC_10(Dimension *VAR_3, HeapTuple VAR_4, AttrNumber VAR_5, TupleDesc VAR_6)
{
 Datum VAR_7;
 bool VAR_8;
 Oid VAR_9;

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6, &VAR_8);

 if (((void*)0) != VAR_3->partitioning)
  VAR_7 = FUNC_8(VAR_3->partitioning, VAR_7);

 FUNC_0(VAR_3->type == VAR_0);

 VAR_9 = FUNC_7(VAR_3);

 if (VAR_8)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_5("NULL value in column \"%s\" violates not-null constraint",
      FUNC_1(VAR_3->fd.column_name)),
     FUNC_4("Columns used for time partitioning cannot be NULL")));

 return FUNC_9(VAR_7, VAR_9);
}
