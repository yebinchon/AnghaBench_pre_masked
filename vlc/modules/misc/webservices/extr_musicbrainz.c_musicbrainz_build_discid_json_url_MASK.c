
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int FUNC_0 (char**,char*,char const*,char const*,char*,char const*) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_1,
                                               const char *VAR_2,
                                               const char *VAR_3)
{
    char *VAR_4;
    if(FUNC_0(&VAR_4,
                "https://%s/ws/2/discid/%s?"
                "fmt=json"
                "&inc=artist-credits+recordings+release-groups"
                "&cdstubs=no"
                "%s%s",
                VAR_1 ? VAR_1 : VAR_0,
                VAR_2,
                VAR_3 ? "&" : "",
                VAR_3 ? VAR_3 : "" ) > -1 )
    {
        return VAR_4;
    }
    return ((void*)0);
}
