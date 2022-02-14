
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void**,int) ;
 char** FUNC_2 (void**,int) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_3) {
    const char* VAR_4;
    void* VAR_5[VAR_0];
    char** VAR_6;
    int VAR_7, VAR_8;

    switch (VAR_3) {
        case 132: VAR_4 = "SIGABRT"; break;
        case 131: VAR_4 = "SIGFPE"; break;
        case 130: VAR_4 = "SIGILL"; break;
        case 129: VAR_4 = "SIGINT"; break;
        case 128: VAR_4 = "SIGSEGV"; break;
        default: VAR_4 = "UNKNOWN";
    }

    FUNC_0("Caught %s signal, printing stack:\n", VAR_4);

    VAR_7 = FUNC_1(VAR_5, VAR_0);
    if (VAR_7 == 0) {
        FUNC_0("\n");
        return;
    }

    VAR_6 = FUNC_2(VAR_5, VAR_7);

    for (VAR_8 = VAR_2; VAR_8 < VAR_7; VAR_8++) {
        FUNC_0("%s\n", VAR_6[VAR_8]);
    }
    FUNC_3(VAR_6);

    FUNC_5(VAR_3, VAR_1);
    FUNC_4(VAR_3);
}
