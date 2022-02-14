
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Manager ;
typedef int Job ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int * FUNC_1 (int **,unsigned int) ;
 int FUNC_2 (char const*,unsigned int*) ;
 char* FUNC_3 (char const*,char*) ;

int FUNC_4(Manager *VAR_2, const char *VAR_3, Job **VAR_4) {
        const char *VAR_5;
        unsigned VAR_6;
        Job *VAR_7;
        int VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_3(VAR_3, "/org/freedesktop/systemd1/job/");
        if (!VAR_5)
                return -VAR_0;

        VAR_8 = FUNC_2(VAR_5, &VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_7 = FUNC_1(VAR_2, VAR_6);
        if (!VAR_7)
                return -VAR_1;

        *VAR_4 = VAR_7;

        return 0;
}
