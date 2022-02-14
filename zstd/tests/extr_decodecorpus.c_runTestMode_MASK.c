
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ genType_e ;
typedef int UTIL_time_t ;
typedef scalar_t__ U64 ;
typedef scalar_t__ U32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int,...) ;
 unsigned int const VAR_0 ;
 scalar_t__ const FUNC_2 (int const) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static int FUNC_6(U32 VAR_2, unsigned VAR_3, unsigned const VAR_4,
                       genType_e VAR_5)
{
    unsigned VAR_6;

    UTIL_time_t const VAR_7 = FUNC_3();
    U64 const VAR_8 = VAR_4 * VAR_0;

    if (VAR_3 == 0 && !VAR_4) VAR_3 = 1;

    FUNC_0("seed: %u\n", (unsigned)VAR_2);

    for (VAR_6 = 0; VAR_6 < VAR_3 || FUNC_2(VAR_7) < VAR_8; VAR_6++) {
        if (VAR_6 < VAR_3)
            FUNC_1("\r%u/%u        ", VAR_6, VAR_3);
        else
            FUNC_1("\r%u           ", VAR_6);

        { int const VAR_9 = (VAR_5 == VAR_1) ?
                            FUNC_5(&VAR_2) :
                            FUNC_4(&VAR_2);
            if (VAR_9) return VAR_9;
        }
    }

    FUNC_0("\r%u tests completed: ", VAR_6);
    FUNC_0("OK\n");

    return 0;
}
