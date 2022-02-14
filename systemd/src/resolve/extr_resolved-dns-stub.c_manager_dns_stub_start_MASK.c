
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dns_stub_listener_mode; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(Manager *VAR_6) {
        const char *VAR_7 = "UDP";
        int VAR_8 = 0;

        FUNC_1(VAR_6);

        if (VAR_6->dns_stub_listener_mode == VAR_0)
                FUNC_2("Not creating stub listener.");
        else
                FUNC_2("Creating stub listener using %s.",
                          VAR_6->dns_stub_listener_mode == VAR_2 ? "UDP" :
                          VAR_6->dns_stub_listener_mode == VAR_1 ? "TCP" :
                          "UDP/TCP");

        if (FUNC_0(VAR_6->dns_stub_listener_mode, VAR_3, VAR_2))
                VAR_8 = FUNC_7(VAR_6);

        if (VAR_8 >= 0 &&
            FUNC_0(VAR_6->dns_stub_listener_mode, VAR_3, VAR_1)) {
                VAR_7 = "TCP";
                VAR_8 = FUNC_6(VAR_6);
        }

        if (FUNC_0(VAR_8, -VAR_4, -VAR_5)) {
                if (VAR_8 == -VAR_4)
                        FUNC_4(VAR_8,
                                          "Another process is already listening on %s socket 127.0.0.53:53.\n"
                                          "Turning off local DNS stub support.", VAR_7);
                else
                        FUNC_4(VAR_8,
                                          "Failed to listen on %s socket 127.0.0.53:53: %m.\n"
                                          "Turning off local DNS stub support.", VAR_7);
                FUNC_5(VAR_6);
        } else if (VAR_8 < 0)
                return FUNC_3(VAR_8, "Failed to listen on %s socket 127.0.0.53:53: %m", VAR_7);

        return 0;
}
