
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_serial_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_4(void) {
        key_serial_t VAR_5;






        VAR_5 = FUNC_1(VAR_3, 0, 0, 0, 0);
        if (VAR_5 == -1) {
                if (VAR_4 == VAR_1)
                        FUNC_2(VAR_4, "Kernel keyring not supported, ignoring.");
                else if (FUNC_0(VAR_4, VAR_0, VAR_2))
                        FUNC_2(VAR_4, "Kernel keyring access prohibited, ignoring.");
                else
                        return FUNC_3(VAR_4, "Setting up kernel keyring failed: %m");
        }

        return 0;
}
