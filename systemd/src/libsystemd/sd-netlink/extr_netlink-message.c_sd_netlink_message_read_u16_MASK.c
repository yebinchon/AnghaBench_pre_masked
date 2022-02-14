
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int sd_netlink_message ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,unsigned short,int ) ;
 int FUNC_3 (int *,unsigned short,void**,int*) ;

int FUNC_4(sd_netlink_message *VAR_3, unsigned short VAR_4, uint16_t *VAR_5) {
        void *VAR_6;
        bool VAR_7;
        int VAR_8;

        FUNC_0(VAR_3, -VAR_0);

        VAR_8 = FUNC_2(VAR_3, ((void*)0), VAR_4, VAR_2);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_3(VAR_3, VAR_4, &VAR_6, &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;
        else if ((size_t) VAR_8 < sizeof(uint16_t))
                return -VAR_1;

        if (VAR_5) {
                if (VAR_7)
                        *VAR_5 = FUNC_1(*(uint16_t *) VAR_6);
                else
                        *VAR_5 = *(uint16_t *) VAR_6;
        }

        return 0;
}
