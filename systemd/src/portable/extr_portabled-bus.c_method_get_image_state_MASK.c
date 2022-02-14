
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int PortableState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const**) ;
 int FUNC_5 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char *VAR_3;
        PortableState VAR_4;
        int VAR_5;

        FUNC_0(VAR_0);

        VAR_5 = FUNC_4(VAR_0, "s", &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_1(
                        FUNC_3(VAR_0),
                        VAR_3,
                        0,
                        &VAR_4,
                        VAR_2);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_5(VAR_0, "s", FUNC_2(VAR_4));
}
