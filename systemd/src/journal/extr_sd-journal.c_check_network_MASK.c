
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ on_network; } ;
typedef TYPE_1__ sd_journal ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(sd_journal *VAR_0, int VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->on_network)
                return;

        VAR_0->on_network = FUNC_1(VAR_1);
}
