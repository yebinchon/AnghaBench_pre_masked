
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int DnsPacket ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,void**,size_t*) ;
 int FUNC_2 (void*,int ) ;

int FUNC_3(DnsPacket *VAR_0, uint32_t VAR_1, size_t *VAR_2) {
        void *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        VAR_4 = FUNC_1(VAR_0, sizeof(uint32_t), &VAR_3, VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        FUNC_2(VAR_3, VAR_1);

        return 0;
}
