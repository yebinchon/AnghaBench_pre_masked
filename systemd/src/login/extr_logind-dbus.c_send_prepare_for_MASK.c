
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bus; } ;
typedef TYPE_1__ Manager ;
typedef scalar_t__ InhibitWhat ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(Manager *VAR_2, InhibitWhat VAR_3, bool VAR_4) {
        int VAR_5 = VAR_4;

        FUNC_1(VAR_2);
        FUNC_1(FUNC_0(VAR_3, VAR_0, VAR_1));

        return FUNC_2(VAR_2->bus,
                                  "/org/freedesktop/login1",
                                  "org.freedesktop.login1.Manager",
                                  VAR_3 == VAR_0 ? "PrepareForShutdown" : "PrepareForSleep",
                                  "b",
                                  VAR_5);
}
