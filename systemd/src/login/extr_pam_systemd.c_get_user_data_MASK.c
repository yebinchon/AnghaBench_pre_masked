
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const passwd ;
typedef char const* pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const**,char const**,int *) ;
 char* FUNC_3 (char const**,char const*) ;
 int FUNC_4 (char const**,int ,char*) ;

__attribute__((used)) static int FUNC_5(
                pam_handle_t *VAR_4,
                const char **VAR_5,
                struct passwd **VAR_6) {

        const char *VAR_7 = ((void*)0);
        struct passwd *VAR_8 = ((void*)0);
        int VAR_9;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);
        FUNC_0(VAR_6);

        VAR_9 = FUNC_2(VAR_4, &VAR_7, ((void*)0));
        if (VAR_9 != VAR_2) {
                FUNC_4(VAR_4, VAR_0, "Failed to get user name.");
                return VAR_9;
        }

        if (FUNC_1(VAR_7)) {
                FUNC_4(VAR_4, VAR_0, "User name not valid.");
                return VAR_1;
        }

        VAR_8 = FUNC_3(VAR_4, VAR_7);
        if (!VAR_8) {
                FUNC_4(VAR_4, VAR_0, "Failed to get user data.");
                return VAR_3;
        }

        *VAR_6 = VAR_8;
        *VAR_5 = VAR_7;

        return VAR_2;
}
