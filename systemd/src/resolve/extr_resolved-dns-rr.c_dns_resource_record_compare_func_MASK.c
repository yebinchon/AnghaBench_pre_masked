
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int key; } ;
typedef TYPE_1__ DnsResourceRecord ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_3(const DnsResourceRecord *VAR_0, const DnsResourceRecord *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_1(VAR_0->key, VAR_1->key);
        if (VAR_2 != 0)
                return VAR_2;

        if (FUNC_2(VAR_0, VAR_1))
                return 0;



        return FUNC_0(VAR_0, VAR_1);
}
