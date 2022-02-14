
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int xml_elem_hnd_t ;
typedef char const track_elem_t ;
typedef int stream_t ;
typedef int input_item_node_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int *,int *,int *,char*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (int *,char const**) ;

__attribute__((used)) static bool FUNC_5( stream_t *VAR_0, input_item_node_t *VAR_1,
                              track_elem_t *VAR_2, xml_reader_t *VAR_3,
                              const char *VAR_4,
                              xml_elem_hnd_t *VAR_5 )
{
    FUNC_0(VAR_2); FUNC_0(VAR_4);
    const char *VAR_6, *VAR_7;
    bool VAR_8 = 0;


    while( (VAR_6 = FUNC_4( VAR_3, &VAR_7 )) != ((void*)0) )
    {

        if( !FUNC_3( VAR_6, "version" ) )
        {
            VAR_8 = 1;
            if( FUNC_3( VAR_7, "1.0" ) )
                FUNC_1( VAR_0, "unsupported iTunes Media Library version" );
        }

        else
            FUNC_1( VAR_0, "invalid <plist> attribute:\"%s\"", VAR_6 );
    }


    if( !VAR_8 )
        FUNC_1( VAR_0, "<plist> requires \"version\" attribute" );

    return FUNC_2( VAR_0, VAR_1, ((void*)0), VAR_3,
                       "plist", VAR_5 );
}
