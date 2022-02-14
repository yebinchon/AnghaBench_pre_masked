
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ enabled; int priority; } ;
typedef TYPE_1__ sd_event_source ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_2, const void *VAR_3) {
        const sd_event_source *VAR_4 = VAR_2, *VAR_5 = VAR_3;

        FUNC_1(VAR_4->type == VAR_1);
        FUNC_1(VAR_5->type == VAR_1);


        if (VAR_4->enabled != VAR_0 && VAR_5->enabled == VAR_0)
                return -1;
        if (VAR_4->enabled == VAR_0 && VAR_5->enabled != VAR_0)
                return 1;


        return FUNC_0(VAR_4->priority, VAR_5->priority);
}
