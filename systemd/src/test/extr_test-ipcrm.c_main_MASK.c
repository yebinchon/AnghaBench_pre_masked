
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,int *,int *,int *,int *,int ) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_5, char *VAR_6[]) {
        uid_t VAR_7;
        int VAR_8;
        const char* VAR_9 = VAR_6[1] ?: VAR_4;

        FUNC_4(VAR_3);

        VAR_8 = FUNC_1(&VAR_9, &VAR_7, ((void*)0), ((void*)0), ((void*)0), 0);
        if (VAR_8 == -VAR_0)
                return FUNC_3("Failed to resolve user");
        if (VAR_8 < 0) {
                FUNC_2(VAR_8, "Failed to resolve \"%s\": %m", VAR_9);
                return VAR_1;
        }

        VAR_8 = FUNC_0(VAR_7);
        return VAR_8 < 0 ? VAR_1 : VAR_2;
}
