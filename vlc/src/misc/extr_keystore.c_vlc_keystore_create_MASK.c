
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_keystore ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;

vlc_keystore *
FUNC_4(vlc_object_t *VAR_0)
{
    FUNC_0(VAR_0);

    char *VAR_1 = FUNC_3(VAR_0, "keystore");
    vlc_keystore *VAR_2 = FUNC_2(VAR_0, VAR_1);

    FUNC_1(VAR_1);
    return VAR_2;
}
