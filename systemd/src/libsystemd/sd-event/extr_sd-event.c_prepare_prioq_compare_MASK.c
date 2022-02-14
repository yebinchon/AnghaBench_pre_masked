
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enabled; int priority; int prepare_iteration; int prepare; } ;
typedef TYPE_1__ sd_event_source ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2) {
        const sd_event_source *VAR_3 = VAR_1, *VAR_4 = VAR_2;
        int VAR_5;

        FUNC_1(VAR_3->prepare);
        FUNC_1(VAR_4->prepare);


        if (VAR_3->enabled != VAR_0 && VAR_4->enabled == VAR_0)
                return -1;
        if (VAR_3->enabled == VAR_0 && VAR_4->enabled != VAR_0)
                return 1;




        VAR_5 = FUNC_0(VAR_3->prepare_iteration, VAR_4->prepare_iteration);
        if (VAR_5 != 0)
                return VAR_5;


        return FUNC_0(VAR_3->priority, VAR_4->priority);
}
