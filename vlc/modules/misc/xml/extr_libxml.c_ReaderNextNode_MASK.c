
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ xml_reader_t ;
struct TYPE_5__ {char* node; int xml; } ;
typedef TYPE_2__ xml_reader_sys_t ;
typedef int xmlChar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8( xml_reader_t *VAR_5, const char **VAR_6 )
{
    xml_reader_sys_t *VAR_7 = VAR_5->p_sys;
    const xmlChar *VAR_8;
    int VAR_9;

    FUNC_0( VAR_7->node );
    VAR_7->node = ((void*)0);

skip:
    switch( FUNC_7( VAR_7->xml ) )
    {
        case 0:
            return VAR_2;
        case -1:
            return VAR_1;
    }

    switch( FUNC_6( VAR_7->xml ) )
    {
        case 130:
            VAR_8 = FUNC_4( VAR_7->xml );
            VAR_9 = VAR_3;
            break;

        case 129:
            VAR_8 = FUNC_4( VAR_7->xml );
            VAR_9 = VAR_0;
            break;

        case 131:
        case 128:
            VAR_8 = FUNC_5( VAR_7->xml );
            VAR_9 = VAR_4;
            break;

        case -1:
            return VAR_1;

        default:
            goto skip;
    }

    if( FUNC_3(VAR_8 == ((void*)0)) )
        return VAR_1;

    VAR_7->node = FUNC_2( (const char *)VAR_8 );
    if( VAR_6 != ((void*)0) )
        *VAR_6 = VAR_7->node;
    return FUNC_1(VAR_7->node != ((void*)0)) ? VAR_9 : VAR_1;
}
