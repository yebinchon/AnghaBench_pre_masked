
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int t ;
typedef int U32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int,double,int) ;
 int FUNC_2 (char const* const) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int const*,int,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,double) ;
 int FUNC_6 (int,int,int,int,double,int) ;
 int VAR_2 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char const**,char*) ;
 int VAR_3 ;
 int FUNC_9 (char const**) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int *) ;

int FUNC_12(int VAR_4, const char** VAR_5)
{
    U32 VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8;
    int VAR_9 = VAR_3;
    int VAR_10 = 0;
    int VAR_11 = VAR_0;
    int VAR_12 = 0;
    U32 VAR_13 = 0;
    U32 VAR_14 = 0;
    int VAR_15 = 1;
    U32 VAR_16 = 0;
    const char* const VAR_17 = VAR_5[0];


    for (VAR_8=1; VAR_8<VAR_4; VAR_8++) {
        const char* VAR_18 = VAR_5[VAR_8];
        if(!VAR_18) continue;


        if (VAR_18[0]=='-') {

            if (FUNC_8(&VAR_18, "--memtest=")) { VAR_16 = FUNC_9(&VAR_18); continue; }

            if (!FUNC_10(VAR_18, "--memtest")) { VAR_16=1; continue; }
            if (!FUNC_10(VAR_18, "--no-big-tests")) { VAR_15=0; continue; }

            VAR_18++;
            while (*VAR_18!=0) {
                switch(*VAR_18)
                {
                case 'h':
                    return FUNC_2(VAR_17);

                case 'v':
                    VAR_18++;
                    VAR_2++;
                    break;

                case 'q':
                    VAR_18++;
                    VAR_2--;
                    break;

                case 'p':
                    VAR_18++;
                    VAR_13 = 1;
                    break;

                case 'i':
                    VAR_18++; VAR_14 = 0;
                    VAR_9 = (int)FUNC_9(&VAR_18);
                    break;

                case 'T':
                    VAR_18++;
                    VAR_9 = 0;
                    VAR_14 = FUNC_9(&VAR_18);
                    if (*VAR_18=='s') VAR_18++;
                    if (*VAR_18=='m') VAR_14 *= 60, VAR_18++;
                    if (*VAR_18=='n') VAR_18++;
                    break;

                case 's':
                    VAR_18++;
                    VAR_7 = 1;
                    VAR_6 = FUNC_9(&VAR_18);
                    break;

                case 't':
                    VAR_18++;
                    VAR_10 = (int)FUNC_9(&VAR_18);
                    break;

                case 'P':
                    VAR_18++;
                    VAR_11 = (int)FUNC_9(&VAR_18);
                    if (VAR_11>100) VAR_11 = 100;
                    break;

                default:
                    return (FUNC_2(VAR_17), 1);
    } } } }


    FUNC_0("Starting zstd tester (%i-bits, %s)\n", (int)(sizeof(size_t)*8), VAR_1);

    if (!VAR_7) {
        time_t const VAR_19 = FUNC_11(((void*)0));
        U32 const VAR_20 = FUNC_4(&VAR_19, sizeof(VAR_19), 1);
        VAR_6 = VAR_20 % 10000;
    }

    FUNC_0("Seed = %u\n", (unsigned)VAR_6);
    if (VAR_11!=VAR_0) FUNC_0("Compressibility : %i%%\n", VAR_11);

    if (VAR_16) {
        VAR_2 = FUNC_3(3, VAR_2);
        return FUNC_1(VAR_6, ((double)VAR_11) / 100, VAR_16);
    }

    if (VAR_9 < VAR_10) VAR_9 = VAR_10;

    if (VAR_10==0)
        VAR_12 = FUNC_5(0, ((double)VAR_11) / 100);
    if (!VAR_12)
        VAR_12 = FUNC_6(VAR_6, VAR_9, VAR_10, VAR_14, ((double)VAR_11) / 100, VAR_15);
    if (VAR_13) {
        int VAR_21;
        FUNC_0("Press Enter \n");
        VAR_21 = FUNC_7();
        (void)VAR_21;
    }
    return VAR_12;
}
