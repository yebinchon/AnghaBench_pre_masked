
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int oif; int family; int gw; } ;
typedef TYPE_1__ NextHop ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(const NextHop *VAR_0, const NextHop *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->id, VAR_1->id);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_0(VAR_0->oif, VAR_1->oif);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_0(VAR_0->family, VAR_1->family);
        if (VAR_2 != 0)
                return VAR_2;

        switch (VAR_0->family) {
        case 129:
        case 128:

                VAR_2 = FUNC_2(&VAR_0->gw, &VAR_1->gw, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;

                return 0;
        default:

                return 0;
        }
}
