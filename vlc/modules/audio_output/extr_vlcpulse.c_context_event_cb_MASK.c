
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int pa_proplist ;
typedef int pa_context ;


 int FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_0, const char *VAR_1, pa_proplist *VAR_2,
                             void *VAR_3)
{
    vlc_object_t *VAR_4 = VAR_3;

    FUNC_0 (VAR_4, "unhandled context event \"%s\"", VAR_1);
    (void) VAR_0;
    (void) VAR_2;
}
