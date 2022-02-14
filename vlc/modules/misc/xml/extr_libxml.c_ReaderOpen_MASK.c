
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pf_use_dtd; int pf_is_empty; int pf_next_attr; int pf_next_node; TYPE_2__* p_sys; int p_stream; } ;
typedef TYPE_1__ xml_reader_t ;
struct TYPE_7__ {int * node; scalar_t__ xml; } ;
typedef TYPE_2__ xml_reader_sys_t ;
typedef scalar_t__ xmlTextReaderPtr ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_10 ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int *,int ,int *,int *,int ) ;
 int FUNC_8 (scalar_t__,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9( vlc_object_t *VAR_11 )
{
    if( !FUNC_5( VAR_9 ) )
        return VAR_6;

    xml_reader_t *VAR_12 = (xml_reader_t *)VAR_11;
    xml_reader_sys_t *VAR_13 = FUNC_1( sizeof( *VAR_13 ) );
    xmlTextReaderPtr VAR_14;

    if( FUNC_2(!VAR_13) )
        return VAR_7;

    FUNC_3( &VAR_10 );
    FUNC_6();
    FUNC_4( &VAR_10 );

    VAR_14 = FUNC_7( VAR_5, ((void*)0), VAR_12->p_stream,
                                      ((void*)0), ((void*)0), 0 );
    if( !VAR_14 )
    {
        FUNC_0( VAR_13 );
        return VAR_7;
    }


    FUNC_8( VAR_14,
                                  VAR_0, VAR_12 );

    VAR_13->xml = VAR_14;
    VAR_13->node = ((void*)0);
    VAR_12->p_sys = VAR_13;
    VAR_12->pf_next_node = VAR_3;
    VAR_12->pf_next_attr = VAR_2;
    VAR_12->pf_is_empty = VAR_1;
    VAR_12->pf_use_dtd = VAR_4;

    return VAR_8;
}
