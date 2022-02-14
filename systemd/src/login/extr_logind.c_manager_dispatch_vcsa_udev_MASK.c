
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sd_device_monitor ;
struct TYPE_7__ {int seat0; } ;
typedef TYPE_1__ sd_device ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const**) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(sd_device_monitor *VAR_1, sd_device *VAR_2, void *VAR_3) {
        Manager *VAR_4 = VAR_3;
        const char *VAR_5;

        FUNC_0(VAR_4);
        FUNC_0(VAR_2);




        if (FUNC_2(VAR_2, &VAR_5) >= 0 &&
            FUNC_4(VAR_5, "vcsa") &&
            FUNC_1(VAR_2, VAR_0))
                FUNC_3(VAR_4->seat0);

        return 0;
}
