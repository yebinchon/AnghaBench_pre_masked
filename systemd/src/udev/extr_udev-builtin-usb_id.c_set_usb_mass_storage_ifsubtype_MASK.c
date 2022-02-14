
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char const*) ;
 int FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const char *VAR_1, size_t VAR_2) {
        int VAR_3 = 0;
        char *VAR_4;
        const char *VAR_5 = "generic";

        VAR_3 = FUNC_1(VAR_1, &VAR_4, 0);
        if (VAR_4 != VAR_1) {
                switch (VAR_3) {
                case 1:
                        VAR_5 = "rbc";
                        break;
                case 2:
                        VAR_5 = "atapi";
                        break;
                case 3:
                        VAR_5 = "tape";
                        break;
                case 4:
                        VAR_5 = "floppy";
                        break;
                case 6:
                        VAR_5 = "scsi";
                        break;
                default:
                        break;
                }
        }
        FUNC_0(VAR_0, VAR_2, VAR_5);
        return VAR_3;
}
