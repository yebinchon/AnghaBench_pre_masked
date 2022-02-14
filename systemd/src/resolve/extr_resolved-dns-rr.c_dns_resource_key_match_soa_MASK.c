
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ class; scalar_t__ type; } ;
typedef TYPE_1__ DnsResourceKey ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const DnsResourceKey *VAR_1, const DnsResourceKey *VAR_2) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_1);



        if (VAR_2->class != VAR_1->class)
                return 0;

        if (VAR_2->type != VAR_0)
                return 0;

        return FUNC_1(FUNC_2(VAR_1), FUNC_2(VAR_2));
}
