
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DnsPacket ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t,void**,size_t*) ;
 int FUNC_2 (void*,void const*,size_t) ;

int FUNC_3(DnsPacket *VAR_0, const void *VAR_1, size_t VAR_2, size_t *VAR_3) {
        void *VAR_4;
        int VAR_5;

        FUNC_0(VAR_0);

        VAR_5 = FUNC_1(VAR_0, VAR_2, &VAR_4, VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        FUNC_2(VAR_4, VAR_1, VAR_2);
        return 0;
}
