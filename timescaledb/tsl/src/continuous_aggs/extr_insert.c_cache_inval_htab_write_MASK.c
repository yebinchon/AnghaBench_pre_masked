
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HASH_SEQ_STATUS ;
typedef int ContinuousAggsCacheInvalEntry ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
 HASH_SEQ_STATUS VAR_3;
 ContinuousAggsCacheInvalEntry *VAR_4;
 Catalog *VAR_5;

 if (FUNC_3(VAR_2) == 0)
  return;

 VAR_5 = FUNC_6();





 FUNC_0(FUNC_2(VAR_5, VAR_1),
     VAR_0);

 FUNC_4(&VAR_3, VAR_2);
 while ((VAR_4 = FUNC_5(&VAR_3)) != ((void*)0))
  FUNC_1(VAR_4);
}
