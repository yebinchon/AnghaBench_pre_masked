
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sd_netlink ;
typedef int sd_event_source ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(sd_event_source *VAR_0, int VAR_1, uint32_t VAR_2, void *VAR_3) {
        sd_netlink *VAR_4 = VAR_3;
        int VAR_5;

        FUNC_0(VAR_4);

        VAR_5 = FUNC_1(VAR_4, ((void*)0));
        if (VAR_5 < 0)
                return VAR_5;

        return 1;
}
