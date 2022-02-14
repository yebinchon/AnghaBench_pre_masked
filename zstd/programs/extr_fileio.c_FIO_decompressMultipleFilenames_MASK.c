
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dstFile; } ;
typedef TYPE_1__ dRess_t ;
struct TYPE_11__ {int testMode; } ;
typedef TYPE_2__ FIO_prefs_t ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const**,unsigned int) ;
 TYPE_1__ FUNC_2 (TYPE_2__* const,char const*) ;
 int FUNC_3 (TYPE_2__* const,TYPE_1__,char const* const,char const* const) ;
 char* FUNC_4 (char const* const,char const*) ;
 int FUNC_5 (TYPE_1__) ;
 scalar_t__ FUNC_6 (TYPE_2__* const,int *,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 char const* FUNC_8 (int ) ;

int
FUNC_9(FIO_prefs_t* const VAR_1,
                                const char** VAR_2, unsigned VAR_3,
                                const char* VAR_4, const char* VAR_5,
                                const char* VAR_6)
{
    int VAR_7 = 0;
    dRess_t VAR_8 = FUNC_2(VAR_1, VAR_6);

    if (VAR_5) {
        unsigned VAR_9;
        if (!VAR_1->testMode) {
            VAR_8.dstFile = FUNC_6(VAR_1, ((void*)0), VAR_5);
            if (VAR_8.dstFile == 0) FUNC_0(19, "cannot open %s", VAR_5);
        }
        for (VAR_9=0; VAR_9<VAR_3; VAR_9++)
            VAR_7 |= FUNC_3(VAR_1, VAR_8, VAR_5, VAR_2[VAR_9]);
        if ((!VAR_1->testMode) && (FUNC_7(VAR_8.dstFile)))
            FUNC_0(72, "Write error : %s : cannot properly close output file",
                        FUNC_8(VAR_0));
    } else {
        unsigned VAR_10;
        for (VAR_10=0; VAR_10<VAR_3; VAR_10++) {
            const char* const VAR_11 = VAR_2[VAR_10];
            const char* const VAR_12 = FUNC_4(VAR_11, VAR_4);
            if (VAR_12 == ((void*)0)) { VAR_7=1; continue; }

            VAR_7 |= FUNC_3(VAR_1, VAR_8, VAR_12, VAR_11);
        }
        if (VAR_4)
            FUNC_1(VAR_2 ,VAR_3);
    }

    FUNC_5(VAR_8);
    return VAR_7;
}
