
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 void* VAR_4 ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (int,int*) ;
 void* VAR_5 ;
 int FUNC_6 (int,int*) ;

void
FUNC_7(int VAR_6, int VAR_7, char_u VAR_8, char_u VAR_9)
{
    char_u VAR_10[64];
    int VAR_11 = 0;
    int VAR_12 = (VAR_8 != 0);

    if(VAR_12)
    {
        VAR_6 = FUNC_3(VAR_8, VAR_9);
        VAR_6 = FUNC_6(VAR_6, &VAR_7);
    }
    else
    {
        if(VAR_6 == 'c' && (VAR_7 & VAR_3))
            VAR_5 = VAR_4;
        if(!FUNC_0(VAR_6))
        {
            VAR_6 = FUNC_6(VAR_6, &VAR_7);
            VAR_6 = FUNC_5(VAR_6, &VAR_7);
            if(VAR_6 == VAR_0)
                VAR_6 = VAR_2;
            if(FUNC_0(VAR_6))
                VAR_12 = VAR_4;
        }
    }

    if(VAR_7)
    {
        VAR_10[VAR_11++] = VAR_0;
        VAR_10[VAR_11++] = VAR_1;
        VAR_10[VAR_11++] = VAR_7;
    }

    if(VAR_12 && FUNC_0(VAR_6))
    {
        VAR_10[VAR_11++] = VAR_0;
        VAR_10[VAR_11++] = FUNC_1(VAR_6);
        VAR_10[VAR_11++] = FUNC_2(VAR_6);
    }
    else
    {

        VAR_10[VAR_11++] = VAR_6;
    }

    if(VAR_11)
        FUNC_4(VAR_10, VAR_11);
}
