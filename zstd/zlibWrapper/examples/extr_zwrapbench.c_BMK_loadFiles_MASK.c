
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U64 ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,...) ;
 size_t VAR_0 ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char*,int,size_t,int *) ;

__attribute__((used)) static void FUNC_8(void* VAR_1, size_t VAR_2,
                          size_t* VAR_3,
                          const char** VAR_4, unsigned VAR_5)
{
    size_t VAR_6 = 0, VAR_7 = 0;
    unsigned VAR_8;
    for (VAR_8=0; VAR_8<VAR_5; VAR_8++) {
        FILE* VAR_9;
        U64 VAR_10 = FUNC_3(VAR_4[VAR_8]);
        if (FUNC_4(VAR_4[VAR_8])) {
            FUNC_0(2, "Ignoring %s directory...       \n", VAR_4[VAR_8]);
            VAR_3[VAR_8] = 0;
            continue;
        }
        if (VAR_10 == VAR_0) {
            FUNC_0(2, "Cannot determine size of %s ...    \n", VAR_4[VAR_8]);
            VAR_3[VAR_8] = 0;
            continue;
        }
        VAR_9 = FUNC_6(VAR_4[VAR_8], "rb");
        if (VAR_9==((void*)0)) FUNC_2(10, "impossible to open file %s", VAR_4[VAR_8]);
        FUNC_1(2, "Loading %s...       \r", VAR_4[VAR_8]);
        if (VAR_10 > VAR_2-VAR_6) VAR_10 = VAR_2-VAR_6, VAR_5=VAR_8;
        { size_t const VAR_11 = FUNC_7(((char*)VAR_1)+VAR_6, 1, (size_t)VAR_10, VAR_9);
          if (VAR_11 != (size_t)VAR_10) FUNC_2(11, "could not read %s", VAR_4[VAR_8]);
          VAR_6 += VAR_11; }
        VAR_3[VAR_8] = (size_t)VAR_10;
        VAR_7 += (size_t)VAR_10;
        FUNC_5(VAR_9);
    }

    if (VAR_7 == 0) FUNC_2(12, "no data to bench");
}
