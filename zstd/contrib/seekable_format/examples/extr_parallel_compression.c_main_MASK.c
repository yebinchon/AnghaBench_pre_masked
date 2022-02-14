
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const* const,char const* const,int,unsigned int const,int const) ;
 char* FUNC_2 (char const* const) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_0, const char** VAR_1) {
    const char* const VAR_2 = VAR_1[0];
    if (VAR_0!=4) {
        FUNC_3("wrong arguments\n");
        FUNC_3("usage:\n");
        FUNC_3("%s FILE FRAME_SIZE NB_THREADS\n", VAR_2);
        return 1;
    }

    { const char* const VAR_3 = VAR_1[1];
        unsigned const VAR_4 = (unsigned)FUNC_0(VAR_1[2]);
        int const VAR_5 = FUNC_0(VAR_1[3]);

        const char* const VAR_6 = FUNC_2(VAR_3);
        FUNC_1(VAR_3, VAR_6, 5, VAR_4, VAR_5);
    }

    return 0;
}
