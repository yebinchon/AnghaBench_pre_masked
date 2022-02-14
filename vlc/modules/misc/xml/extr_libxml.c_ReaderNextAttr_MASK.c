
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ xml_reader_t ;
struct TYPE_5__ {int xml; } ;
typedef TYPE_2__ xml_reader_sys_t ;
typedef int xmlTextReaderPtr ;
typedef int xmlChar ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const char *FUNC_3( xml_reader_t *VAR_0, const char **VAR_1 )
{
    xml_reader_sys_t *VAR_2 = VAR_0->p_sys;
    xmlTextReaderPtr VAR_3 = VAR_2->xml;
    const xmlChar *VAR_4, *VAR_5;

    if( FUNC_2( VAR_3 ) != 1
     || (VAR_4 = FUNC_0( VAR_3 )) == ((void*)0)
     || (VAR_5 = FUNC_1( VAR_3 )) == ((void*)0) )
        return ((void*)0);

    *VAR_1 = (const char *)VAR_5;
    return (const char *)VAR_4;
}
