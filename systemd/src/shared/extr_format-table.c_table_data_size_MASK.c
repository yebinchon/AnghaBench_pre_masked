
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int TableDataType ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static size_t FUNC_2(TableDataType VAR_0, const void *VAR_1) {

        switch (VAR_0) {

        case 149:
                return 0;

        case 138:
                return FUNC_1(VAR_1) + 1;

        case 151:
                return sizeof(bool);

        case 135:
        case 133:
        case 134:
        case 137:
        case 136:
                return sizeof(usec_t);

        case 139:
        case 143:
        case 129:
        case 150:
                return sizeof(uint64_t);

        case 144:
        case 130:
                return sizeof(uint32_t);

        case 145:
        case 131:
                return sizeof(uint16_t);

        case 142:
        case 128:
                return sizeof(uint8_t);

        case 146:
        case 132:
        case 140:
        case 148:
                return sizeof(int);

        case 141:
                return sizeof(struct in_addr);

        case 147:
                return sizeof(struct in6_addr);

        default:
                FUNC_0("Uh? Unexpected cell type");
        }
}
