
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_10__ {int i_size; int i_format; int i_channel_config; int i_rate; } ;
struct TYPE_12__ {TYPE_1__ audiotrack_args; int * p_audiotrack; } ;
typedef TYPE_3__ aout_sys_t ;
struct TYPE_13__ {int (* DeleteGlobalRef ) (TYPE_4__**,int *) ;} ;
typedef TYPE_4__* JNIEnv ;


 int FUNC_0 (TYPE_4__**,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__**,int *) ;

__attribute__((used)) static int
FUNC_3( JNIEnv *VAR_1, audio_output_t *VAR_2 )
{
    aout_sys_t *VAR_3 = VAR_2->sys;

    FUNC_1( VAR_0 );
    (*VAR_1)->DeleteGlobalRef( VAR_1, VAR_3->p_audiotrack );
    VAR_3->p_audiotrack = ((void*)0);
    return FUNC_0( VAR_1, VAR_2, VAR_3->audiotrack_args.i_rate,
                           VAR_3->audiotrack_args.i_channel_config,
                           VAR_3->audiotrack_args.i_format,
                           VAR_3->audiotrack_args.i_size );
}
