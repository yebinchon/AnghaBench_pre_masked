
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwAttribs; } ;
typedef int TCHAR ;
typedef TYPE_1__* PDNODE ;
typedef long LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int,long) ;
 scalar_t__ VAR_8 ;

VOID FUNC_7()
{
    HWND VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    PDNODE VAR_14;
    DWORD VAR_15;
    TCHAR VAR_16[VAR_7 * 2];


    for (VAR_9 = FUNC_3(VAR_8, VAR_1);
         VAR_9;
         VAR_9 = FUNC_3(VAR_9, VAR_2))
    {
       if ((VAR_10 = FUNC_4(VAR_9)))
       {
           VAR_11 = FUNC_0(VAR_10, VAR_3);





           VAR_12 = (INT)FUNC_6(VAR_11, VAR_5, 0, 0L);
           for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
           {
               FUNC_6(VAR_11, VAR_6, VAR_13, (LPARAM)&VAR_14);




               FUNC_2(VAR_14, VAR_16);
               if ((VAR_15 = FUNC_1(VAR_16)) != VAR_4)
               {
                   VAR_14->dwAttribs = VAR_15;
               }
           }

           FUNC_5(VAR_11, ((void*)0), VAR_0);
       }
    }
}
