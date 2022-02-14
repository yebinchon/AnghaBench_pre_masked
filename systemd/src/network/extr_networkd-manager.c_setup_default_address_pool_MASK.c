
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Manager ;
typedef int AddressPool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int **,int ,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(Manager *VAR_2) {
        AddressPool *VAR_3;
        int VAR_4;

        FUNC_1(VAR_2);



        VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_1, "fd00::", 8);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_0, "10.0.0.0", 8);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_0, "172.16.0.0", 12);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_0, "192.168.0.0", 16);
        if (VAR_4 < 0)
                return VAR_4;

        return 0;
}
