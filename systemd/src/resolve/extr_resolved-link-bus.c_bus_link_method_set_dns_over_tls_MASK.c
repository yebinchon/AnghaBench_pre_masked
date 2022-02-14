
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* manager; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_12__ {int polkit_registry; } ;
typedef TYPE_2__ Link ;
typedef scalar_t__ DnsOverTlsMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (int *,int ,char*,char const*) ;
 int FUNC_7 (TYPE_2__*,char*,char const**) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;

int FUNC_10(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Link *VAR_7 = VAR_5;
        const char *VAR_8;
        DnsOverTlsMode VAR_9;
        int VAR_10;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_10 = FUNC_9(VAR_7, VAR_6);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_7(VAR_4, "s", &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_3(VAR_8))
                VAR_9 = VAR_3;
        else {
                VAR_9 = FUNC_2(VAR_8);
                if (VAR_9 < 0)
                        return FUNC_6(VAR_6, VAR_1, "Invalid DNSOverTLS setting: %s", VAR_8);
        }

        VAR_10 = FUNC_1(VAR_4, VAR_0,
                                    "org.freedesktop.resolve1.set-dns-over-tls",
                                    ((void*)0), 1, VAR_2,
                                    &VAR_7->manager->polkit_registry, VAR_6);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        FUNC_5(VAR_7, VAR_9);

        (void) FUNC_4(VAR_7);

        return FUNC_8(VAR_4, ((void*)0));
}
