
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuffer ;
typedef int rbuffer ;


 int FUNC_0 (char*,int,unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(unsigned VAR_0) {
        char VAR_1[196*1024 - 7];
        char VAR_2[sizeof(VAR_1)];
        int VAR_3;

        VAR_3 = FUNC_0("foo", 3, VAR_0);
        FUNC_1(VAR_3 >= 0);

        FUNC_7(VAR_2);
        FUNC_1(FUNC_4(VAR_3, VAR_2, sizeof(VAR_2)) == 3);
        FUNC_1(FUNC_6(VAR_2, "foo"));

        VAR_3 = FUNC_5(VAR_3);

        VAR_3 = FUNC_0("", 0, VAR_0);
        FUNC_1(VAR_3 >= 0);

        FUNC_7(VAR_2);
        FUNC_1(FUNC_4(VAR_3, VAR_2, sizeof(VAR_2)) == 0);
        FUNC_1(FUNC_6(VAR_2, ""));

        VAR_3 = FUNC_5(VAR_3);

        FUNC_3(VAR_1, sizeof(VAR_1));

        VAR_3 = FUNC_0(VAR_1, sizeof(VAR_1), VAR_0);
        FUNC_1(VAR_3 >= 0);

        FUNC_7(VAR_2);
        FUNC_1(FUNC_4(VAR_3, VAR_2, sizeof(VAR_2)) == sizeof(VAR_2));
        FUNC_1(FUNC_2(VAR_2, VAR_1, sizeof(VAR_2)) == 0);

        VAR_3 = FUNC_5(VAR_3);
}
