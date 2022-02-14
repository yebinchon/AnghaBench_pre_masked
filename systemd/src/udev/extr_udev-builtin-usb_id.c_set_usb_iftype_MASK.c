
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int VAR_1, size_t VAR_2) {
        const char *VAR_3 = "generic";

        switch (VAR_1) {
        case 1:
                VAR_3 = "audio";
                break;
        case 2:
                break;
        case 3:
                VAR_3 = "hid";
                break;
        case 5:
                break;
        case 6:
                VAR_3 = "media";
                break;
        case 7:
                VAR_3 = "printer";
                break;
        case 8:
                VAR_3 = "storage";
                break;
        case 9:
                VAR_3 = "hub";
                break;
        case 0x0a:
                break;
        case 0x0b:
                break;
        case 0x0d:
                break;
        case 0x0e:
                VAR_3 = "video";
                break;
        case 0xdc:
                break;
        case 0xe0:
                break;
        case 0xfe:
                break;
        case 0xff:
                break;
        default:
                break;
        }
        FUNC_0(VAR_0, VAR_3, VAR_2);
        VAR_0[VAR_2-1] = '\0';
}
