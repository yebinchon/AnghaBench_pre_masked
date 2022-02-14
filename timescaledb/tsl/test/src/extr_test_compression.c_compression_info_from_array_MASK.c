
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
typedef int compression_info_vec ;
typedef int * TupleDesc ;
struct TYPE_6__ {scalar_t__ element_type; int typalign; int typbyval; int typlen; } ;
struct TYPE_5__ {int t_data; int t_len; } ;
typedef scalar_t__ Oid ;
typedef int HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_2__ ArrayMetaState ;
typedef int ArrayIterator ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (int *,void*) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,int *,int *,int *) ;
 int * FUNC_12 (scalar_t__,int ) ;

__attribute__((used)) static compression_info_vec *
FUNC_13(ArrayType *VAR_1, Oid VAR_2)
{
 ArrayMetaState VAR_3 = {
  .element_type = VAR_2,
 };
 ArrayIterator VAR_4;
 Datum VAR_5;
 bool VAR_6;
 compression_info_vec *VAR_7 = FUNC_10(VAR_0, 0);
 TupleDesc VAR_8 = ((void*)0);

 FUNC_11(VAR_3.element_type,
       &VAR_3.typlen,
       &VAR_3.typbyval,
       &VAR_3.typalign);

 VAR_4 =
  FUNC_7(VAR_1, 0, &VAR_3);

 while (FUNC_8(VAR_4, &VAR_5, &VAR_6))
 {
  HeapTupleHeader VAR_9;
  HeapTupleData VAR_10;

  FUNC_0(!VAR_6);
  VAR_9 = FUNC_1(VAR_5);
  FUNC_0(FUNC_5(VAR_9) == VAR_2);
  if (VAR_8 == ((void*)0))
  {
   int32 VAR_11 = FUNC_4(VAR_9);
   VAR_8 = FUNC_12(VAR_2, VAR_11);
  }

  VAR_10.t_len = FUNC_3(VAR_9);
  VAR_10.t_data = VAR_9;
  FUNC_9(VAR_7, (void *) FUNC_2(&VAR_10));
 }
 if (VAR_8 != ((void*)0))
  FUNC_6(VAR_8);
 return VAR_7;
}
