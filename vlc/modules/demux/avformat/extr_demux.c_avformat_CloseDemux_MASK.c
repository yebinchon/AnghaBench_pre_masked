
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int i_attachments; scalar_t__ p_title; int * attachments; TYPE_4__* ic; struct TYPE_7__* tracks; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {struct TYPE_9__* buffer; } ;
struct TYPE_8__ {TYPE_5__* pb; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_3( VAR_2->tracks );

    if( VAR_2->ic )
    {
        if( VAR_2->ic->pb )
        {
            FUNC_1( VAR_2->ic->pb->buffer );
            FUNC_1( VAR_2->ic->pb );
        }
        FUNC_2( &VAR_2->ic );
    }

    for( int VAR_3 = 0; VAR_3 < VAR_2->i_attachments; VAR_3++ )
        FUNC_4( VAR_2->attachments[VAR_3] );
    FUNC_0( VAR_2->i_attachments, VAR_2->attachments);

    if( VAR_2->p_title )
        FUNC_5( VAR_2->p_title );

    FUNC_3( VAR_2 );
}
