
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,char const**) ;

__attribute__((used)) static const char *FUNC_2(sd_device *VAR_0) {
        const char *VAR_1;

        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0, "ID_MODEL_FROM_DATABASE", &VAR_1) >= 0)
                return VAR_1;

        if (FUNC_1(VAR_0, "ID_MODEL", &VAR_1) >= 0)
                return VAR_1;

        return ((void*)0);
}
