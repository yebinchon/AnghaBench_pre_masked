
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* manager; } ;
struct TYPE_9__ {char* status_text; } ;
struct TYPE_8__ {int service_watchdogs; } ;
typedef TYPE_2__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,char*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(Service *VAR_2) {
        if (!FUNC_0(VAR_2)->manager->service_watchdogs)
                return;

        FUNC_1(FUNC_0(VAR_2), "Watchdog request (last status: %s)!",
                       VAR_2->status_text ? VAR_2->status_text : "<unset>");

        FUNC_2(VAR_2, VAR_1, VAR_0);
}
