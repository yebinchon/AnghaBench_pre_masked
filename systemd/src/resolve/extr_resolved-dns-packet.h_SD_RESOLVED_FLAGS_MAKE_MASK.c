
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int DnsProtocol ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline uint64_t FUNC_0(DnsProtocol VAR_7, int VAR_8, bool VAR_9) {
        uint64_t VAR_10;



        VAR_10 = VAR_9 ? VAR_1 : 0;

        switch (VAR_7) {
        case 130:
                return VAR_10|VAR_2;

        case 129:
                return VAR_10|(VAR_8 == VAR_0 ? VAR_4 : VAR_3);

        case 128:
                return VAR_10|(VAR_8 == VAR_0 ? VAR_6 : VAR_5);

        default:
                return VAR_10;
        }
}
