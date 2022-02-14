
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_4__ {int id; int oif; int family; int gw; } ;
typedef TYPE_1__ NextHop ;




 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int*,int,struct siphash*) ;

__attribute__((used)) static void FUNC_3(const NextHop *VAR_0, struct siphash *VAR_1) {
        FUNC_1(VAR_0);

        FUNC_2(&VAR_0->id, sizeof(VAR_0->id), VAR_1);
        FUNC_2(&VAR_0->oif, sizeof(VAR_0->oif), VAR_1);
        FUNC_2(&VAR_0->family, sizeof(VAR_0->family), VAR_1);

        switch (VAR_0->family) {
        case 129:
        case 128:
                FUNC_2(&VAR_0->gw, FUNC_0(VAR_0->family), VAR_1);

                break;
        default:

                break;
        }
}
