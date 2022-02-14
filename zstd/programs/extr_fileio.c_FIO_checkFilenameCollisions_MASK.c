
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,unsigned int,int,int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 char* FUNC_5 (char const*,char const) ;

int FUNC_6(const char** VAR_1, unsigned VAR_2) {
    const char **VAR_3, *VAR_4, *VAR_5, *VAR_6;
    unsigned VAR_7;




    VAR_4 = "/";


    VAR_3 = (const char**) FUNC_2(sizeof(char*) * VAR_2);
    if (!VAR_3) {
        FUNC_0("Unable to malloc new str array, not checking for name collisions\n");
        return 1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        VAR_6 = FUNC_5(VAR_1[VAR_7], VAR_4[0]);
        if (VAR_6 == ((void*)0)) {
            VAR_3[VAR_7] = VAR_1[VAR_7];
        } else {
            VAR_3[VAR_7] = VAR_6+1;
        }
    }

    FUNC_3((void*)VAR_3, VAR_2, sizeof(char*), VAR_0);
    VAR_5 = VAR_3[0];
    for (VAR_7 = 1; VAR_7 < VAR_2; ++VAR_7) {
        if (FUNC_4(VAR_5, VAR_3[VAR_7]) == 0) {
            FUNC_0("WARNING: Two files have same filename: %s\n", VAR_5);
        }
        VAR_5 = VAR_3[VAR_7];
    }

    FUNC_1((void*)VAR_3);
    return 0;
}
