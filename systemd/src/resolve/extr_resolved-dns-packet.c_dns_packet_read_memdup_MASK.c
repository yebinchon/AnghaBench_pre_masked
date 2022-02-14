
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* DnsPacket ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,size_t,void const**,size_t*) ;
 void* FUNC_2 (void const*,size_t) ;

__attribute__((used)) static int FUNC_3(
                DnsPacket *VAR_1, size_t VAR_2,
                void **VAR_3, size_t *VAR_4,
                size_t *VAR_5) {

        const void *VAR_6;
        size_t VAR_7;
        int VAR_8;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_6, &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        if (VAR_2 <= 0)
                *VAR_3 = ((void*)0);
        else {
                void *VAR_9;

                VAR_9 = FUNC_2(VAR_6, VAR_2);
                if (!VAR_9)
                        return -VAR_0;

                *VAR_3 = VAR_9;
        }

        if (VAR_4)
                *VAR_4 = VAR_2;
        if (VAR_5)
                *VAR_5 = VAR_7;

        return 0;
}
