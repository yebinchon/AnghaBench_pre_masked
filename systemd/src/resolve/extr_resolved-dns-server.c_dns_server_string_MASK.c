
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int server_string; int address; int family; } ;
typedef TYPE_1__ DnsServer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ,int *) ;
 char const* FUNC_3 (int ) ;

const char *FUNC_4(DnsServer *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->server_string)
                (void) FUNC_2(VAR_0->family, &VAR_0->address, FUNC_1(VAR_0), &VAR_0->server_string);

        return FUNC_3(VAR_0->server_string);
}
