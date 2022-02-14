
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef union in_addr_union const sd_bus_message ;


 int FUNC_0 (int) ;
 int FUNC_1 (union in_addr_union const*) ;
 int FUNC_2 (union in_addr_union const*,char*,unsigned char) ;
 int FUNC_3 (union in_addr_union const*,char,union in_addr_union const*,int ) ;
 int FUNC_4 (union in_addr_union const*) ;
 int FUNC_5 (union in_addr_union const*,char,char*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, int VAR_1, const union in_addr_union *VAR_2, unsigned char VAR_3) {
        int VAR_4;

        FUNC_1(VAR_0);
        FUNC_1(VAR_2);

        VAR_4 = FUNC_5(VAR_0, 'r', "iayu");
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_0, "i", VAR_1);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_3(VAR_0, 'y', VAR_2, FUNC_0(VAR_1));
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_0, "u", VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_4(VAR_0);
}
