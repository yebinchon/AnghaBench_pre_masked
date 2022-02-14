
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_keystore ;
struct crypt {int pf_encrypt; int pf_decrypt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

int FUNC_1(vlc_keystore *VAR_3, struct crypt *VAR_4)
{
    FUNC_0( VAR_3 );
    VAR_4->pf_decrypt = VAR_0;
    VAR_4->pf_encrypt = VAR_1;
    return VAR_2;
}
