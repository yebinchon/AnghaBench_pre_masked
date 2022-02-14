
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Session ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Session *VAR_3 = VAR_1;
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_4 = FUNC_2(VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_1(VAR_0, ((void*)0));
}
