
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef char const Manager ;
typedef int Hashmap ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(
                Manager *VAR_2,
                Hashmap** VAR_3,
                const char *VAR_4) {

        uid_t VAR_5;
        uint32_t VAR_6;
        int VAR_7;

        FUNC_3(VAR_2);
        FUNC_3(VAR_3);
        FUNC_3(VAR_4);

        VAR_7 = FUNC_10(VAR_4, &VAR_5);
        if (VAR_7 < 0 || VAR_5 == 0) {
                FUNC_7("Unable to parse UID reference serialization");
                return;
        }

        VAR_7 = FUNC_4(VAR_3, &VAR_1);
        if (VAR_7 < 0) {
                FUNC_9();
                return;
        }

        VAR_6 = FUNC_0(FUNC_5(*VAR_3, FUNC_1(VAR_5)));
        if (VAR_6 & VAR_0)
                return;

        VAR_6 |= VAR_0;

        VAR_7 = FUNC_6(*VAR_3, FUNC_1(VAR_5), FUNC_2(VAR_6));
        if (VAR_7 < 0) {
                FUNC_8(VAR_7, "Failed to add UID reference entry: %m");
                return;
        }
}
