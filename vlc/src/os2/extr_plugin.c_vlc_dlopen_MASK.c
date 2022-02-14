
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 void* FUNC_1 (char*,int const) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;

void *FUNC_4(const char *VAR_2, bool VAR_3 )
{
    const int VAR_4 = VAR_3 ? VAR_0 : VAR_1;
    char *VAR_5 = FUNC_0( VAR_2 );
    if (FUNC_3(VAR_5 == ((void*)0)))
        return ((void*)0);

    void *VAR_6 = FUNC_1( VAR_5, VAR_4 );
    FUNC_2( VAR_5 );
    return VAR_6;
}
