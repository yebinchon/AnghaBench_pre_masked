
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; int unique_name; struct TYPE_10__* bus; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,char const**) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        const char *VAR_7;
        sd_bus *VAR_8;
        int VAR_9;

        FUNC_1(VAR_4);
        VAR_8 = VAR_4->bus;
        FUNC_1(VAR_8);
        FUNC_1(FUNC_0(VAR_8->state, VAR_1, VAR_0));

        VAR_9 = FUNC_4(VAR_4);
        if (VAR_9 > 0) {
                VAR_9 = -VAR_9;
                goto fail;
        }

        VAR_9 = FUNC_5(VAR_4, "s", &VAR_7);
        if (VAR_9 < 0)
                goto fail;

        if (!FUNC_6(VAR_7) || VAR_7[0] != ':') {
                VAR_9 = -VAR_3;
                goto fail;
        }

        VAR_9 = FUNC_3(&VAR_8->unique_name, VAR_7);
        if (VAR_9 < 0)
                goto fail;

        if (VAR_8->state == VAR_1) {
                FUNC_2(VAR_8, VAR_2);

                VAR_9 = FUNC_7(VAR_8);
                if (VAR_9 < 0)
                        goto fail;
        }

        return 1;

fail:




        FUNC_2(VAR_8, VAR_0);
        return VAR_9;
}
