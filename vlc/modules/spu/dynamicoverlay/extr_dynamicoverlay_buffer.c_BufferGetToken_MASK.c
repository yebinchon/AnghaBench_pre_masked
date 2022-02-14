
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* p_begin; int i_length; } ;
typedef TYPE_1__ buffer_t ;


 scalar_t__ FUNC_0 (unsigned char) ;

char *FUNC_1( buffer_t *VAR_0 )
{
    char *VAR_1 = VAR_0->p_begin;

    while( FUNC_0( (unsigned char)VAR_1[0] ) || VAR_1[0] == '\0' )
    {
        if( VAR_1 <= (VAR_0->p_begin + VAR_0->i_length) )
            VAR_1++;
        else
            return ((void*)0);
    }
    return VAR_1;
}
