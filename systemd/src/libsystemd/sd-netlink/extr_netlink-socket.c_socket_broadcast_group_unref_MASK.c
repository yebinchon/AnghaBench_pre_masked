
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int,unsigned int) ;

int FUNC_4(sd_netlink *VAR_0, unsigned VAR_1) {
        unsigned VAR_2;
        int VAR_3;

        FUNC_0(*VAR_0);

        VAR_2 = FUNC_1(VAR_0, VAR_1);

        FUNC_0(VAR_2 > 0);

        VAR_2--;

        VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_2 > 0)

                return 0;

        VAR_3 = FUNC_2(VAR_0, VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
