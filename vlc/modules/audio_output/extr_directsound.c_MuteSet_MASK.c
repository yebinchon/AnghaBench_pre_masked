
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_8__ {int mute; int mb; } ;
struct TYPE_7__ {int * p_dsbuffer; } ;
struct TYPE_10__ {TYPE_2__ volume; TYPE_1__ s; } ;
typedef TYPE_4__ aout_sys_t ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2( audio_output_t *VAR_2, bool VAR_3 )
{
    HRESULT VAR_4 = VAR_1;
    aout_sys_t *VAR_5 = VAR_2->sys;

    VAR_5->volume.mute = VAR_3;

    if( VAR_5->s.p_dsbuffer != ((void*)0) )
        VAR_4 = FUNC_0( VAR_5->s.p_dsbuffer,
                                            VAR_3? VAR_0 : VAR_5->volume.mb );

    FUNC_1( VAR_2, VAR_3 );
    return (VAR_4 != VAR_1);
}
