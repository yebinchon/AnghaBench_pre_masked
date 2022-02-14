
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int class; int type; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_3(const DnsResourceKey *VAR_0, const DnsResourceKey *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_1(FUNC_2(VAR_0), FUNC_2(VAR_1));
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_0(VAR_0->type, VAR_1->type);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_0(VAR_0->class, VAR_1->class);
        if (VAR_2 != 0)
                return VAR_2;

        return 0;
}
