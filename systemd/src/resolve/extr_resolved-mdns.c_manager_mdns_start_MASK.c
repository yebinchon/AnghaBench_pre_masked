
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mdns_support; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;

int FUNC_6(Manager *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (VAR_2->mdns_support == VAR_1)
                return 0;

        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 == -VAR_0)
                goto eaddrinuse;
        if (VAR_3 < 0)
                return VAR_3;

        if (FUNC_5()) {
                VAR_3 = FUNC_3(VAR_2);
                if (VAR_3 == -VAR_0)
                        goto eaddrinuse;
                if (VAR_3 < 0)
                        return VAR_3;
        }

        return 0;

eaddrinuse:
        FUNC_1("Another mDNS responder prohibits binding the socket to the same port. Turning off mDNS support.");
        VAR_2->mdns_support = VAR_1;
        FUNC_4(VAR_2);

        return 0;
}
