
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; int varlink_server; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,char*,int ,char*,int ,char*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(Server *VAR_6) {
        int VAR_7;

        FUNC_0(VAR_6);

        VAR_7 = FUNC_4(&VAR_6->varlink_server, VAR_1);
        if (VAR_7 < 0)
                return VAR_7;

        FUNC_5(VAR_6->varlink_server, VAR_6);

        VAR_7 = FUNC_2(
                        VAR_6->varlink_server,
                        "io.systemd.Journal.Synchronize", VAR_5,
                        "io.systemd.Journal.Rotate", VAR_4,
                        "io.systemd.Journal.FlushToVar", VAR_2,
                        "io.systemd.Journal.RelinquishVar", VAR_3);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_3(VAR_6->varlink_server, "/run/systemd/journal/io.systemd.journal", 0600);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_1(VAR_6->varlink_server, VAR_6->event, VAR_0);
        if (VAR_7 < 0)
                return VAR_7;

        return 0;
}
