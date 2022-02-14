
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ enabled; TYPE_1__ time; scalar_t__ pending; } ;
typedef TYPE_2__ sd_event_source ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_1, const void *VAR_2) {
        const sd_event_source *VAR_3 = VAR_1, *VAR_4 = VAR_2;

        FUNC_2(FUNC_1(VAR_3->type));
        FUNC_2(VAR_3->type == VAR_4->type);


        if (VAR_3->enabled != VAR_0 && VAR_4->enabled == VAR_0)
                return -1;
        if (VAR_3->enabled == VAR_0 && VAR_4->enabled != VAR_0)
                return 1;


        if (!VAR_3->pending && VAR_4->pending)
                return -1;
        if (VAR_3->pending && !VAR_4->pending)
                return 1;


        return FUNC_0(VAR_3->time.next, VAR_4->time.next);
}
