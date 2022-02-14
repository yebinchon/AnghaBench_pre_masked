
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int LPDWORD ;
typedef int LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int ) ;

LONG FUNC_3(HKEY VAR_1, LPCWSTR VAR_2, LPCWSTR VAR_3, LPDWORD VAR_4, PVOID VAR_5, LPDWORD VAR_6)
{
 DWORD VAR_7;
 HKEY VAR_8;

 if ((VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_8)) == VAR_0)
 {
   VAR_7 = FUNC_2(VAR_8, VAR_3, ((void*)0), VAR_4, VAR_5, VAR_6);

   FUNC_0(VAR_8);
 }

 return VAR_7;
}
