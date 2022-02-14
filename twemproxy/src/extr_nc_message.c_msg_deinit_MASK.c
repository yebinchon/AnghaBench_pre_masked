
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;


 int FUNC_0 (int) ;
 struct msg* FUNC_1 (int *) ;
 struct msg* FUNC_2 (struct msg*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct msg*) ;
 scalar_t__ VAR_2 ;

void
FUNC_4(void)
{
    struct msg *VAR_3, *VAR_4;

    for (VAR_3 = FUNC_1(&VAR_0); VAR_3 != ((void*)0);
         VAR_3 = VAR_4, VAR_2--) {
        FUNC_0(VAR_2 > 0);
        VAR_4 = FUNC_2(VAR_3, VAR_1);
        FUNC_3(VAR_3);
    }
    FUNC_0(VAR_2 == 0);
}
