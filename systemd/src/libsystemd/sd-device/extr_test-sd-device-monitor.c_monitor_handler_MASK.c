
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device_monitor ;
typedef int sd_device ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int FUNC_5(sd_device_monitor *VAR_0, sd_device *VAR_1, void *VAR_2) {
        const char *VAR_3, *VAR_4 = VAR_2;

        FUNC_0(FUNC_1(VAR_1, &VAR_3) >= 0);
        FUNC_0(FUNC_4(VAR_3, VAR_4));

        return FUNC_3(FUNC_2(VAR_0), 100);
}
