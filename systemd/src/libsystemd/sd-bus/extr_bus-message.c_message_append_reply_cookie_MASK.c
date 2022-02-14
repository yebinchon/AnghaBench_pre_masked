
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int sd_bus_message ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_2, uint64_t VAR_3) {
        FUNC_1(VAR_2);

        if (FUNC_0(VAR_2))
                return FUNC_3(VAR_2, VAR_0, VAR_3);
        else {

                if (VAR_3 > 0xffffffffUL)
                        return -VAR_1;

                return FUNC_2(VAR_2, VAR_0, (uint32_t) VAR_3);
        }
}
