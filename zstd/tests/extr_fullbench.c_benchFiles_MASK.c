
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_compressionParameters ;
typedef int U64 ;
typedef int U32 ;
typedef int FILE ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*,...) ;
 int const VAR_0 ;
 int FUNC_2 (char const* const) ;
 int FUNC_3 (int,void* const,size_t,int,int ) ;
 int FUNC_4 (int * const) ;
 int * FUNC_5 (char const* const,char*) ;
 size_t FUNC_6 (void* const,int,size_t,int * const) ;
 int FUNC_7 (void* const) ;
 void* FUNC_8 (size_t) ;

__attribute__((used)) static int FUNC_9(U32 VAR_1,
                      const char** VAR_2, const int VAR_3,
                      int VAR_4, ZSTD_compressionParameters VAR_5)
{

    int VAR_6;
    for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
        const char* const VAR_7 = VAR_2[VAR_6];
        FILE* const VAR_8 = FUNC_5( VAR_7, "rb" );
        size_t VAR_9;


        if (VAR_8==((void*)0)) { FUNC_1( "Pb opening %s\n", VAR_7); return 11; }


        { U64 const VAR_10 = FUNC_2(VAR_7);
            if (VAR_10 == VAR_0) {
                FUNC_1( "Cannot measure size of %s\n", VAR_7);
                FUNC_4(VAR_8);
                return 11;
            }
            VAR_9 = FUNC_0(VAR_10*3) / 3;
            if ((U64)VAR_9 > VAR_10)
                VAR_9 = (size_t)VAR_10;
            if ((U64)VAR_9 < VAR_10) {
                FUNC_1("Not enough memory for '%s' full size; testing %u MB only... \n",
                        VAR_7, (unsigned)(VAR_9>>20));
        } }


        { void* const VAR_11 = FUNC_8(VAR_9);
            if (!VAR_11) { FUNC_1("\nError: not enough memory!\n"); FUNC_4(VAR_8); return 12; }


            FUNC_1("Loading %s...       \r", VAR_7);
            { size_t const VAR_12 = FUNC_6(VAR_11, 1, VAR_9, VAR_8);
                FUNC_4(VAR_8);
                if (VAR_12 != VAR_9) {
                    FUNC_1("\nError: problem reading file '%s' !!    \n", VAR_7);
                    FUNC_7(VAR_11);
                    return 13;
            } }


            FUNC_1("\r%70s\r", "");
            FUNC_1(" %s : \n", VAR_7);
            if (VAR_1) {
                FUNC_3(VAR_1, VAR_11, VAR_9, VAR_4, VAR_5);
            } else {
                for (VAR_1=0; VAR_1<100; VAR_1++) {
                    FUNC_3(VAR_1, VAR_11, VAR_9, VAR_4, VAR_5);
            } }

            FUNC_7(VAR_11);
    } }

    return 0;
}
