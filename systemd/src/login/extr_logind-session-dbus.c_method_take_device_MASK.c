
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {int devices; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int dev_t ;
struct TYPE_17__ {int active; int fd; } ;
typedef TYPE_2__ SessionDevice ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,char*,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int ,int,TYPE_2__**) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(sd_bus_message *VAR_3, void *VAR_4, sd_bus_error *VAR_5) {
        Session *VAR_6 = VAR_4;
        uint32_t VAR_7, VAR_8;
        SessionDevice *VAR_9;
        dev_t VAR_10;
        int VAR_11;

        FUNC_2(VAR_3);
        FUNC_2(VAR_6);

        VAR_11 = FUNC_7(VAR_3, "uu", &VAR_7, &VAR_8);
        if (VAR_11 < 0)
                return VAR_11;

        if (!FUNC_0(VAR_7) || !FUNC_1(VAR_8))
                return FUNC_5(VAR_5, VAR_2, "Device major/minor is not valid.");

        if (!FUNC_12(VAR_6, FUNC_6(VAR_3)))
                return FUNC_5(VAR_5, VAR_1, "You are not in control of this session");

        VAR_10 = FUNC_4(VAR_7, VAR_8);
        VAR_9 = FUNC_3(VAR_6->devices, &VAR_10);
        if (VAR_9)





                return FUNC_5(VAR_5, VAR_0, "Device already taken");

        VAR_11 = FUNC_10(VAR_6, VAR_10, 1, &VAR_9);
        if (VAR_11 < 0)
                return VAR_11;

        VAR_11 = FUNC_11(VAR_9);
        if (VAR_11 < 0)
                goto error;

        VAR_11 = FUNC_8(VAR_3, "hb", VAR_9->fd, !VAR_9->active);
        if (VAR_11 < 0)
                goto error;

        FUNC_13(VAR_6);
        return 1;

error:
        FUNC_9(VAR_9);
        return VAR_11;
}
