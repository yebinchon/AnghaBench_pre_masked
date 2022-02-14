
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_line; scalar_t__ i_line_count; char** line; } ;
typedef TYPE_1__ text_t ;



__attribute__((used)) static char *FUNC_0( text_t *VAR_0 )
{
    if( VAR_0->i_line >= VAR_0->i_line_count )
        return( ((void*)0) );

    return VAR_0->line[VAR_0->i_line++];
}
