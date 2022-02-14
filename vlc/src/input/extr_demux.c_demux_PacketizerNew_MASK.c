
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int b_packetized; int i_cat; } ;
typedef TYPE_1__ es_format_t ;
typedef int demux_t ;
struct TYPE_10__ {int p_module; int fmt_out; TYPE_1__ fmt_in; int * pf_packetize; int * pf_decode; } ;
typedef TYPE_2__ decoder_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int *,int) ;
 int FUNC_3 (int *,char*,char const*) ;
 TYPE_2__* FUNC_4 (int *,int,char*) ;
 int FUNC_5 (TYPE_2__*) ;

decoder_t *FUNC_6( demux_t *VAR_0, es_format_t *VAR_1, const char *VAR_2 )
{
    decoder_t *VAR_3;
    VAR_3 = FUNC_4( VAR_0, sizeof( *VAR_3 ),
                                      "demux packetizer" );
    if( !VAR_3 )
    {
        FUNC_0( VAR_1 );
        return ((void*)0);
    }
    VAR_1->b_packetized = 0;

    VAR_3->pf_decode = ((void*)0);
    VAR_3->pf_packetize = ((void*)0);

    VAR_3->fmt_in = *VAR_1;
    FUNC_1( &VAR_3->fmt_out, VAR_1->i_cat, 0 );

    VAR_3->p_module = FUNC_2( VAR_3, "packetizer", ((void*)0), 0 );
    if( !VAR_3->p_module )
    {
        FUNC_0( VAR_1 );
        FUNC_5(VAR_3);
        FUNC_3( VAR_0, "cannot find packetizer for %s", VAR_2 );
        return ((void*)0);
    }

    return VAR_3;
}
