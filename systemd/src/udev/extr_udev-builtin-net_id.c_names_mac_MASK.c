
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {unsigned int* mac; int mac_valid; } ;
typedef int sd_device ;



 int VAR_0 ;
 int FUNC_0 (int *,char*,char const**) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned long FUNC_2 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_3(sd_device *VAR_1, struct netnames *VAR_2) {
        const char *VAR_3;
        unsigned long VAR_4;
        unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
        int VAR_11;




        VAR_11 = FUNC_0(VAR_1, "type", &VAR_3);
        if (VAR_11 < 0)
                return VAR_11;

        VAR_4 = FUNC_2(VAR_3, ((void*)0), 0);
        switch (VAR_4) {



        case 128:
                return -VAR_0;
        default:
                break;
        }


        VAR_11 = FUNC_0(VAR_1, "addr_assign_type", &VAR_3);
        if (VAR_11 < 0)
                return VAR_11;
        VAR_4 = FUNC_2(VAR_3, ((void*)0), 0);
        if (VAR_4 != 0)
                return 0;

        VAR_11 = FUNC_0(VAR_1, "address", &VAR_3);
        if (VAR_11 < 0)
                return VAR_11;
        if (FUNC_1(VAR_3, "%x:%x:%x:%x:%x:%x", &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10) != 6)
                return -VAR_0;


        if (VAR_5 + VAR_6 + VAR_7 + VAR_8 + VAR_9 + VAR_10 == 0)
                return -VAR_0;

        VAR_2->mac[0] = VAR_5;
        VAR_2->mac[1] = VAR_6;
        VAR_2->mac[2] = VAR_7;
        VAR_2->mac[3] = VAR_8;
        VAR_2->mac[4] = VAR_9;
        VAR_2->mac[5] = VAR_10;
        VAR_2->mac_valid = 1;
        return 0;
}
