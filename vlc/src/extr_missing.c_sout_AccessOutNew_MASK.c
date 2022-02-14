
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int sout_access_out_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*) ;

sout_access_out_t *FUNC_2 (vlc_object_t *VAR_0,
                                      const char *VAR_1, const char *VAR_2)
{
    FUNC_0 (VAR_1); FUNC_0 (VAR_2);
    FUNC_1 (VAR_0, "Output support not compiled-in!");
    return ((void*)0);
}
