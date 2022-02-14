
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int by_key; int by_expiry; } ;
typedef TYPE_1__ DnsCache ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(DnsCache *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        VAR_3 = FUNC_2(&VAR_2->by_expiry, VAR_0);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_1(&VAR_2->by_key, &VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        return VAR_3;
}
