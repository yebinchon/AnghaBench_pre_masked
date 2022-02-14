
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ class; scalar_t__ protocol; int family; int type; } ;
typedef TYPE_1__ const DnsScope ;
typedef TYPE_1__ DnsResourceKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (int ) ;

bool FUNC_6(DnsScope *VAR_2, const DnsResourceKey *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);





        if (VAR_3->class != VAR_0)
                return 0;

        if (VAR_2->protocol == VAR_1) {





                if (!FUNC_3(VAR_3))
                        return 1;






                return !(FUNC_2(FUNC_4(VAR_3)) ||
                         FUNC_1(FUNC_4(VAR_3)));
        }




        VAR_4 = FUNC_5(VAR_3->type);
        if (VAR_4 < 0)
                return 1;

        return VAR_4 == VAR_2->family;
}
