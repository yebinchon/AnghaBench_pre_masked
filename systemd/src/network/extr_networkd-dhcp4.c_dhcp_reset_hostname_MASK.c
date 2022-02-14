
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int manager; int dhcp_lease; TYPE_1__* network; } ;
struct TYPE_6__ {char* dhcp_hostname; int dhcp_use_hostname; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char const**) ;

__attribute__((used)) static int FUNC_4(Link *VAR_0) {
        const char *VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        if (!VAR_0->network->dhcp_use_hostname)
                return 0;

        VAR_1 = VAR_0->network->dhcp_hostname;
        if (!VAR_1)
                (void) FUNC_3(VAR_0->dhcp_lease, &VAR_1);

        if (!VAR_1)
                return 0;


        VAR_2 = FUNC_2(VAR_0->manager, ((void*)0));
        if (VAR_2 < 0)
                return FUNC_1(VAR_0, VAR_2, "DHCP error: Failed to reset transient hostname: %m");

        return 0;
}
