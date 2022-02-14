
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct mbuf* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int *,struct mbuf*) ;
 scalar_t__ VAR_1 ;

void
FUNC_5(void)
{
    while (!FUNC_1(&VAR_0)) {
        struct mbuf *VAR_2 = FUNC_2(&VAR_0);
        FUNC_4(&VAR_0, VAR_2);
        FUNC_3(VAR_2);
        VAR_1--;
    }
    FUNC_0(VAR_1 == 0);
}
