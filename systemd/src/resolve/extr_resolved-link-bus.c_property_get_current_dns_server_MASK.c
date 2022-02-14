
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int DnsServer ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int *,int) ;

__attribute__((used)) static int FUNC_2(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        DnsServer *VAR_7;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        VAR_7 = *(DnsServer **) VAR_5;

        return FUNC_1(VAR_4, VAR_7, 0);
}
