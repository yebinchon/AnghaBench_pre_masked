
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const pam_handle_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static const char* FUNC_4(pam_handle_t *VAR_0, const char *VAR_1, const char *VAR_2) {
        const char *VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);







        VAR_3 = FUNC_2(VAR_0, VAR_1);
        if (!FUNC_1(VAR_3))
                return VAR_3;





        VAR_3 = FUNC_3(VAR_1);
        if (!FUNC_1(VAR_3))
                return VAR_3;

        return VAR_2;
}
