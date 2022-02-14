
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int Manager ;
typedef int InhibitWhat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(
                sd_bus *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                sd_bus_message *VAR_6,
                void *VAR_7,
                sd_bus_error *VAR_8) {

        Manager *VAR_9 = VAR_7;
        InhibitWhat VAR_10;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_9);

        VAR_10 = FUNC_2(VAR_9, FUNC_4(VAR_5, "BlockInhibited") ? VAR_0 : VAR_1);

        return FUNC_3(VAR_6, "s", FUNC_1(VAR_10));
}
