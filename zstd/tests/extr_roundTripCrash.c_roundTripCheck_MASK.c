
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t) ;
 char* FUNC_1 (size_t const) ;
 scalar_t__ FUNC_2 (size_t const) ;
 size_t FUNC_3 (void*,size_t const,void*,size_t const,void const*,size_t) ;
 size_t FUNC_4 (void const*,void*,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (size_t const) ;
 size_t FUNC_10 (void*,size_t const,void*,size_t const,void const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_11(const void* VAR_1, size_t VAR_2, int VAR_3)
{
    size_t const VAR_4 = FUNC_0(VAR_2);
    void* VAR_5 = FUNC_9(VAR_4);
    void* VAR_6 = FUNC_9(VAR_4);

    if (!VAR_5 || !VAR_6) {
        FUNC_7(VAR_0, "not enough memory ! \n");
        FUNC_6 (1);
    }

    { size_t const VAR_7 = VAR_3 ?
                  FUNC_3(VAR_6, VAR_4, VAR_5, VAR_4, VAR_1, VAR_2)
                : FUNC_10(VAR_6, VAR_4, VAR_5, VAR_4, VAR_1, VAR_2);
        if (FUNC_2(VAR_7)) {
            FUNC_7(VAR_0, "roundTripTest error : %s \n", FUNC_1(VAR_7));
            FUNC_5(1);
        }
        if (VAR_7 != VAR_2) {
            FUNC_7(VAR_0, "Incorrect regenerated size : %u != %u\n", (unsigned)VAR_7, (unsigned)VAR_2);
            FUNC_5(1);
        }
        if (FUNC_4(VAR_1, VAR_6, VAR_2) != VAR_2) {
            FUNC_7(VAR_0, "Silent decoding corruption !!!");
            FUNC_5(1);
        }
    }

    FUNC_8(VAR_5);
    FUNC_8(VAR_6);
}
