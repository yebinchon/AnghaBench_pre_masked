
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sealed; scalar_t__ db_loaded; } ;
typedef TYPE_1__ sd_device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const**) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 char* FUNC_3 (char*,char const*) ;

int FUNC_4(sd_device *VAR_0, bool VAR_1) {
        const char *VAR_2, *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        if (VAR_0->db_loaded || (!VAR_1 && VAR_0->sealed))
                return 0;

        VAR_4 = FUNC_1(VAR_0, &VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_3 = FUNC_3("/run/udev/data/", VAR_2);

        return FUNC_2(VAR_0, VAR_3);
}
