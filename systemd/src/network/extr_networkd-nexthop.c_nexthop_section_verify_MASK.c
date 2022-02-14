
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gw; int family; int section; } ;
typedef TYPE_1__ NextHop ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(NextHop *VAR_1) {
        if (FUNC_1(VAR_1->section))
                return -VAR_0;

        if (FUNC_0(VAR_1->family, &VAR_1->gw) < 0)
                return -VAR_0;

        return 0;
}
