
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stats_server {int metric; } ;
struct array {int dummy; } ;
struct stats_pool {struct array server; int metric; } ;


 void* FUNC_0 (struct array*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct array*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct array *VAR_0)
{
    uint32_t VAR_1, VAR_2;

    VAR_2 = FUNC_1(VAR_0);

    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
        struct stats_pool *VAR_3 = FUNC_0(VAR_0, VAR_1);
        uint32_t VAR_4, VAR_5;

        FUNC_2(&VAR_3->metric);

        VAR_5 = FUNC_1(&VAR_3->server);
        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
            struct stats_server *VAR_6 = FUNC_0(&VAR_3->server, VAR_4);
            FUNC_2(&VAR_6->metric);
        }
    }
}
