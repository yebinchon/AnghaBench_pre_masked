
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Size ;
typedef int Relation ;
typedef int DimensionSlice ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 () ;

void
FUNC_5(DimensionSlice **VAR_2, Size VAR_3)
{
 Catalog *VAR_4 = FUNC_4();
 Relation VAR_5;
 Size VAR_6;

 VAR_5 = FUNC_3(FUNC_0(VAR_4, VAR_0), VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_1(VAR_5, VAR_2[VAR_6]);

 FUNC_2(VAR_5, VAR_1);
}
