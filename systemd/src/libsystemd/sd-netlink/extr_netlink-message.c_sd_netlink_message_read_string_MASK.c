
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink_message ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,unsigned short,int ) ;
 int FUNC_2 (int *,unsigned short,void**,int *) ;
 size_t FUNC_3 (void*,int) ;

int FUNC_4(sd_netlink_message *VAR_3, unsigned short VAR_4, const char **VAR_5) {
        int VAR_6;
        void *VAR_7;

        FUNC_0(VAR_3, -VAR_0);

        VAR_6 = FUNC_1(VAR_3, ((void*)0), VAR_4, VAR_2);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_7, ((void*)0));
        if (VAR_6 < 0)
                return VAR_6;
        else if (FUNC_3(VAR_7, VAR_6) >= (size_t) VAR_6)
                return -VAR_1;

        if (VAR_5)
                *VAR_5 = (const char *) VAR_7;

        return 0;
}
