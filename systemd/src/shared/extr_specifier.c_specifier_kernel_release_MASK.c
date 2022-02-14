
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct utsname*) ;

int FUNC_2(char VAR_2, const void *VAR_3, const void *VAR_4, char **VAR_5) {
        struct utsname VAR_6;
        char *VAR_7;
        int VAR_8;

        VAR_8 = FUNC_1(&VAR_6);
        if (VAR_8 < 0)
                return -VAR_1;

        VAR_7 = FUNC_0(VAR_6.release);
        if (!VAR_7)
                return -VAR_0;

        *VAR_5 = VAR_7;
        return 0;
}
