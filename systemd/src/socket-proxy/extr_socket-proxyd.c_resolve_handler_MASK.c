
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; } ;
struct TYPE_8__ {int resolve_query; } ;
typedef TYPE_1__ sd_resolve_query ;
typedef TYPE_1__ Connection ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(sd_resolve_query *VAR_0, int VAR_1, const struct addrinfo *VAR_2, Connection *VAR_3) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        if (VAR_1 != 0) {
                FUNC_4("Failed to resolve host: %s", FUNC_3(VAR_1));
                goto fail;
        }

        VAR_3->resolve_query = FUNC_5(VAR_3->resolve_query);

        return FUNC_2(VAR_3, VAR_2->ai_addr, VAR_2->ai_addrlen);

fail:
        FUNC_1(VAR_3);
        return 0;
}
