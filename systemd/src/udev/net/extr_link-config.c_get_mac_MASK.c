
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ether_addr {int* ether_addr_octet; } ;
typedef int sd_device ;
typedef int result ;
typedef scalar_t__ MACAddressPolicy ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,unsigned int*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,unsigned int) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int*,int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int*,int) ;

__attribute__((used)) static int FUNC_12(sd_device *VAR_4, MACAddressPolicy VAR_5, struct ether_addr *VAR_6) {
        unsigned VAR_7;
        bool VAR_8 = VAR_5 == VAR_2;
        int VAR_9;

        FUNC_1(FUNC_0(VAR_5, VAR_2, VAR_1));

        VAR_9 = FUNC_3(VAR_4, "addr_assign_type", &VAR_7);
        if (VAR_9 < 0)
                return VAR_9;
        switch (VAR_7) {
        case 129:
                return FUNC_4(VAR_4, "MAC on the device already set by userspace");
        case 128:
                return FUNC_4(VAR_4, "MAC on the device already set based on another device");
        case 130:
        case 131:
                break;
        default:
                return FUNC_5(VAR_4, "Unknown addr_assign_type %u, ignoring", VAR_7);
        }

        if (VAR_8 == (VAR_7 == 130))
                return FUNC_4(VAR_4, "MAC on the device already matches policy *%s*",
                                        FUNC_7(VAR_5));

        if (VAR_8) {
                FUNC_4(VAR_4, "Using random bytes to generate MAC");
                FUNC_11(VAR_6->ether_addr_octet, VAR_0);
        } else {
                uint64_t VAR_10;

                VAR_9 = FUNC_10(VAR_4,
                                                    FUNC_9(VAR_3),
                                                    &VAR_10);
                if (VAR_9 < 0)
                        return FUNC_6(VAR_4, VAR_9, "Could not generate persistent MAC: %m");

                FUNC_4(VAR_4, "Using generated persistent MAC address");
                FUNC_2(VAR_0 <= sizeof(VAR_10));
                FUNC_8(VAR_6->ether_addr_octet, &VAR_10, VAR_0);
        }


        VAR_6->ether_addr_octet[0] &= 0xfe;
        VAR_6->ether_addr_octet[0] |= 0x02;
        return 1;
}
