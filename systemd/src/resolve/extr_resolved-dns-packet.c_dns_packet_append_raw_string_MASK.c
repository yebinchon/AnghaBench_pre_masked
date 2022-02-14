
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int DnsPacket ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,void**,size_t*) ;
 int FUNC_2 (scalar_t__*,void const*,size_t) ;

int FUNC_3(DnsPacket *VAR_1, const void *VAR_2, size_t VAR_3, size_t *VAR_4) {
        void *VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2 || VAR_3 == 0);

        if (VAR_3 > 255)
                return -VAR_0;

        VAR_6 = FUNC_1(VAR_1, 1 + VAR_3, &VAR_5, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        ((uint8_t*) VAR_5)[0] = (uint8_t) VAR_3;

        FUNC_2(((uint8_t*) VAR_5) + 1, VAR_2, VAR_3);

        return 0;
}
