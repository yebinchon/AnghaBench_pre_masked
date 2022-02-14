
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef int module_t ;
typedef int input_thread_t ;
struct TYPE_10__ {int * p_demux; } ;
typedef TYPE_2__ input_source_t ;
typedef int demux_t ;
struct TYPE_11__ {scalar_t__ i_attachments; int attachments; scalar_t__ p_meta; TYPE_1__* p_item; } ;
typedef TYPE_3__ demux_meta_t ;
struct TYPE_12__ {TYPE_1__* p_item; int attachment_demux; int attachment; int i_attachment; } ;
struct TYPE_9__ {int lock; } ;


 int FUNC_0 (int *,int *,int *,scalar_t__,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int*) ;
 TYPE_7__* FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*,char*,int *,int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int *,int,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12( input_thread_t *VAR_2,
                             input_source_t *VAR_3, vlc_meta_t *VAR_4 )
{
    demux_t *VAR_5 = VAR_3->p_demux;




    bool VAR_6 = 0;


    if( !FUNC_1( VAR_5, VAR_0, VAR_4 ) )
        VAR_6 = 1;

    bool VAR_7;
    if( FUNC_1( VAR_5, VAR_1, &VAR_7 ) )
        VAR_7 = 1;



    if( VAR_6 && !VAR_7 )
        return;

    demux_meta_t *VAR_8 =
        FUNC_6( VAR_2, sizeof( *VAR_8 ), "demux meta" );
    if( FUNC_5(VAR_8 == ((void*)0)) )
        return;
    VAR_8->p_item = FUNC_2(VAR_2)->p_item;

    module_t *VAR_9 = FUNC_3( VAR_8, "meta reader", ((void*)0), 0 );
    if( VAR_9 )
    {
        if( VAR_8->p_meta )
        {
            FUNC_8( VAR_4, VAR_8->p_meta );
            FUNC_7( VAR_8->p_meta );
        }

        if( VAR_8->i_attachments > 0 )
        {
            FUNC_9( &FUNC_2(VAR_2)->p_item->lock );
            FUNC_0( &FUNC_2(VAR_2)->i_attachment, &FUNC_2(VAR_2)->attachment, &FUNC_2(VAR_2)->attachment_demux,
                              VAR_8->i_attachments, VAR_8->attachments, VAR_5);
            FUNC_10( &FUNC_2(VAR_2)->p_item->lock );
        }
        FUNC_4( VAR_5, VAR_9 );
    }
    FUNC_11(VAR_8);
}
