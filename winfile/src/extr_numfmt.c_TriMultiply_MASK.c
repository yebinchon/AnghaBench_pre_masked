
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int DWORD ;


 int FUNC_0 (int,int) ;

LARGE_INTEGER
FUNC_1(DWORD VAR_0, DWORD VAR_1, DWORD VAR_2)
{
   LARGE_INTEGER VAR_3;

   VAR_3.QuadPart = FUNC_0(VAR_0, VAR_1);
   VAR_3.QuadPart = VAR_3.QuadPart * VAR_2;

   return VAR_3;
}
