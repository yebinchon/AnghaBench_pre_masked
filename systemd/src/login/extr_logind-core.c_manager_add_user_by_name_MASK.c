
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;
typedef int User ;
typedef char const Manager ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const**,int *,int *,char const**,int *,int ) ;
 int FUNC_2 (char const*,int ,int ,char const*,char const*,int **) ;

int FUNC_3(
                Manager *VAR_0,
                const char *VAR_1,
                User **VAR_2) {

        const char *VAR_3 = ((void*)0);
        uid_t VAR_4;
        gid_t VAR_5;
        int VAR_6;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_6 = FUNC_1(&VAR_1, &VAR_4, &VAR_5, &VAR_3, ((void*)0), 0);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_2(VAR_0, VAR_4, VAR_5, VAR_1, VAR_3, VAR_2);
}
