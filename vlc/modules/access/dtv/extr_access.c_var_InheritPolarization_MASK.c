
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,unsigned int,char) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;

__attribute__((used)) static char FUNC_5 (vlc_object_t *VAR_0)
{
    char VAR_1;
    char *VAR_2 = FUNC_4 (VAR_0, "dvb-polarization");
    if (VAR_2 != ((void*)0))
    {
        VAR_1 = *VAR_2;
        FUNC_0 (VAR_2);
        if (FUNC_2(VAR_1 >= 'a' && VAR_1 <= 'z'))
            VAR_1 -= 'a' - 'A';
        return VAR_1;
    }


    unsigned VAR_3 = FUNC_3 (VAR_0, "dvb-voltage");
    switch (VAR_3)
    {
        case 13: VAR_1 = 'V'; break;
        case 18: VAR_1 = 'H'; break;
        default: return 0;
    }

    FUNC_1 (VAR_0, "\"voltage=%u\" option is obsolete. "
                   "Use \"polarization=%c\" instead.", VAR_3, VAR_1);
    return VAR_1;
}
