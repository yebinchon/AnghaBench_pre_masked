
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_mode_t {char* psz_mode; } ;


 size_t FUNC_0 (struct filter_mode_t const*) ;
 struct filter_mode_t const* VAR_0 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static const struct filter_mode_t *FUNC_2(const char *VAR_1)
{
    if ( VAR_1 == ((void*)0) || !FUNC_1( VAR_1, "auto" ) )
        VAR_1 = "x";

    for (size_t VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++)
    {
        if( !FUNC_1( VAR_1, VAR_0[VAR_2].psz_mode ) )
            return &VAR_0[VAR_2];
    }
    return ((void*)0);
}
