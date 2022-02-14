
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_9__ {scalar_t__ attisdropped; } ;
struct TYPE_8__ {int natts; } ;
typedef int RewriteState ;
typedef int HeapTuple ;
typedef int Datum ;


 TYPE_6__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int*) ;
 int FUNC_2 (TYPE_1__*,int *,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(HeapTuple VAR_0, TupleDesc VAR_1, TupleDesc VAR_2, Datum *VAR_3,
       bool *VAR_4, RewriteState VAR_5)
{
 HeapTuple VAR_6;
 int VAR_7;

 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);


 for (VAR_7 = 0; VAR_7 < VAR_2->natts; VAR_7++)
 {
  if (FUNC_0(VAR_2, VAR_7)->attisdropped)
   VAR_4[VAR_7] = 1;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);


 FUNC_4(VAR_5, VAR_0, VAR_6);

 FUNC_3(VAR_6);
}
