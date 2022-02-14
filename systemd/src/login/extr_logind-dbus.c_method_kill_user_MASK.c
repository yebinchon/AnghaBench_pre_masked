
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int User ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int ,int *,int **) ;
 int FUNC_3 (int *,char*,int *) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;
        uint32_t VAR_4;
        User *VAR_5;
        int VAR_6;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_6 = FUNC_3(VAR_0, "u", &VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_4, VAR_2, &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_1(VAR_0, VAR_5, VAR_2);
}
