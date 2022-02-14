
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_2__ {int ** pp_decoder; } ;
struct decoder_owner {int lock; TYPE_1__ cc; } ;
typedef int decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (struct decoder_owner*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4( decoder_t *VAR_2, vlc_fourcc_t VAR_3,
                             int VAR_4, bool *VAR_5 )
{
    struct decoder_owner *VAR_6 = FUNC_0( VAR_2 );

    if( !FUNC_1( VAR_6, VAR_3, VAR_4 ) )
        return VAR_0;

    FUNC_2( &VAR_6->lock );
    *VAR_5 = VAR_6->cc.pp_decoder[VAR_4] != ((void*)0);
    FUNC_3( &VAR_6->lock );
    return VAR_1;
}
