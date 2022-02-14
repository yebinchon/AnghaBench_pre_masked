
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct stream_extractor_private {TYPE_1__* wrapper; TYPE_1__* source; scalar_t__ (* pf_init ) (struct stream_extractor_private*,TYPE_1__*) ;} ;
struct TYPE_9__ {struct stream_extractor_private* p_sys; int p_input_item; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (struct stream_extractor_private*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6( struct stream_extractor_private* VAR_4, stream_t* VAR_5 )
{
    stream_t* VAR_6 = FUNC_5( FUNC_4(VAR_5),
                                        VAR_3 );

    if( FUNC_3( !VAR_6 ) )
        return VAR_1;

    if( VAR_4->pf_init( VAR_4, VAR_6 ) )
    {
        FUNC_0( VAR_6 );
        return VAR_0;
    }

    VAR_4->wrapper = VAR_6;
    VAR_4->wrapper->p_input_item = VAR_5->p_input_item;
    VAR_4->wrapper->p_sys = VAR_4;

    VAR_4->source = VAR_5;

    VAR_4->wrapper = FUNC_1( VAR_4->wrapper, "cache" );
    return VAR_2;
}
