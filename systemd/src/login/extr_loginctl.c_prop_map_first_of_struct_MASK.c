
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char const**) ;
 int FUNC_3 (int *,char const,void*) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(sd_bus *VAR_1, const char *VAR_2, sd_bus_message *VAR_3, sd_bus_error *VAR_4, void *VAR_5) {
        const char *VAR_6;
        int VAR_7;

        VAR_7 = FUNC_2(VAR_3, ((void*)0), &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_3(VAR_3, VAR_6[0], VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_4(VAR_3, VAR_6+1);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_1(VAR_3);
        if (VAR_7 < 0)
                return VAR_7;

        return 0;
}
