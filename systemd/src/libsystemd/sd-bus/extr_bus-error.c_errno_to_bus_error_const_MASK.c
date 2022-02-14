
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static sd_bus_error FUNC_1(int VAR_15) {

        if (VAR_15 < 0)
                VAR_15 = -VAR_15;

        switch (VAR_15) {

        case 133:
                return VAR_0;

        case 131:
        case 145:
                return FUNC_0(VAR_1, "Access denied");

        case 138:
                return FUNC_0(VAR_8, "Invalid argument");

        case 130:
                return FUNC_0(VAR_14, "No such process");

        case 134:
                return FUNC_0(VAR_6, "File not found");

        case 139:
                return FUNC_0(VAR_5, "File exists");

        case 128:
        case 129:
                return FUNC_0(VAR_13, "Timed out");

        case 137:
                return FUNC_0(VAR_9, "Input/output error");

        case 136:
        case 141:
        case 140:
                return FUNC_0(VAR_4, "Disconnected");

        case 132:
                return FUNC_0(VAR_11, "Not supported");

        case 143:
                return FUNC_0(VAR_3, "Address not available");

        case 135:
                return FUNC_0(VAR_10, "Limits exceeded");

        case 144:
                return FUNC_0(VAR_2, "Address in use");

        case 142:
                return FUNC_0(VAR_7, "Inconsistent message");
        }

        return VAR_12;
}
