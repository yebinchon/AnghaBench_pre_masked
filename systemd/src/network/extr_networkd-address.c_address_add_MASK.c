
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_5__ {int addresses_foreign; int addresses; } ;
typedef TYPE_1__ Link ;
typedef int Address ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,union in_addr_union const*,unsigned char,int **) ;
 int FUNC_1 (TYPE_1__*,int,union in_addr_union const*,unsigned char,int **) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(Link *VAR_2, int VAR_3, const union in_addr_union *VAR_4, unsigned char VAR_5, Address **VAR_6) {
        Address *VAR_7;
        int VAR_8;

        VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);
        if (VAR_8 == -VAR_0) {

                VAR_8 = FUNC_0(VAR_2, &VAR_2->addresses, VAR_3, VAR_4, VAR_5, &VAR_7);
                if (VAR_8 < 0)
                        return VAR_8;
        } else if (VAR_8 == 0) {

                VAR_8 = FUNC_2(&VAR_2->addresses, &VAR_1);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_8 = FUNC_3(VAR_2->addresses, VAR_7);
                if (VAR_8 < 0)
                        return VAR_8;

                FUNC_4(VAR_2->addresses_foreign, VAR_7);
        } else if (VAR_8 == 1) {

                ;
        } else
                return VAR_8;

        if (VAR_6)
                *VAR_6 = VAR_7;

        return 0;
}
