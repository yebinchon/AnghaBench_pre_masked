
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char const*) ;
 int FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, char *VAR_1, size_t VAR_2) {
        int VAR_3;
        char *VAR_4;
        const char *VAR_5 = "generic";

        VAR_3 = FUNC_1(VAR_0, &VAR_4, 0);
        if (VAR_4 != VAR_0) {
                switch (VAR_3) {
                case 0:
                        VAR_5 = "disk";
                        break;
                case 1:
                        VAR_5 = "tape";
                        break;
                case 4:
                        VAR_5 = "optical";
                        break;
                case 5:
                        VAR_5 = "cd";
                        break;
                case 7:
                        VAR_5 = "optical";
                        break;
                case 0xe:
                        VAR_5 = "disk";
                        break;
                case 0xf:
                        VAR_5 = "optical";
                        break;
                default:
                        break;
                }
        }
        FUNC_0(VAR_1, VAR_2, VAR_5);
}
