
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int xmlTextReaderLocatorPtr ;
typedef int xmlParserSeverities ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( void *VAR_0, const char *VAR_1,
                                xmlParserSeverities VAR_2,
                                xmlTextReaderLocatorPtr VAR_3)
{
    FUNC_0(VAR_2);
    xml_reader_t *VAR_4 = (xml_reader_t *)VAR_0;
    int VAR_5 = FUNC_2( VAR_3 );
    FUNC_1( VAR_4, "XML parser error (line %d) : %s", VAR_5, VAR_1 );
}
