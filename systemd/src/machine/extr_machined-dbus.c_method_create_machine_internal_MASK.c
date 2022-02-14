
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_5__ {int create_message; } ;
typedef int Manager ;
typedef TYPE_1__ Machine ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int *,int *,int,TYPE_1__**,int *) ;
 int FUNC_4 (int *,char,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, bool VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Manager *VAR_4 = VAR_2;
        Machine *VAR_5 = ((void*)0);
        int VAR_6;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);

        VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_1, &VAR_5, VAR_3);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_4(VAR_0, 'a', "(sv)");
        if (VAR_6 < 0)
                goto fail;

        VAR_6 = FUNC_2(VAR_5, VAR_0, VAR_3);
        if (VAR_6 < 0)
                goto fail;

        VAR_5->create_message = FUNC_5(VAR_0);
        return 1;

fail:
        FUNC_1(VAR_5);
        return VAR_6;
}
