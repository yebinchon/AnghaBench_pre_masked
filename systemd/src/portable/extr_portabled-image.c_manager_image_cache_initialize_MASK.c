
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int image_cache_defer_event; int event; int image_cache; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(Manager *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_4);

        VAR_5 = FUNC_1(&VAR_4->image_cache, &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;


        if (!VAR_4->image_cache_defer_event) {
                VAR_5 = FUNC_2(VAR_4->event, &VAR_4->image_cache_defer_event, VAR_2, VAR_4);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_5 = FUNC_4(VAR_4->image_cache_defer_event, VAR_1);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        VAR_5 = FUNC_3(VAR_4->image_cache_defer_event, VAR_0);
        if (VAR_5 < 0)
                return VAR_5;

        return 0;
}
