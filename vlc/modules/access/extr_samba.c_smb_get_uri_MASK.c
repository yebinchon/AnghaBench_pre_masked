
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*,char*,char const*,...) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(
                       const char *VAR_2,
                       const char *VAR_3, const char *VAR_4,
                       const char *VAR_5, const char *VAR_6,
                       const char *VAR_7)
{
    char *VAR_8;

    FUNC_1(VAR_5);


    if( (VAR_3
        ? FUNC_0( &VAR_8, "smb://%s%s%s%s%s@%s%s%s%s",
                         VAR_2 ? VAR_2 : "", VAR_2 ? ";" : "",
                         VAR_3, VAR_4 ? ":" : "",
                         VAR_4 ? VAR_4 : "", VAR_5,
                         VAR_6 ? VAR_6 : "", VAR_7 ? "/" : "", VAR_7 ? VAR_7 : "" )
        : FUNC_0( &VAR_8, "smb://%s%s%s%s", VAR_5,
                         VAR_6 ? VAR_6 : "", VAR_7 ? "/" : "", VAR_7 ? VAR_7 : "" )) == -1 )
        VAR_8 = ((void*)0);
    return VAR_8;
}
