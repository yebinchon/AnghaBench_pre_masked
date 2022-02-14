
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* U32 ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (void* const) ;
 int FUNC_2 (char const**,unsigned int,char const*,int,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,char*,...) ;
 char** FUNC_8 (char const**,unsigned int,char**,unsigned int*,int) ;
 int FUNC_9 (char const**,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int) ;
 int FUNC_12 (void*) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int) ;
 void* FUNC_14 (char const**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (char const*) ;
 char FUNC_18 (char const) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 () ;

int FUNC_21(int VAR_7, char** VAR_8)
{
    int VAR_9,
        VAR_10=0,
        VAR_11=0,
        VAR_12=0,
        VAR_13=0;
    int VAR_14 = VAR_1;
    int VAR_15 = 1;
    unsigned VAR_16 = 0;
    const char** VAR_17 = (const char**)FUNC_13(VAR_7 * sizeof(const char*));
    unsigned VAR_18 = 0;
    const char* VAR_19 = VAR_8[0];
    const char* VAR_20 = ((void*)0);
    char* VAR_21 = ((void*)0);







    if (VAR_17==((void*)0)) { FUNC_6("zstd: %s \n", FUNC_16(VAR_3)); FUNC_11(1); }
    VAR_2 = VAR_5;


    { size_t VAR_22;
        for (VAR_22 = (int)FUNC_17(VAR_19); VAR_22 > 0; VAR_22--) { if (VAR_19[VAR_22] == '/') { VAR_22++; break; } }
        VAR_19 += VAR_22;
    }


    for(VAR_9=1; VAR_9<VAR_7; VAR_9++) {
        const char* VAR_23 = VAR_8[VAR_9];
        if(!VAR_23) continue;

        if (VAR_13==0) {


            if (!FUNC_15(VAR_23, "--")) { VAR_13=1; continue; }
            if (!FUNC_15(VAR_23, "--version")) { VAR_2=VAR_6; FUNC_6(VAR_0); FUNC_5(0); }
            if (!FUNC_15(VAR_23, "--help")) { VAR_2=VAR_6; FUNC_5(FUNC_19(VAR_19)); }
            if (!FUNC_15(VAR_23, "--verbose")) { VAR_4++; continue; }
            if (!FUNC_15(VAR_23, "--quiet")) { VAR_4--; continue; }


            if (VAR_23[0]=='-') {
                VAR_23++;

                while (VAR_23[0]!=0) {
                    switch(VAR_23[0])
                    {

                    case 'V': VAR_2=VAR_6; FUNC_6(VAR_0); FUNC_5(0);
                    case 'H':
                    case 'h': VAR_2=VAR_6; FUNC_5(FUNC_19(VAR_19));


                    case 'D': VAR_11 = 1; VAR_23++; break;


                    case 'v': VAR_4++; VAR_23++; break;


                    case 'q': VAR_4--; VAR_23++; break;







                    case 'b':

                            VAR_23++;
                            VAR_14 = FUNC_14(&VAR_23);
                            break;


                    case 'e':

                            VAR_23++;
                            VAR_15 = FUNC_14(&VAR_23);
                            break;


                    case 'i':
                        VAR_23++;
                        { U32 const VAR_24 = FUNC_14(&VAR_23);
                            FUNC_4(VAR_4);
                            FUNC_1(VAR_24);
                        }
                        break;


                    case 'B':
                        VAR_23++;
                        { size_t VAR_25 = FUNC_14(&VAR_23);
                            if (FUNC_18(*VAR_23)=='K') VAR_25<<=10, VAR_23++;
                            if (FUNC_18(*VAR_23)=='M') VAR_25<<=20, VAR_23++;
                            if (FUNC_18(*VAR_23)=='B') VAR_23++;
                            FUNC_4(VAR_4);
                            FUNC_0(VAR_25);
                        }
                        break;


                    case 'p': VAR_23++;
                        if ((*VAR_23>='0') && (*VAR_23<='9')) {
                            FUNC_3(FUNC_14(&VAR_23));
                        } else
                            VAR_10=1;
                        break;

                    default : FUNC_5(FUNC_10(VAR_19));
                    }
                }
                continue;
            }

        }

        if (VAR_11) {
            VAR_11 = 0;
            VAR_20 = VAR_23;
            continue;
        }


        VAR_17[VAR_18++] = VAR_23;
    }


    FUNC_7(3, VAR_0);
    FUNC_4(VAR_4);
    FUNC_2(VAR_17, VAR_18, VAR_20, VAR_14, VAR_15);

_end:
    if (VAR_10) FUNC_20();
    FUNC_12(VAR_21);





        FUNC_12((void*)VAR_17);
    return VAR_12;
}
