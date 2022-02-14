
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink_message ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (int *,unsigned short,void**,int *) ;

int FUNC_3(sd_netlink_message *VAR_2, unsigned short VAR_3, size_t VAR_4, void *VAR_5) {
        void *VAR_6;
        int VAR_7;

        FUNC_0(VAR_2, -VAR_0);

        VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_6, ((void*)0));
        if (VAR_7 < 0)
                return VAR_7;

        if ((size_t) VAR_7 < VAR_4)
                return -VAR_1;

        if (VAR_5)
                FUNC_1(VAR_5, VAR_6, VAR_4);

        return VAR_7;
}
