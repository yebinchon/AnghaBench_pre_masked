
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int event; int bus; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,char*,char*,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,char*,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int *,char*,char*,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int *,char*,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(Manager *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_4);

        VAR_5 = FUNC_4(VAR_4->bus, ((void*)0), "/org/freedesktop/import1", "org.freedesktop.import1.Manager", VAR_0, VAR_4);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to register object: %m");

        VAR_5 = FUNC_2(VAR_4->bus, ((void*)0), "/org/freedesktop/import1/transfer", "org.freedesktop.import1.Transfer", VAR_3, VAR_2, VAR_4);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to register object: %m");

        VAR_5 = FUNC_3(VAR_4->bus, ((void*)0), "/org/freedesktop/import1/transfer", VAR_1, VAR_4);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to add transfer enumerator: %m");

        VAR_5 = FUNC_6(VAR_4->bus, ((void*)0), "org.freedesktop.import1", 0, ((void*)0), ((void*)0));
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to request name: %m");

        VAR_5 = FUNC_5(VAR_4->bus, VAR_4->event, 0);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to attach bus to event loop: %m");

        return 0;
}
