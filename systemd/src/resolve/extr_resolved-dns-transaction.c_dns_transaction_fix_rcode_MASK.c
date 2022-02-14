
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ answer_rcode; } ;
typedef TYPE_1__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(DnsTransaction *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);
        if (VAR_2->answer_rcode != VAR_0)
                return 0;

        VAR_3 = FUNC_1(VAR_2, ((void*)0));
        if (VAR_3 <= 0)
                return VAR_3;

        VAR_2->answer_rcode = VAR_1;
        return 0;
}
