
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bus; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,char*,int ,int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(Manager *VAR_2) {
        FUNC_0(VAR_2);

        return FUNC_1(
                        VAR_2->event,
                        VAR_2->bus,
                        "org.freedesktop.import1",
                        VAR_0,
                        VAR_1,
                        VAR_2);
}
