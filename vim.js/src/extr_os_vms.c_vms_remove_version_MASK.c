
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char* FUNC_0 (void*,char) ;
 char* FUNC_1 (void*,char) ;

void
FUNC_2(void * VAR_0)
{
    char_u *VAR_1;
    char_u *VAR_2;

    if ((VAR_1 = FUNC_0( VAR_0, ';')) != ((void*)0))
 *VAR_1 = '\0';
    else if ((VAR_1 = FUNC_1( VAR_0, '.')) != ((void*)0) )
    {
 if ((VAR_2 = FUNC_1( VAR_0, ']')) != ((void*)0) ) {;}
 else if ((VAR_2 = FUNC_1( VAR_0, '>')) != ((void*)0) ) {;}
 else VAR_2 = VAR_0;

 while ( *VAR_2 != '\0' && VAR_2 < VAR_1 )
     if ( *VAR_2++ == '.' )
  *VAR_1 = '\0';
    }
    return ;
}
