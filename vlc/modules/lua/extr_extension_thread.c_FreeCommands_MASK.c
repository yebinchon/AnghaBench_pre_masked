
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_t {int i_command; struct command_t** data; struct command_t* next; } ;







 int FUNC_0 (struct command_t*) ;

__attribute__((used)) static void FUNC_1( struct command_t *VAR_0 )
{
    if( !VAR_0 ) return;
    struct command_t *VAR_1 = VAR_0->next;
    switch( VAR_0->i_command )
    {
        case 132:
        case 130:
        case 131:
            break;

        case 128:
        case 129:
            FUNC_0( VAR_0->data[0] );
            break;

        default:
            break;
    }
    FUNC_0( VAR_0 );
    FUNC_1( VAR_1 );
}
