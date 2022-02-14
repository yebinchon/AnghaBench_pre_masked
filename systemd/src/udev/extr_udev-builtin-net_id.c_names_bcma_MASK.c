
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {int type; int bcma_core; } ;
typedef struct netnames sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netnames*) ;
 int FUNC_1 (struct netnames*,char*,int *,struct netnames**) ;
 int FUNC_2 (struct netnames*,char const**) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;
 int FUNC_4 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(sd_device *VAR_2, struct netnames *VAR_3) {
        sd_device *VAR_4;
        unsigned VAR_5;
        const char *VAR_6;
        int VAR_7;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_7 = FUNC_1(VAR_2, "bcma", ((void*)0), &VAR_4);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_2(VAR_4, &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;


        if (FUNC_3(VAR_6, "bcma%*u:%u", &VAR_5) != 1)
                return -VAR_0;

        if (VAR_5 > 0)
                FUNC_4(VAR_3->bcma_core, "b%u", VAR_5);

        VAR_3->type = VAR_1;
        return 0;
}
