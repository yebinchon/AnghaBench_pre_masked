
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,char const*,int ) ;
 int FUNC_3 (char const*,int ,char*,char const*) ;

__attribute__((used)) static int FUNC_4(pam_handle_t *VAR_2, const char *VAR_3, const char *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);



        if (FUNC_1(VAR_4))
                return VAR_1;

        VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, 0);
        if (VAR_5 != VAR_1)
                FUNC_3(VAR_2, VAR_0, "Failed to set environment variable %s.", VAR_3);

        return VAR_5;
}
