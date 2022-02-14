
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int,char,int **,int**,int*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static List *
FUNC_4(ArrayType *VAR_3)
{
 Datum *VAR_4;
 bool *VAR_5;
 int VAR_6;
 List *VAR_7 = VAR_1;
 int VAR_8;

 FUNC_1(VAR_3, VAR_2, -1, 0, 'i', &VAR_4, &VAR_5, &VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  if (VAR_5[VAR_8])
   FUNC_2(VAR_0, "unexpected NULL in name list");


  VAR_7 = FUNC_3(VAR_7, FUNC_0(VAR_4[VAR_8]));
 }

 return VAR_7;
}
