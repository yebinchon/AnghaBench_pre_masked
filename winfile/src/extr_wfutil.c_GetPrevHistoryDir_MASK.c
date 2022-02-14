
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int szDir; int * hwnd; } ;
typedef int LPWSTR ;
typedef int * HWND ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;

BOOL
FUNC_1(BOOL VAR_5, HWND *VAR_6, LPWSTR VAR_7)
{
 DWORD VAR_8 = (VAR_3 + 1) % VAR_1;
 DWORD VAR_9 = (VAR_3 == 0 ? VAR_1 : VAR_3 )- 1;
 DWORD VAR_10 = VAR_5 ? VAR_8 : VAR_9;

 if (VAR_4[VAR_10].hwnd == ((void*)0))
  return VAR_0;

 VAR_3 = VAR_10;

 *VAR_6 = VAR_4[VAR_3].hwnd;
 FUNC_0(VAR_7, VAR_4[VAR_3].szDir);
 return VAR_2;
}
