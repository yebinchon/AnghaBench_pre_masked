
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nss_status { ____Placeholder_nss_status } nss_status ;







 int FUNC_0 (char*,size_t,char*,int) ;

__attribute__((used)) static const char* FUNC_1(enum nss_status VAR_0, char *VAR_1, size_t VAR_2) {
        switch (VAR_0) {
        case 129:
                return "NSS_STATUS_TRYAGAIN";
        case 128:
                return "NSS_STATUS_UNAVAIL";
        case 132:
                return "NSS_STATUS_NOTFOUND";
        case 130:
                return "NSS_STATUS_SUCCESS";
        case 131:
                return "NSS_STATUS_RETURN";
        default:
                FUNC_0(VAR_1, VAR_2, "%i", VAR_0);
                return VAR_1;
        }
}
