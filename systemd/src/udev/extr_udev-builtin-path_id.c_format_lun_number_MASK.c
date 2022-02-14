
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,unsigned long,...) ;
 int FUNC_1 (int *,char const**) ;
 unsigned long FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_3(sd_device *VAR_1, char **VAR_2) {
        const char *VAR_3;
        unsigned long VAR_4;
        int VAR_5;

        VAR_5 = FUNC_1(VAR_1, &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;
        if (!VAR_3)
                return -VAR_0;

        VAR_4 = FUNC_2(VAR_3, ((void*)0), 10);
        if (VAR_4 < 256)

                FUNC_0(VAR_2, "lun-%lu", VAR_4);
        else

                FUNC_0(VAR_2, "lun-0x%04lx%04lx00000000", VAR_4 & 0xffff, (VAR_4 >> 16) & 0xffff);

        return 0;
}
