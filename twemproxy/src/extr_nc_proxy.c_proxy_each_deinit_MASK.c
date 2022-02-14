
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int ctx; struct conn* p_conn; } ;
struct conn {int (* close ) (int ,struct conn*) ;} ;
typedef int rstatus_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct conn*) ;

rstatus_t
FUNC_1(void *VAR_1, void *VAR_2)
{
    struct server_pool *VAR_3 = VAR_1;
    struct conn *VAR_4;

    VAR_4 = VAR_3->p_conn;
    if (VAR_4 != ((void*)0)) {
        VAR_4->close(VAR_3->ctx, VAR_4);
    }

    return VAR_0;
}
