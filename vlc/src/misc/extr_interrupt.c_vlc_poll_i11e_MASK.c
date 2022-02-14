
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_interrupt_t ;
struct pollfd {int dummy; } ;


 int FUNC_0 (struct pollfd*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct pollfd*,unsigned int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct pollfd* FUNC_4 (unsigned int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int (*) (struct pollfd*),struct pollfd*) ;
 int * VAR_0 ;
 int FUNC_7 (struct pollfd*,unsigned int,int,int *,struct pollfd*) ;

int FUNC_8(struct pollfd *VAR_1, unsigned VAR_2, int VAR_3)
{
    vlc_interrupt_t *VAR_4 = VAR_0;
    if (VAR_4 == ((void*)0))
        return FUNC_2(VAR_1, VAR_2, VAR_3);

    int VAR_5;

    if (FUNC_1(VAR_2 < 255))
    {
        struct pollfd VAR_6[VAR_2 + 1];

        VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
    }
    else
    {
        struct pollfd *VAR_7 = FUNC_4(VAR_2 + 1, sizeof (*VAR_7));
        if (FUNC_3(VAR_7 == ((void*)0)))
            return -1;

        FUNC_6(FUNC_0, VAR_7);
        VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
        FUNC_5();
        FUNC_0(VAR_7);
    }
    return VAR_5;
}
