
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 char* FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,size_t) ;

ssize_t FUNC_4(char **VAR_0, size_t *VAR_1, FILE *VAR_2) {
    size_t VAR_3 = 0;
    char *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);


    if (!(VAR_4 = FUNC_0(VAR_2, &VAR_3))) {
        return -1;
    }

    if (VAR_3 >= *VAR_1) {


        if (!(VAR_5 = FUNC_3(*VAR_0, VAR_3 * 2))) {
            return -1;
        }
        *VAR_0 = VAR_5;
        *VAR_1 = VAR_3 * 2;
    }

    FUNC_2(*VAR_0, VAR_4, VAR_3);





    FUNC_1(VAR_4);


    (*VAR_0)[VAR_3] = '\0';
    return VAR_3;
}
