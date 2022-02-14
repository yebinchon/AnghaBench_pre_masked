
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ,int **) ;

__attribute__((used)) static void FUNC_3(void)
{
    vlc_tls_t *VAR_3[2];

    if (FUNC_2(VAR_0, 0, VAR_3))
        FUNC_0(!"vlc_tls_SocketPair");

    VAR_2 = VAR_3[0];

    VAR_1 = FUNC_1(((void*)0), VAR_3[1], 0);
    FUNC_0(VAR_1 != ((void*)0));
}
