
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {int type; int netdevsim_path; } ;
typedef struct netnames sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netnames*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct netnames*,char*,int *,struct netnames**) ;
 int FUNC_3 (struct netnames*,char*,char const**) ;
 int FUNC_4 (struct netnames*,char const**) ;
 int FUNC_5 (int ,int,char*,unsigned int,char const*) ;
 int FUNC_6 (char const*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(sd_device *VAR_4, struct netnames *VAR_5) {
        sd_device *VAR_6;
        const char *VAR_7;
        unsigned VAR_8;
        const char *VAR_9 = ((void*)0);
        int VAR_10;
        bool VAR_11;

        if (!FUNC_1(VAR_2))
                return 0;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        VAR_10 = FUNC_2(VAR_4, "netdevsim", ((void*)0), &VAR_6);
        if (VAR_10 < 0)
                return VAR_10;
        VAR_10 = FUNC_4(VAR_6, &VAR_7);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_6(VAR_7, "netdevsim%u", &VAR_8) != 1)
                return -VAR_0;

        VAR_10 = FUNC_3(VAR_4, "phys_port_name", &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_11 = FUNC_5(VAR_5->netdevsim_path, sizeof(VAR_5->netdevsim_path), "i%un%s", VAR_8, VAR_9);
        if (!VAR_11)
                return -VAR_1;

        VAR_5->type = VAR_3;

        return 0;
}
