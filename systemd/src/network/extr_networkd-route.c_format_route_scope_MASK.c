
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char**,size_t,char const*) ;
 int FUNC_2 (char**,size_t,char*,int) ;

const char *FUNC_3(int VAR_0, char *VAR_1, size_t VAR_2) {
        const char *VAR_3;
        char *VAR_4 = VAR_1;

        VAR_3 = FUNC_0(VAR_0);
        if (VAR_3)
                FUNC_1(&VAR_4, VAR_2, VAR_3);
        else
                FUNC_2(&VAR_4, VAR_2, "%d", VAR_0);

        return VAR_1;
}
