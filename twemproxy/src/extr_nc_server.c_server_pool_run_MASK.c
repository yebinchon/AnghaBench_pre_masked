
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int dist_type; int server; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct server_pool*) ;
 int FUNC_4 (struct server_pool*) ;
 int FUNC_5 (struct server_pool*) ;

rstatus_t
FUNC_6(struct server_pool *VAR_2)
{
    FUNC_0(FUNC_2(&VAR_2->server) != 0);

    switch (VAR_2->dist_type) {
    case 130:
        return FUNC_3(VAR_2);

    case 129:
        return FUNC_4(VAR_2);

    case 128:
        return FUNC_5(VAR_2);

    default:
        FUNC_1();
        return VAR_0;
    }

    return VAR_1;
}
