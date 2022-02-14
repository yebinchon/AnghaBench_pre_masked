
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t size; size_t allocated; void* _data; } ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (void*,int *,size_t) ;
 int FUNC_7 (int *,size_t) ;
 void* FUNC_8 (void*,size_t) ;

__attribute__((used)) static int FUNC_9(DnsPacket *VAR_2, size_t VAR_3, void **VAR_4, size_t *VAR_5) {
        FUNC_3(VAR_2);

        if (VAR_2->size + VAR_3 > VAR_2->allocated) {
                size_t VAR_6, VAR_7;

                VAR_6 = FUNC_2((VAR_2->size + VAR_3) * 2);

                VAR_7 = FUNC_4(VAR_2);
                if (VAR_6 > VAR_7)
                        VAR_6 = VAR_7;

                if (VAR_2->size + VAR_3 > VAR_6)
                        return -VAR_0;

                if (VAR_2->_data) {
                        void *VAR_8;

                        VAR_8 = FUNC_8(VAR_2->_data, VAR_6);
                        if (!VAR_8)
                                return -VAR_1;

                        VAR_2->_data = VAR_8;
                } else {
                        VAR_2->_data = FUNC_5(VAR_6);
                        if (!VAR_2->_data)
                                return -VAR_1;

                        FUNC_6(VAR_2->_data, (uint8_t*) VAR_2 + FUNC_0(sizeof(DnsPacket)), VAR_2->size);
                        FUNC_7((uint8_t*) VAR_2->_data + VAR_2->size, VAR_6 - VAR_2->size);
                }

                VAR_2->allocated = VAR_6;
        }

        if (VAR_5)
                *VAR_5 = VAR_2->size;

        if (VAR_4)
                *VAR_4 = (uint8_t*) FUNC_1(VAR_2) + VAR_2->size;

        VAR_2->size += VAR_3;
        return 0;
}
