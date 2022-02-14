
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const* const,char* const,int,unsigned int const) ;
 char* FUNC_2 (char const* const) ;
 int FUNC_3 (char* const) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(int VAR_0, const char** VAR_1) {
    const char* const VAR_2 = VAR_1[0];
    if (VAR_0!=3) {
        FUNC_4("wrong arguments\n");
        FUNC_4("usage:\n");
        FUNC_4("%s FILE FRAME_SIZE\n", VAR_2);
        return 1;
    }

    { const char* const VAR_3 = VAR_1[1];
        unsigned const VAR_4 = (unsigned)FUNC_0(VAR_1[2]);

        char* const VAR_5 = FUNC_2(VAR_3);
        FUNC_1(VAR_3, VAR_5, 5, VAR_4);
        FUNC_3(VAR_5);
    }

    return 0;
}
