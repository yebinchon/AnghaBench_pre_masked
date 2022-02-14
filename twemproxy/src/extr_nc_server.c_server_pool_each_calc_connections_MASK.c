
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int server_connections; int server; } ;
struct context {int max_nsconn; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static rstatus_t
FUNC_1(void *VAR_1, void *VAR_2)
{
    struct server_pool *VAR_3 = VAR_1;
    struct context *VAR_4 = VAR_2;

    VAR_4->max_nsconn += VAR_3->server_connections * FUNC_0(&VAR_3->server);
    VAR_4->max_nsconn += 1;

    return VAR_0;
}
