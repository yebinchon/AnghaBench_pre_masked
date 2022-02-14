
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3 (vlc_object_t *VAR_1)
{
    char *VAR_2 = FUNC_1 (VAR_0);
    if (VAR_2 == ((void*)0))
        return -1;

    int VAR_3 = FUNC_0 (VAR_1, VAR_2);
    FUNC_2 (VAR_2);
    return VAR_3;
}
