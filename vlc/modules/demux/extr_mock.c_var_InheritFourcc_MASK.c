
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;
 char* FUNC_4 (int *,char const*) ;

__attribute__((used)) static vlc_fourcc_t
FUNC_5(vlc_object_t *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_4(VAR_0, VAR_1);
    if (!VAR_2)
        return 0;

    size_t VAR_3 = FUNC_3(VAR_2);
    if (VAR_3 > 4)
    {
        FUNC_0(VAR_2);
        return 0;
    }


    char VAR_4[] = "    ";
    FUNC_2(VAR_4, VAR_2);
    if (VAR_3 != 4)
        VAR_4[VAR_3] = ' ';
    FUNC_0(VAR_2);

    vlc_fourcc_t VAR_5;
    FUNC_1(&VAR_5, VAR_4, 4);
    return VAR_5;
}
