
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ FUNC_0 (int,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3 (void)
{
    uint8_t VAR_4[VAR_0];


    int VAR_5 = FUNC_2 ("/dev/urandom", VAR_1);
    if (VAR_5 == -1)
        return;

    for (size_t VAR_6 = 0; VAR_6 < sizeof (VAR_4);)
    {
         ssize_t VAR_7 = FUNC_0 (VAR_5, VAR_4 + VAR_6, sizeof (VAR_4) - VAR_6);
         if (VAR_7 > 0)
             VAR_6 += VAR_7;
    }


    for (size_t VAR_8 = 0; VAR_8 < sizeof (VAR_4); VAR_8++)
    {
        VAR_3[VAR_8] = VAR_4[VAR_8] ^ 0x5c;
        VAR_2[VAR_8] = VAR_4[VAR_8] ^ 0x36;
    }

    FUNC_1 (VAR_5);
}
