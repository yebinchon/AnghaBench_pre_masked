
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_8__ {scalar_t__ current_server_address; int network_monitor; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(sd_event_source *VAR_0, int VAR_1, uint32_t VAR_2, void *VAR_3) {
        Manager *VAR_4 = VAR_3;
        bool VAR_5, VAR_6, VAR_7;
        int VAR_8;

        FUNC_0(VAR_4);

        FUNC_8(VAR_4->network_monitor);


        VAR_5 = FUNC_6(VAR_4);


        VAR_7 = FUNC_7();


        VAR_6 = FUNC_5(VAR_4);

        if (VAR_6 && !VAR_7) {
                FUNC_1("No network connectivity, watching for changes.");
                FUNC_4(VAR_4);

        } else if ((!VAR_6 || VAR_5) && VAR_7) {
                FUNC_1("Network configuration changed, trying to establish connection.");

                if (VAR_4->current_server_address)
                        VAR_8 = FUNC_2(VAR_4);
                else
                        VAR_8 = FUNC_3(VAR_4);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        return 0;
}
