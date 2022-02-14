
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int path; int polkit_registry; struct TYPE_10__* userdata; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int PortableChange ;
typedef TYPE_1__ Manager ;
typedef TYPE_1__ Image ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ,int ,int ,int **,size_t*,int *) ;
 int FUNC_4 (TYPE_1__*,int *,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int*) ;

__attribute__((used)) static int FUNC_7(
                sd_bus_message *VAR_3,
                void *VAR_4,
                sd_bus_error *VAR_5) {

        PortableChange *VAR_6 = ((void*)0);
        Image *VAR_7 = VAR_4;
        Manager *VAR_8 = VAR_7->userdata;
        size_t VAR_9 = 0;
        int VAR_10, VAR_11;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_8);

        VAR_10 = FUNC_6(VAR_3, "b", &VAR_11);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_1(
                        VAR_3,
                        VAR_0,
                        "org.freedesktop.portable1.attach-images",
                        ((void*)0),
                        0,
                        VAR_2,
                        &VAR_8->polkit_registry,
                        VAR_5);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_10 = FUNC_3(
                        FUNC_5(VAR_3),
                        VAR_7->path,
                        VAR_11 ? VAR_1 : 0,
                        &VAR_6,
                        &VAR_9,
                        VAR_5);
        if (VAR_10 < 0)
                goto finish;

        VAR_10 = FUNC_4(VAR_3, VAR_6, VAR_9);

finish:
        FUNC_2(VAR_6, VAR_9);
        return VAR_10;
}
