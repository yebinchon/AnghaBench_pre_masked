
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static vlc_fourcc_t FUNC_4 (vlc_object_t *VAR_1, const char *VAR_2)
{
    char *VAR_3 = FUNC_2 (VAR_1, VAR_2);
    if (VAR_3 == ((void*)0))
        return 0;

    vlc_fourcc_t VAR_4 = FUNC_3 (VAR_0, VAR_3);
    if (VAR_4 == 0)
        FUNC_1 (VAR_1, "invalid codec %s", VAR_3);
    FUNC_0 (VAR_3);
    return VAR_4;
}
