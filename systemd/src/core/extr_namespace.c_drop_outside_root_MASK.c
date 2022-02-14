
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t MountEntry ;


 int FUNC_0 (size_t*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (size_t*) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, MountEntry *VAR_1, size_t *VAR_2) {
        MountEntry *VAR_3, *VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);


        if (!VAR_0)
                return;



        for (VAR_3 = VAR_1, VAR_4 = VAR_1; VAR_3 < VAR_1 + *VAR_2; VAR_3++) {

                if (!FUNC_4(FUNC_3(VAR_3), VAR_0)) {
                        FUNC_1("%s is outside of root directory.", FUNC_3(VAR_3));
                        FUNC_2(VAR_3);
                        continue;
                }

                *VAR_4 = *VAR_3;
                VAR_4++;
        }

        *VAR_2 = VAR_4 - VAR_1;
}
