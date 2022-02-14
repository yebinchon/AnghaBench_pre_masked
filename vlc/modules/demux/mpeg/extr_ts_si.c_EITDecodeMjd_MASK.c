
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( int VAR_0, int *VAR_1, int *VAR_2, int *VAR_3 )
{
    const int VAR_4 = (int)( ( (double)VAR_0 - 15078.2)/365.25 );
    const int VAR_5 = (int)( ((double)VAR_0 - 14956.1 - (int)(VAR_4 * 365.25)) / 30.6001 );
    const int VAR_6 = ( VAR_5 == 14 || VAR_5 == 15 ) ? 1 : 0;

    *VAR_1 = 1900 + VAR_4 + VAR_6*1;
    *VAR_2 = VAR_5 - 1 - VAR_6*12;
    *VAR_3 = VAR_0 - 14956 - (int)(VAR_4*365.25) - (int)(VAR_5*30.6001);
}
