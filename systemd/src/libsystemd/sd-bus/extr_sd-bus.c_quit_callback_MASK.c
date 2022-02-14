
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_event_source ;
struct TYPE_4__ {scalar_t__ close_on_exit; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_0, void *VAR_1) {
        sd_bus *VAR_2 = VAR_1;

        FUNC_0(VAR_0);

        if (VAR_2->close_on_exit) {
                FUNC_2(VAR_2);
                FUNC_1(VAR_2);
        }

        return 1;
}
