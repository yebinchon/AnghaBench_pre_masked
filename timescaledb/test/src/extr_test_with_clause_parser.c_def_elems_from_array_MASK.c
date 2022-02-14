
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typalign; int typbyval; int typlen; int element_type; } ;
typedef int List ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_1__ ArrayMetaState ;
typedef int ArrayIterator ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int **,int *,int*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int *,int *,int *) ;
 int * FUNC_7 (int *,int ) ;

__attribute__((used)) static List *
FUNC_8(ArrayType *VAR_2)
{
 ArrayMetaState VAR_3 = { .element_type = VAR_1 };
 ArrayIterator VAR_4;
 Datum VAR_5;
 bool VAR_6;
 List *VAR_7 = VAR_0;

 FUNC_6(VAR_3.element_type,
       &VAR_3.typlen,
       &VAR_3.typbyval,
       &VAR_3.typalign);
 VAR_4 = FUNC_2(VAR_2, 1, &VAR_3);

 while (FUNC_3(VAR_4, &VAR_5, &VAR_6))
 {
  Datum *VAR_8;
  int VAR_9;
  ArrayType *VAR_10 = FUNC_1(VAR_5);
  FUNC_0(!VAR_6);
  FUNC_4(VAR_10,
        VAR_1,
        VAR_3.typlen,
        VAR_3.typbyval,
        VAR_3.typalign,
        &VAR_8,
        ((void*)0),
        &VAR_9);
  VAR_7 = FUNC_7(VAR_7, FUNC_5(VAR_8, VAR_9));
 }
 return VAR_7;
}
