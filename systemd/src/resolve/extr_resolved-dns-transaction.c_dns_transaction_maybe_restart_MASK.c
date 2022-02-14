
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ current_feature_level; int server; } ;
typedef TYPE_1__ DnsTransaction ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(DnsTransaction *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);



        if (!VAR_0->server)
                return 0;

        if (VAR_0->current_feature_level <= FUNC_1(VAR_0->server))
                return 0;







        FUNC_4("Server feature level is now lower than when we began our transaction. Restarting with new ID.");
        FUNC_3(VAR_0);

        VAR_1 = FUNC_2(VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        return 1;
}
