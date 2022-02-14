
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int t ;
typedef int e_api ;
typedef int U32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const* const) ;
 int VAR_1 ;
 int FUNC_2 (int const*,int,int) ;
 int VAR_2 ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ,double) ;
 int FUNC_5 (int,int,int,double,int) ;
 int FUNC_6 (int,int,int,double,int) ;
 int FUNC_7 (int,int,int,double,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 () ;

 int VAR_5 ;

 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (int *) ;

int FUNC_11(int VAR_6, const char** VAR_7)
{
    U32 VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = VAR_5;
    int VAR_11 = 0;
    int VAR_12 = VAR_0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15 = (sizeof(size_t) == 8);
    e_api VAR_16 = 128;
    const char* const VAR_17 = VAR_7[0];
    int VAR_18;


    for(VAR_18=1; VAR_18<VAR_6; VAR_18++) {
        const char* VAR_19 = VAR_7[VAR_18];
        FUNC_3(VAR_19 != ((void*)0));


        if (VAR_19[0]=='-') {

            if (!FUNC_9(VAR_19, "--mt")) { VAR_16=129; VAR_11 += !VAR_11; continue; }
            if (!FUNC_9(VAR_19, "--newapi")) { VAR_16=130; VAR_11 += !VAR_11; continue; }
            if (!FUNC_9(VAR_19, "--no-big-tests")) { VAR_15=0; continue; }

            VAR_19++;
            while (*VAR_19!=0) {
                switch(*VAR_19)
                {
                case 'h':
                    return FUNC_1(VAR_17);

                case 'v':
                    VAR_19++;
                    VAR_4++;
                    break;

                case 'q':
                    VAR_19++;
                    VAR_4--;
                    break;

                case 'p':
                    VAR_19++;
                    VAR_14 = 1;
                    break;

                case 'i':
                    VAR_19++;
                    VAR_10=0; VAR_3=0;
                    while ((*VAR_19>='0') && (*VAR_19<='9')) {
                        VAR_10 *= 10;
                        VAR_10 += *VAR_19 - '0';
                        VAR_19++;
                    }
                    break;

                case 'T':
                    VAR_19++;
                    VAR_10=0; VAR_3=0;
                    while ((*VAR_19>='0') && (*VAR_19<='9')) {
                        VAR_3 *= 10;
                        VAR_3 += *VAR_19 - '0';
                        VAR_19++;
                    }
                    if (*VAR_19=='m') {
                        VAR_3 *=60, VAR_19++;
                        if (*VAR_19=='n') VAR_19++;
                    } else if (*VAR_19=='s') VAR_19++;
                    VAR_3 *= VAR_1;
                    break;

                case 's':
                    VAR_19++;
                    VAR_9=1;
                    VAR_8=0;
                    while ((*VAR_19>='0') && (*VAR_19<='9')) {
                        VAR_8 *= 10;
                        VAR_8 += *VAR_19 - '0';
                        VAR_19++;
                    }
                    break;

                case 't':
                    VAR_19++;
                    VAR_11=0;
                    while ((*VAR_19>='0') && (*VAR_19<='9')) {
                        VAR_11 *= 10;
                        VAR_11 += *VAR_19 - '0';
                        VAR_19++;
                    }
                    break;

                case 'P':
                    VAR_19++;
                    VAR_12=0;
                    while ((*VAR_19>='0') && (*VAR_19<='9')) {
                        VAR_12 *= 10;
                        VAR_12 += *VAR_19 - '0';
                        VAR_19++;
                    }
                    if (VAR_12<0) VAR_12=0;
                    if (VAR_12>100) VAR_12=100;
                    break;

                default:
                    return FUNC_1(VAR_17);
                }
    } } }


    FUNC_0("Starting zstream tester (%i-bits, %s)\n", (int)(sizeof(size_t)*8), VAR_2);

    if (!VAR_9) {
        time_t const VAR_20 = FUNC_10(((void*)0));
        U32 const VAR_21 = FUNC_2(&VAR_20, sizeof(VAR_20), 1);
        VAR_8 = VAR_21 % 10000;
    }

    FUNC_0("Seed = %u\n", (unsigned)VAR_8);
    if (VAR_12!=VAR_0) FUNC_0("Compressibility : %i%%\n", VAR_12);

    if (VAR_10<=0) VAR_10=1;

    if (VAR_11==0) {
        VAR_13 = FUNC_4(0, ((double)VAR_12) / 100);
    }

    if (!VAR_13) {
        switch(VAR_16)
        {
        case 128 :
            VAR_13 = FUNC_5(VAR_8, VAR_10, VAR_11, ((double)VAR_12) / 100, VAR_15);
            break;
        case 129 :
            VAR_13 = FUNC_6(VAR_8, VAR_10, VAR_11, ((double)VAR_12) / 100, VAR_15);
            break;
        case 130 :
            VAR_13 = FUNC_7(VAR_8, VAR_10, VAR_11, ((double)VAR_12) / 100, VAR_15);
            break;
        default :
            FUNC_3(0);
        }
    }

    if (VAR_14) {
        int VAR_22;
        FUNC_0("Press Enter \n");
        VAR_22 = FUNC_8();
        (void)VAR_22;
    }
    return VAR_13;
}
