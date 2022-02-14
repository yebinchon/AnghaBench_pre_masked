
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_int_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int *,char*) ;

void FUNC_10(libvlc_int_t *VAR_5)
{
    FUNC_0(&VAR_4);
    if (VAR_3 != VAR_2)
    {
        FUNC_2(&VAR_4);
        return;
    }

    if (!FUNC_3((VAR_5 != ((void*)0)) ? FUNC_5(VAR_5) : ((void*)0)))
        FUNC_6();
    FUNC_7(VAR_3 != VAR_2);






    if (FUNC_9(VAR_5, "high-priority"))
    {
        if (FUNC_4(FUNC_1(), 0x00008000)
         || FUNC_4(FUNC_1(), VAR_1))
            FUNC_8(VAR_5, "raised process priority");
        else
            FUNC_8(VAR_5, "could not raise process priority");
    }

    FUNC_2(&VAR_4);
}
