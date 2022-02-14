
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct server {scalar_t__ ns_conn_q; int s_conn_q; } ;
struct array {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct array*) ;
 scalar_t__ FUNC_3 (struct array*) ;
 struct server* FUNC_4 (struct array*) ;

void
FUNC_5(struct array *VAR_0)
{
    uint32_t VAR_1, VAR_2;

    for (VAR_1 = 0, VAR_2 = FUNC_3(VAR_0); VAR_1 < VAR_2; VAR_1++) {
        struct server *VAR_3;

        VAR_3 = FUNC_4(VAR_0);
        FUNC_0(FUNC_1(&VAR_3->s_conn_q) && VAR_3->ns_conn_q == 0);
    }
    FUNC_2(VAR_0);
}
