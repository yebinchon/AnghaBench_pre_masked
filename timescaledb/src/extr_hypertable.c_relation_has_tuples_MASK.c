
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int HeapScanDesc ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(Relation VAR_1)
{
 HeapScanDesc VAR_2 = FUNC_2(VAR_1, FUNC_0(), 0, ((void*)0));
 bool VAR_3 = FUNC_1(FUNC_4(VAR_2, VAR_0));

 FUNC_3(VAR_2);
 return VAR_3;
}
