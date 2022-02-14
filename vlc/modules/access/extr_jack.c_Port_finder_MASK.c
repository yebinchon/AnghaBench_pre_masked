
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {char* psz_ports; char** pp_jack_port_table; int i_match_ports; int p_jack_client; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (char const**) ;
 char** FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 char* FUNC_3 (char*,char*,char**) ;
 char* FUNC_4 (char*) ;
 char** FUNC_5 (char**,int) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    char *VAR_3 = VAR_2->psz_ports;
    char *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    const char **VAR_7 = ((void*)0);
    int VAR_8 = 0;
    int VAR_9 =0;
    VAR_2->pp_jack_port_table = ((void*)0);


    for( VAR_4 = FUNC_3( VAR_3, ",", &VAR_5 ); VAR_4;
            VAR_4 = FUNC_3( ((void*)0), ",", &VAR_5 ) )
    {
        VAR_6 = FUNC_4( VAR_4 );

        VAR_7 = FUNC_1( VAR_2->p_jack_client,
           VAR_6, ((void*)0), VAR_0 );
        if( VAR_7 == ((void*)0) )
            FUNC_2( VAR_1, "port(s) asked not found:%s", VAR_6 );
        else
        {
            while( VAR_7[VAR_8] )
                VAR_8++;

            VAR_2->pp_jack_port_table = FUNC_5( VAR_2->pp_jack_port_table,
                (VAR_8 * sizeof( char * ) + VAR_9 * sizeof( char * ) ) );

            for(int VAR_10=0; VAR_10<VAR_8;VAR_10++)
                VAR_2->pp_jack_port_table[VAR_9+VAR_10] = ( char * ) VAR_7[VAR_10];

            VAR_9 += VAR_8;

            FUNC_0( VAR_7 );
        }
    }

    VAR_2->i_match_ports = VAR_9;
}
