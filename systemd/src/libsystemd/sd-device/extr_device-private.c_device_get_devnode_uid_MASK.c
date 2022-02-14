
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_5__ {scalar_t__ devuid; } ;
typedef TYPE_1__ sd_device ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(sd_device *VAR_1, uid_t *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_1->devuid == (uid_t) -1)
                return -VAR_0;

        if (VAR_2)
                *VAR_2 = VAR_1->devuid;

        return 0;
}
