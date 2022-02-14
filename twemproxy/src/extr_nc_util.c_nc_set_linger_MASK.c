
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linger {int l_onoff; int l_linger; } ;
typedef int socklen_t ;
typedef int linger ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,struct linger*,int) ;

int
FUNC_1(int VAR_2, int VAR_3)
{
    struct linger VAR_4;
    socklen_t VAR_5;

    VAR_4.l_onoff = 1;
    VAR_4.l_linger = VAR_3;

    VAR_5 = sizeof(VAR_4);

    return FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4, VAR_5);
}
