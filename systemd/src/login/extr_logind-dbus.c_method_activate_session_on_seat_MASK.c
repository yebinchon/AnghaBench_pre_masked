
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_4__ {int * seat; } ;
typedef TYPE_1__ Session ;
typedef int Seat ;
typedef int Manager ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char const*,int *,int **) ;
 int FUNC_2 (int *,int *,char const*,int *,TYPE_1__**) ;
 int FUNC_3 (int *,int ,char*,char const*,char const*) ;
 int FUNC_4 (int *,char*,char const**,char const**) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        const char *VAR_4, *VAR_5;
        Manager *VAR_6 = VAR_2;
        Session *VAR_7;
        Seat *VAR_8;
        int VAR_9;

        FUNC_0(VAR_1);
        FUNC_0(VAR_6);



        VAR_9 = FUNC_4(VAR_1, "ss", &VAR_4, &VAR_5);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_2(VAR_6, VAR_1, VAR_4, VAR_3, &VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_1(VAR_6, VAR_1, VAR_5, VAR_3, &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        if (VAR_7->seat != VAR_8)
                return FUNC_3(VAR_3, VAR_0,
                                         "Session %s not on seat %s", VAR_4, VAR_5);

        VAR_9 = FUNC_6(VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        return FUNC_5(VAR_1, ((void*)0));
}
