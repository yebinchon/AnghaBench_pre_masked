
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,int *,unsigned int,char**,int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,char*) ;

__attribute__((used)) static int FUNC_4(char **VAR_0, unsigned VAR_1) {
        char *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);

        if (!*VAR_0)
                return 0;

        VAR_3 = FUNC_1(*VAR_0, ((void*)0), VAR_1, &VAR_2, ((void*)0));
        if (VAR_3 < 0)
                return FUNC_3(VAR_3, "Failed to resolve path %s: %m", *VAR_0);

        return FUNC_2(*VAR_0, VAR_2);
}
