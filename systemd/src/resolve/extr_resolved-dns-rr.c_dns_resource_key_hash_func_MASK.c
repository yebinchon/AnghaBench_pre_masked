
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_5__ {int type; int class; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,struct siphash*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,int,struct siphash*) ;

__attribute__((used)) static void FUNC_4(const DnsResourceKey *VAR_0, struct siphash *VAR_1) {
        FUNC_0(VAR_0);

        FUNC_1(FUNC_2(VAR_0), VAR_1);
        FUNC_3(&VAR_0->class, sizeof(VAR_0->class), VAR_1);
        FUNC_3(&VAR_0->type, sizeof(VAR_0->type), VAR_1);
}
