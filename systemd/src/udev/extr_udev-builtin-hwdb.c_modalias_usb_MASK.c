
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int sd_device ;


 scalar_t__ FUNC_0 (char const*,int*) ;
 scalar_t__ FUNC_1 (int *,char*,char const**) ;
 int FUNC_2 (char*,size_t,char*,int,int) ;

__attribute__((used)) static const char *FUNC_3(sd_device *VAR_0, char *VAR_1, size_t VAR_2) {
        const char *VAR_3, *VAR_4;
        uint16_t VAR_5, VAR_6;

        if (FUNC_1(VAR_0, "idVendor", &VAR_3) < 0)
                return ((void*)0);
        if (FUNC_1(VAR_0, "idProduct", &VAR_4) < 0)
                return ((void*)0);
        if (FUNC_0(VAR_3, &VAR_5) < 0)
                return ((void*)0);
        if (FUNC_0(VAR_4, &VAR_6) < 0)
                return ((void*)0);
        FUNC_2(VAR_1, VAR_2, "usb:v%04Xp%04X*", VAR_5, VAR_6);
        return VAR_1;
}
