
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_10__ {int p_resource; int b_video; int b_audio; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_11__ {scalar_t__ i_cat; int i_codec; } ;
typedef TYPE_3__ es_format_t ;
typedef void decoder_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,TYPE_3__ const*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static void *FUNC_3( sout_stream_t *VAR_2, const es_format_t *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = VAR_2->p_sys;

    if( ( VAR_3->i_cat == VAR_0 && !VAR_4->b_audio )||
        ( VAR_3->i_cat == VAR_1 && !VAR_4->b_video ) )
    {
        return ((void*)0);
    }

    decoder_t *VAR_5 = FUNC_1( FUNC_0(VAR_2), VAR_3,
                                            VAR_4->p_resource );
    if( VAR_5 == ((void*)0) )
    {
        FUNC_2( VAR_2, "cannot create decoder for fcc=`%4.4s'",
                 (char*)&VAR_3->i_codec );
        return ((void*)0);
    }
    return VAR_5;
}
