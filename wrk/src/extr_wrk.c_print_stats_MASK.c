
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef long double uint64_t ;
struct TYPE_6__ {long double max; } ;
typedef TYPE_1__ stats ;


 int FUNC_0 (long double,char* (*) (long double),int) ;
 int FUNC_1 (char*,char*) ;
 long double FUNC_2 (TYPE_1__*) ;
 long double FUNC_3 (TYPE_1__*,long double) ;
 char* FUNC_4 (TYPE_1__*,long double,long double,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_0, stats *VAR_1, char *(*VAR_2)(long double)) {
    uint64_t VAR_3 = VAR_1->max;
    long double VAR_4 = FUNC_2(VAR_1);
    long double VAR_5 = FUNC_3(VAR_1, VAR_4);

    FUNC_1("    %-10s", VAR_0);
    FUNC_0(VAR_4, VAR_2, 8);
    FUNC_0(VAR_5, VAR_2, 10);
    FUNC_0(VAR_3, VAR_2, 9);
    FUNC_1("%8.2Lf%%\n", FUNC_4(VAR_1, VAR_4, VAR_5, 1));
}
