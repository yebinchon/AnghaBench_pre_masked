
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e_wellknowntype; int i_blob; int p_blob; } ;
typedef TYPE_1__ MP4_Box_data_data_t ;







 char* FUNC_0 (char*,int ,int ) ;

__attribute__((used)) inline static char * FUNC_1( const MP4_Box_data_data_t *VAR_0 )
{
    if ( !VAR_0 || !VAR_0->i_blob )
        return ((void*)0);

    switch( VAR_0->e_wellknowntype )
    {
    case 129:
    case 128:
        return FUNC_0( "UTF-8", VAR_0->p_blob, VAR_0->i_blob );
    case 131:
    case 130:
        return FUNC_0( "UTF-16BE", VAR_0->p_blob, VAR_0->i_blob );
    case 132:
        return FUNC_0( "SHIFT-JIS", VAR_0->p_blob, VAR_0->i_blob );
    default:
        return ((void*)0);
    }
}
