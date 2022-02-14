
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {TYPE_2__* master; } ;
typedef TYPE_1__ input_thread_private_t ;
struct TYPE_5__ {scalar_t__ i_title; int b_title_demux; int title; int i_seekpoint_offset; int i_title_offset; int p_demux; } ;
typedef TYPE_2__ input_source_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,scalar_t__*,int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( input_thread_t *VAR_1 )
{
    input_thread_private_t *VAR_2 = FUNC_3(VAR_1);
    input_source_t *VAR_3 = VAR_2->master;


    bool VAR_4 = VAR_3->i_title > 0;


    if( FUNC_2( VAR_3->p_demux, VAR_0,
                       &VAR_3->title, &VAR_3->i_title,
                       &VAR_3->i_title_offset, &VAR_3->i_seekpoint_offset ) )
        FUNC_1( VAR_3->i_title, VAR_3->title );
    else
        VAR_3->b_title_demux = 1;

    FUNC_0( VAR_1, VAR_4 );
}
