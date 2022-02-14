
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {int dummy; } ;


 int FUNC_0 (int) ;
 struct conn* FUNC_1 (int *) ;
 struct conn* FUNC_2 (struct conn*,int ) ;
 int FUNC_3 (struct conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_4(void)
{
    struct conn *VAR_3, *VAR_4;

    for (VAR_3 = FUNC_1(&VAR_1); VAR_3 != ((void*)0);
         VAR_3 = VAR_4, VAR_2--) {
        FUNC_0(VAR_2 > 0);
        VAR_4 = FUNC_2(VAR_3, VAR_0);
        FUNC_3(VAR_3);
    }
    FUNC_0(VAR_2 == 0);
}
