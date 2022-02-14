
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
typedef int snd_pcm_t ;


 int FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (int *,struct pollfd*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct pollfd*,int,unsigned short*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6 (snd_pcm_t *VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_2 (VAR_0);
    struct pollfd VAR_3[VAR_2];
    unsigned short VAR_4;

    FUNC_1 (VAR_0, VAR_3, VAR_2);
    do
    {
        FUNC_4 (VAR_1);
        while (FUNC_0 (VAR_3, VAR_2, -1) == -1);
        VAR_1 = FUNC_5 ();
        FUNC_3 (VAR_0, VAR_3, VAR_2, &VAR_4);
    }
    while (!VAR_4);
}
