
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, uid_t *VAR_2) {
        const char *VAR_3, *VAR_4, *VAR_5;

        VAR_3 = FUNC_1(VAR_1, "core.");
        if (!VAR_3)
                return -VAR_0;


        VAR_3 = FUNC_2(VAR_3, '.');
        if (!VAR_3)
                return -VAR_0;
        VAR_3++;


        VAR_4 = FUNC_2(VAR_3, '.');
        if (!VAR_4)
                return -VAR_0;

        VAR_5 = FUNC_3(VAR_3, VAR_4-VAR_3);
        return FUNC_0(VAR_5, VAR_2);
}
