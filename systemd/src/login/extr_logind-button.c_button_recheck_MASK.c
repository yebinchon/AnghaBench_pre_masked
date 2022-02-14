
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_event_source ;
struct TYPE_3__ {int manager; struct TYPE_3__* lid_closed; } ;
typedef TYPE_1__ Button ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(sd_event_source *VAR_0, void *VAR_1) {
        Button *VAR_2 = VAR_1;

        FUNC_0(VAR_2);
        FUNC_0(VAR_2->lid_closed);

        FUNC_1(VAR_2->manager, 0);
        return 1;
}
