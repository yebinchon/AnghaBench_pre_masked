
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int server; int preconnect; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static rstatus_t
FUNC_1(void *VAR_2, void *VAR_3)
{
    rstatus_t VAR_4;
    struct server_pool *VAR_5 = VAR_2;

    if (!VAR_5->preconnect) {
        return VAR_0;
    }

    VAR_4 = FUNC_0(&VAR_5->server, VAR_1, ((void*)0));
    if (VAR_4 != VAR_0) {
        return VAR_4;
    }

    return VAR_0;
}
