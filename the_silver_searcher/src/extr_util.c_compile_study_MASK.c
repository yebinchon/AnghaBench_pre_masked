
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_extra ;
typedef int pcre ;


 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char*,int const,char const**,int*,int *) ;
 int * FUNC_3 (int *,int const,char const**) ;

void FUNC_4(pcre **VAR_0, pcre_extra **VAR_1, char *VAR_2, const int VAR_3, const int VAR_4) {
    const char *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    *VAR_0 = FUNC_2(VAR_2, VAR_3, &VAR_5, &VAR_6, ((void*)0));
    if (*VAR_0 == ((void*)0)) {
        FUNC_0("Bad regex! pcre_compile() failed at position %i: %s\nIf you meant to search for a literal string, run ag with -Q",
            VAR_6,
            VAR_5);
    }
    *VAR_1 = FUNC_3(*VAR_0, VAR_4, &VAR_5);
    if (*VAR_1 == ((void*)0)) {
        FUNC_1("pcre_study returned nothing useful. Error: %s", VAR_5);
    }
}
