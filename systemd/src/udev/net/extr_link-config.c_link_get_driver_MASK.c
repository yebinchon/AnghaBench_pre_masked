
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_3__ {int ethtool_fd; } ;
typedef TYPE_1__ link_config_ctx ;


 int FUNC_0 (int *,char const*,char**) ;
 int FUNC_1 (int *,char const**) ;

int FUNC_2(link_config_ctx *VAR_0, sd_device *VAR_1, char **VAR_2) {
        const char *VAR_3;
        char *VAR_4 = ((void*)0);
        int VAR_5;

        VAR_5 = FUNC_1(VAR_1, &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_0(&VAR_0->ethtool_fd, VAR_3, &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        *VAR_2 = VAR_4;
        return 0;
}
