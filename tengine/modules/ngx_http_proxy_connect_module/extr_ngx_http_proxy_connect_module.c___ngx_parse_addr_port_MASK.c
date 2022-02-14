
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {int sockaddr; } ;
typedef TYPE_1__ ngx_addr_t ;
typedef int in_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,char*,size_t) ;
 char* FUNC_3 (char*,char*,char) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_pool_t *VAR_2, ngx_addr_t *VAR_3, u_char *VAR_4,
    size_t VAR_5)
{
    u_char *VAR_6, *VAR_7;
    size_t VAR_8;
    ngx_int_t VAR_9, VAR_10;

    VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_9 != VAR_0) {
        return VAR_9;
    }

    VAR_7 = VAR_4 + VAR_5;
    {
        VAR_6 = FUNC_3(VAR_4, VAR_7, ':');

        if (VAR_6 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_6++;
    VAR_8 = VAR_7 - VAR_6;

    VAR_10 = FUNC_1(VAR_6, VAR_8);

    if (VAR_10 < 1 || VAR_10 > 65535) {
        return VAR_0;
    }

    VAR_5 -= VAR_8 + 1;

    VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_9 != VAR_1) {
        return VAR_9;
    }

    FUNC_0(VAR_3->sockaddr, (in_port_t) VAR_10);

    return VAR_1;
}
