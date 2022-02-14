
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nscd_cache_flush_event; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__*,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

int FUNC_6(Manager *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (!VAR_2->nscd_cache_flush_event) {
                VAR_3 = FUNC_2(VAR_2->event, &VAR_2->nscd_cache_flush_event, VAR_1, VAR_2);
                if (VAR_3 < 0)
                        return FUNC_1(VAR_3, "Failed to allocate NSCD cache flush event: %m");

                FUNC_3(VAR_2->nscd_cache_flush_event, "nscd-cache-flush");
        }

        VAR_3 = FUNC_4(VAR_2->nscd_cache_flush_event, VAR_0);
        if (VAR_3 < 0) {
                VAR_2->nscd_cache_flush_event = FUNC_5(VAR_2->nscd_cache_flush_event);
                return FUNC_1(VAR_3, "Failed to enable NSCD cache flush event: %m");
        }

        return 0;
}
