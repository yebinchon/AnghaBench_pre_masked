
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef int DeviceType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const**) ;
 scalar_t__ FUNC_1 (int *,char const**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static DeviceType FUNC_4(sd_device *VAR_3) {
        const char *VAR_4, *VAR_5;
        DeviceType VAR_6 = VAR_2;

        if (FUNC_1(VAR_3, &VAR_4) < 0 ||
            FUNC_0(VAR_3, &VAR_5) < 0)
                return VAR_6;

        if (FUNC_3(VAR_5, "drm")) {
                if (FUNC_2(VAR_4, "card"))
                        VAR_6 = VAR_0;
        } else if (FUNC_3(VAR_5, "input")) {
                if (FUNC_2(VAR_4, "event"))
                        VAR_6 = VAR_1;
        }

        return VAR_6;
}
