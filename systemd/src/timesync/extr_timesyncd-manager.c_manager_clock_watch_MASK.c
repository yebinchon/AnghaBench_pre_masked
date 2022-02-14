
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_5__ {int jumped; int poll_resync; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_0, int VAR_1, uint32_t VAR_2, void *VAR_3) {
        Manager *VAR_4 = VAR_3;

        FUNC_0(VAR_4);


        FUNC_2(VAR_4);


        if (VAR_4->jumped) {
                VAR_4->jumped = 0;
                return 0;
        }


        FUNC_1("System time changed. Resyncing.");
        VAR_4->poll_resync = 1;

        return FUNC_3(VAR_4);
}
