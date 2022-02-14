
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ class; scalar_t__ type; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

int FUNC_2(const DnsResourceKey *VAR_0, const DnsResourceKey *VAR_1) {
        int VAR_2;

        if (VAR_0 == VAR_1)
                return 1;

        VAR_2 = FUNC_0(FUNC_1(VAR_0), FUNC_1(VAR_1));
        if (VAR_2 <= 0)
                return VAR_2;

        if (VAR_0->class != VAR_1->class)
                return 0;

        if (VAR_0->type != VAR_1->type)
                return 0;

        return 1;
}
