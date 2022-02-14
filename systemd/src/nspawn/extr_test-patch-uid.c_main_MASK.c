
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_3, char *VAR_4[]) {
        uid_t VAR_5, VAR_6;
        int VAR_7;

        FUNC_6(VAR_2);

        if (VAR_3 != 4) {
                FUNC_0("Expected PATH SHIFT RANGE parameters.");
                return VAR_0;
        }

        VAR_7 = FUNC_4(VAR_4[2], &VAR_5);
        if (VAR_7 < 0) {
                FUNC_1(VAR_7, "Failed to parse UID shift %s.", VAR_4[2]);
                return VAR_0;
        }

        VAR_7 = FUNC_3(VAR_4[3], &VAR_6);
        if (VAR_7 < 0) {
                FUNC_1(VAR_7, "Failed to parse UID range %s.", VAR_4[3]);
                return VAR_0;
        }

        VAR_7 = FUNC_5(VAR_4[1], VAR_5, VAR_6);
        if (VAR_7 < 0) {
                FUNC_1(VAR_7, "Failed to patch directory tree: %m");
                return VAR_0;
        }

        FUNC_2("Changed: %s", FUNC_7(VAR_7));

        return VAR_1;
}
