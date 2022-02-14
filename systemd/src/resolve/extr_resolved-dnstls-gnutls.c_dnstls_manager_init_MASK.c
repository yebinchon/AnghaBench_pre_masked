
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cert_cred; } ;
struct TYPE_6__ {TYPE_1__ dnstls_data; } ;
typedef TYPE_2__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(Manager *VAR_1) {
        int VAR_2;
        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(&VAR_1->dnstls_data.cert_cred);
        if (VAR_2 < 0)
                return -VAR_0;

        VAR_2 = FUNC_2(VAR_1->dnstls_data.cert_cred);
        if (VAR_2 < 0)
                FUNC_4("Failed to load system trust store: %s", FUNC_3(VAR_2));

        return 0;
}
