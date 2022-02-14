
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 () ;
 void* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_4 (const char *VAR_2)
{
    void *VAR_3 = FUNC_2 (VAR_0, VAR_2);
    if (VAR_3 == ((void*)0))
    {
        FUNC_3 (VAR_1, "Cannot resolve symbol %s: %s\n", VAR_2,
                 FUNC_1 ());
        FUNC_0 ();
    }
    return VAR_3;
}
