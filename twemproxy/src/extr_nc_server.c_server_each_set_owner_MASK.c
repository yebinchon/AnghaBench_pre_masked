
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int dummy; } ;
struct server {struct server_pool* owner; } ;
typedef int rstatus_t ;


 int VAR_0 ;

__attribute__((used)) static rstatus_t
FUNC_0(void *VAR_1, void *VAR_2)
{
    struct server *VAR_3 = VAR_1;
    struct server_pool *VAR_4 = VAR_2;

    VAR_3->owner = VAR_4;

    return VAR_0;
}
