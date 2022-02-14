
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_4__ {int (* smpl ) (int *,char*,char*) ;int (* cmplx ) (int *,int *,int *,int *,char*,int *) ;} ;
struct TYPE_5__ {char* name; TYPE_1__ pf_handler; int type; } ;
typedef TYPE_2__ xml_elem_hnd_t ;
typedef int track_elem_t ;
typedef int stream_t ;
typedef int input_item_node_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;



 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *,int *,int *,int *,char*,int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char const**) ;

__attribute__((used)) static bool FUNC_9( stream_t *VAR_1, input_item_node_t *VAR_2,
                        track_elem_t *VAR_3, xml_reader_t *VAR_4,
                        const char *VAR_5, xml_elem_hnd_t *VAR_6 )
{
    int VAR_7;
    const char *VAR_8;
    char *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    xml_elem_hnd_t *VAR_11 = ((void*)0);
    bool VAR_12 = 0;

    while( (VAR_7 = FUNC_8( VAR_4, &VAR_8 )) > 0 )
    {
        switch( VAR_7 )
        {

        case 129:

            for( VAR_11 = VAR_6;
                     VAR_11->name && FUNC_3( VAR_8, VAR_11->name );
                     VAR_11++ );
            if( !VAR_11->name )
            {
                FUNC_2( VAR_1, "unexpected element <%s>", VAR_8 );
                goto end;
            }

            if( VAR_11->type == VAR_0 )
            {
                if( VAR_11->pf_handler.cmplx( VAR_1, VAR_2, ((void*)0),
                                                 VAR_4, VAR_11->name,
                                                 ((void*)0) ) )
                {
                    VAR_11 = ((void*)0);
                    FUNC_0( VAR_10 );
                    FUNC_0( VAR_9 );
                }
                else
                    goto end;
            }
            break;


        case 128:
            FUNC_1( VAR_9 );
            VAR_9 = FUNC_4( VAR_8 );
            if( FUNC_7(!VAR_9) )
                goto end;
            break;


        case 130:

            if( !FUNC_3( VAR_8, VAR_5 ) )
            {
                VAR_12 = 1;
                goto end;
            }

            if( !VAR_11 || !VAR_11->name
                || FUNC_3( VAR_11->name, VAR_8 ) )
            {
                FUNC_2( VAR_1, "there's no open element left for <%s>",
                         VAR_8 );
                goto end;
            }

            if( !FUNC_3( VAR_11->name, "key" ) )
            {
                FUNC_1( VAR_10 );
                VAR_10 = FUNC_4( VAR_9 );
            }

            else if( VAR_11->pf_handler.smpl )
            {
                VAR_11->pf_handler.smpl( VAR_3, VAR_10, VAR_9 );
            }
            FUNC_0(VAR_9);
            VAR_11 = ((void*)0);
            break;
        }
    }
    FUNC_2( VAR_1, "unexpected end of XML data" );

end:
    FUNC_1( VAR_9 );
    FUNC_1( VAR_10 );
    return VAR_12;
}
