
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 int FUNC_0 (int *,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, char **VAR_1, void *VAR_2) {
        sd_bus *VAR_3 = VAR_2;

        if (VAR_0 == 2)
                return FUNC_0(VAR_3, ((void*)0), ((void*)0), VAR_1[1]);
        else if (VAR_0 == 3)
                return FUNC_0(VAR_3, ((void*)0), VAR_1[1], VAR_1[2]);
        else
                return FUNC_0(VAR_3, VAR_1[1], VAR_1[2], VAR_1[3]);
}
