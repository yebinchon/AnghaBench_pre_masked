
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* qwords; } ;
typedef TYPE_1__ sd_id128_t ;
struct TYPE_6__ {int perturb; } ;
typedef TYPE_2__ sd_event ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(sd_event *VAR_2) {
        sd_id128_t VAR_3 = {};
        if (FUNC_0(VAR_2->perturb != VAR_0))
                return;

        if (FUNC_1(&VAR_3) >= 0)
                VAR_2->perturb = (VAR_3.qwords[0] ^ VAR_3.qwords[1]) % VAR_1;
}
