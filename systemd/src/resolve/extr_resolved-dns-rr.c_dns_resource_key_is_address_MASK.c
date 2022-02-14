
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ class; int type; } ;
typedef TYPE_1__ DnsResourceKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

bool FUNC_2(const DnsResourceKey *VAR_3) {
        FUNC_1(VAR_3);



        return VAR_3->class == VAR_0 && FUNC_0(VAR_3->type, VAR_1, VAR_2);
}
