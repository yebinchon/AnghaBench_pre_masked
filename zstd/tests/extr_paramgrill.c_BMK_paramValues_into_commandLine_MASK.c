
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;
typedef int FILE ;


 size_t VAR_0 ;
 int FUNC_0 (int *,size_t,scalar_t__,int ) ;
 int FUNC_1 (int *,char*,...) ;
 char** VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_2(FILE* VAR_4, const paramValues_t VAR_5)
{
    varInds_t VAR_6;
    int VAR_7 = 1;
    FUNC_1(VAR_4,"--zstd=");
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_2[VAR_6]) { continue; }
        if (!VAR_7) { FUNC_1(VAR_4, ","); }
        FUNC_1(VAR_4,"%s=", VAR_1[VAR_6]);

        if (VAR_6 == VAR_3) { FUNC_1(VAR_4,"%u", (unsigned)VAR_5.vals[VAR_6]); }
        else { FUNC_0(VAR_4, VAR_6, VAR_5.vals[VAR_6], 0); }
        VAR_7 = 0;
    }
    FUNC_1(VAR_4, "\n");
}
