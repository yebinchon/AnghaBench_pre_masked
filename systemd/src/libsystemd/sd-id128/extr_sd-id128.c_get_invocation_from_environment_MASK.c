
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int *) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(sd_id128_t *VAR_1) {
        const char *VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_2("INVOCATION_ID");
        if (!VAR_2)
                return -VAR_0;

        return FUNC_1(VAR_2, VAR_1);
}
