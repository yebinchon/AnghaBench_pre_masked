
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int track_queue; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->track_queue)
                return 0;

        FUNC_1(VAR_0->track_queue);
        return 1;
}
