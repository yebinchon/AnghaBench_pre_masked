
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct server_pool {int dummy; } ;
struct server {int dummy; } ;
struct context {int dummy; } ;
struct conn {int dummy; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct context*,struct conn*) ;
 struct conn* FUNC_1 (struct server*) ;
 scalar_t__ FUNC_2 (struct context*,struct server*,struct conn*) ;
 struct server* FUNC_3 (struct server_pool*,int *,int ) ;
 scalar_t__ FUNC_4 (struct server_pool*) ;

struct conn *
FUNC_5(struct context *VAR_1, struct server_pool *VAR_2, uint8_t *VAR_3,
                 uint32_t VAR_4)
{
    rstatus_t VAR_5;
    struct server *VAR_6;
    struct conn *VAR_7;

    VAR_5 = FUNC_4(VAR_2);
    if (VAR_5 != VAR_0) {
        return ((void*)0);
    }


    VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_7 = FUNC_1(VAR_6);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5 = FUNC_2(VAR_1, VAR_6, VAR_7);
    if (VAR_5 != VAR_0) {
        FUNC_0(VAR_1, VAR_7);
        return ((void*)0);
    }

    return VAR_7;
}
