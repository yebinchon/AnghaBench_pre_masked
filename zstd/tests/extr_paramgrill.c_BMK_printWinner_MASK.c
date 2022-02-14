
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int result; int params; } ;
typedef TYPE_1__ winnerInfo_t ;
typedef int paramValues_t ;
typedef int U64 ;
typedef int FILE ;
typedef int BMK_benchResult_t ;


 int FUNC_0 (int *,TYPE_1__,size_t const) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,char*,int const) ;

__attribute__((used)) static void
FUNC_4(FILE* VAR_4, const int VAR_5, const BMK_benchResult_t VAR_6, const paramValues_t VAR_7, const size_t VAR_8)
{
    char VAR_9[15] = "Custom Level";
    winnerInfo_t VAR_10;
    VAR_10.params = VAR_7;
    VAR_10.result = VAR_6;

    FUNC_2(VAR_4, "\r%79s\r", "");

    if(VAR_5 != VAR_0) {
        FUNC_3(VAR_9, 15, "  Level %2d  ", VAR_5);
    }

    if(VAR_1) {
        const U64 VAR_11 = 60ULL * VAR_2;
        const U64 VAR_12 = FUNC_1(VAR_3);
        const U64 VAR_13 = VAR_12 / VAR_11;
        FUNC_2(VAR_4, "%1lu:%2lu:%05.2f - ",
                (unsigned long) VAR_13 / 60,
                (unsigned long) VAR_13 % 60,
                (double)(VAR_12 - (VAR_13 * VAR_11)) / VAR_2 );
    }

    FUNC_2(VAR_4, "/* %s */   ", VAR_9);
    FUNC_0(VAR_4, VAR_10, VAR_8);
}
