
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_type_entry {char* psz_scheme; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_2( const void *VAR_0, const void *VAR_1 )
{
    const struct item_type_entry *VAR_2 = VAR_1;
    const char *VAR_3 = VAR_0, *VAR_4 = VAR_2->psz_scheme;

    return FUNC_1( VAR_3, VAR_4, FUNC_0( VAR_4 ) );
}
