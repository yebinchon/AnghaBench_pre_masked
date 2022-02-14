
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_5 (void)
{
    (void)VAR_2;



    unsigned VAR_3 = 10;


    char *VAR_4 = FUNC_2("VLC_TEST_TIMEOUT");
    if (VAR_4)
    {
        int VAR_5 = FUNC_1(VAR_4);
        if (VAR_5 <= 0)
            VAR_3 = 0;
        else
            VAR_3 = VAR_5;
    }
    if (VAR_3 != 0)
    {
        struct sigaction VAR_6 = {
            .sa_handler = VAR_1,
        };
        FUNC_4(VAR_0, &VAR_6, ((void*)0));
        FUNC_0 (VAR_3);
    }

    FUNC_3( "VLC_PLUGIN_PATH", "../modules", 1 );
}
