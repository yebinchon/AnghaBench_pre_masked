
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (char**,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,char const**) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static sd_device *FUNC_4(sd_device *VAR_0, char **VAR_1) {
        const char *VAR_2;
        unsigned VAR_3, VAR_4;

        if (FUNC_1(VAR_0, &VAR_2) < 0)
                return ((void*)0);
        if (FUNC_3(VAR_2, "c%ud%u%*s", &VAR_3, &VAR_4) != 2)
                return ((void*)0);

        FUNC_0(VAR_1, "cciss-disk%u", VAR_4);
        return FUNC_2(VAR_0, "cciss");
}
