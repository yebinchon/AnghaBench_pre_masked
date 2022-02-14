
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PBOOL ;
typedef int LPTSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;

DWORD
FUNC_2(LPTSTR VAR_2, LPTSTR VAR_3, PBOOL VAR_4, BOOL VAR_5)
{
   DWORD VAR_6;

   *VAR_4 = VAR_0;
   VAR_6 = FUNC_1(VAR_2,VAR_3, VAR_4, VAR_5);

   if (!VAR_6)
      FUNC_0(VAR_1,VAR_2,VAR_3);

   return VAR_6;
}
