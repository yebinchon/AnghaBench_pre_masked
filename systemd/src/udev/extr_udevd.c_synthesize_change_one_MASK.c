
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int,char*,char const*) ;
 char* FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_4(sd_device *VAR_1, const char *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        VAR_3 = FUNC_2(VAR_2, "/uevent");
        FUNC_0(VAR_1, "device is closed, synthesising 'change' on %s", VAR_2);
        VAR_4 = FUNC_3(VAR_3, "change", VAR_0);
        if (VAR_4 < 0)
                return FUNC_1(VAR_1, VAR_4, "Failed to write 'change' to %s: %m", VAR_3);
        return 0;
}
