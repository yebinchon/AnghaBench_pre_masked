
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int name; scalar_t__ discoverable; int path; TYPE_1__* userdata; } ;
struct TYPE_9__ {int image_cache; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Image ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Manager *VAR_0, Image *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        VAR_2 = FUNC_3(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_1->userdata = VAR_0;

        VAR_2 = FUNC_1(VAR_0->image_cache, VAR_1->path, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        FUNC_2(VAR_1);

        if (VAR_1->discoverable) {
                VAR_2 = FUNC_1(VAR_0->image_cache, VAR_1->name, VAR_1);
                if (VAR_2 < 0)
                        return VAR_2;

                FUNC_2(VAR_1);
        }

        return 0;
}
