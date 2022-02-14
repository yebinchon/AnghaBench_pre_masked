
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;

 int * FUNC_1 (char const*,char const* const*,int ,int,int ) ;
 int VAR_0 ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1)
{
    static const char *const VAR_2[] = { 128 };

    const char *VAR_3 = FUNC_2(VAR_1, '.');
    if (VAR_3 == ((void*)0) || *(++VAR_3) == '\0')
        return 0;

    return FUNC_1(VAR_3, VAR_2, FUNC_0(VAR_2),
                   sizeof(const char *), VAR_0) != ((void*)0);
}
