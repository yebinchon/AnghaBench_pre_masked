
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctx; } ;
struct TYPE_6__ {TYPE_1__ dnstls_data; } ;
typedef TYPE_2__ Manager ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*,int ) ;

int FUNC_11(Manager *VAR_3) {
        int VAR_4;
        FUNC_9(VAR_3);

        FUNC_2();
        FUNC_7();
        VAR_3->dnstls_data.ctx = FUNC_3(FUNC_8());

        if (!VAR_3->dnstls_data.ctx)
                return -VAR_0;

        FUNC_5(VAR_3->dnstls_data.ctx, VAR_2);
        FUNC_6(VAR_3->dnstls_data.ctx, VAR_1);
        VAR_4 = FUNC_4(VAR_3->dnstls_data.ctx);
        if (VAR_4 < 0)
                FUNC_10("Failed to load system trust store: %s", FUNC_0(FUNC_1(), ((void*)0)));

        return 0;
}
