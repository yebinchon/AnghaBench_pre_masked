
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ devlink_priority; scalar_t__ watch_handle; int tags; int properties_db; int devlinks; } ;
typedef TYPE_1__ sd_device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(sd_device *VAR_0) {
        FUNC_0(VAR_0);

        if (!FUNC_2(VAR_0->devlinks))
                return 1;

        if (VAR_0->devlink_priority != 0)
                return 1;

        if (!FUNC_1(VAR_0->properties_db))
                return 1;

        if (!FUNC_2(VAR_0->tags))
                return 1;

        if (VAR_0->watch_handle >= 0)
                return 1;

        return 0;
}
