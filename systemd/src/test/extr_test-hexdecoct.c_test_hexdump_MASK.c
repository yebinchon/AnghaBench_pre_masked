
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int data ;


 unsigned int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void) {
        uint8_t VAR_1[146];
        unsigned VAR_2;

        FUNC_1(VAR_0, ((void*)0), 0);
        FUNC_1(VAR_0, "", 0);
        FUNC_1(VAR_0, "", 1);
        FUNC_1(VAR_0, "x", 1);
        FUNC_1(VAR_0, "x", 2);
        FUNC_1(VAR_0, "foobar", 7);
        FUNC_1(VAR_0, "f\nobar", 7);
        FUNC_1(VAR_0, "xxxxxxxxxxxxxxxxxxxxyz", 23);

        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
                VAR_1[VAR_2] = VAR_2*2;

        FUNC_1(VAR_0, VAR_1, sizeof(VAR_1));
}
