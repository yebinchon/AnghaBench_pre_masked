
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int,int ,int *,int,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int,char*,int) ;
 int FUNC_5 (char*,int ,int) ;

char *FUNC_6(void)
{
    wchar_t VAR_4[256];
    int VAR_5 = 0, VAR_6 = FUNC_2();

    FUNC_0( VAR_0 | VAR_1,
                    ((void*)0), VAR_6, FUNC_3 (VAR_2, VAR_3),
                    VAR_4, 256, ((void*)0) );


    while( !FUNC_5( L"\r\n\0", VAR_4[VAR_5], 3 ) )
        VAR_5++;

    FUNC_4( VAR_4 + VAR_5, 256 - VAR_5, L" (error %i)", VAR_6 );
    return FUNC_1( VAR_4 );
}
