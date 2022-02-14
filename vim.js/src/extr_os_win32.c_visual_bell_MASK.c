
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int member_1; int member_0; } ;
typedef int * LPWORD ;
typedef int DWORD ;
typedef TYPE_1__ COORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,TYPE_1__,int *) ;
 int FUNC_1 (int ,int *,int,TYPE_1__,int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int,TYPE_1__,int *) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
    COORD VAR_4 = {0, 0};
    WORD VAR_5 = ~VAR_2 & 0xff;

    DWORD VAR_6;
    LPWORD VAR_7 = (LPWORD)FUNC_4(VAR_1 * VAR_0 * sizeof(WORD));

    if (VAR_7 == ((void*)0))
 return;
    FUNC_1(VAR_3, VAR_7, VAR_1 * VAR_0,
          VAR_4, &VAR_6);
    FUNC_0(VAR_3, VAR_5, VAR_1 * VAR_0,
          VAR_4, &VAR_6);

    FUNC_2(15);
    FUNC_3(VAR_3, VAR_7, VAR_1 * VAR_0,
    VAR_4, &VAR_6);
    FUNC_5(VAR_7);
}
