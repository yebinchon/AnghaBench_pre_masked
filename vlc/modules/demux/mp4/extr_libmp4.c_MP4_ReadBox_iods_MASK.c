
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {int i_object_descriptor; char i_OD_profile_level; char i_scene_profile_level; char i_audio_profile_level; char i_visual_profile_level; char i_graphics_profile_level; } ;
struct TYPE_5__ {TYPE_4__* p_iods; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int *,char*,int,char,char,char,char,char) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    char VAR_3;
    FUNC_5(VAR_3);

    FUNC_3( VAR_0, ((void*)0) );
    FUNC_2( VAR_2->data.p_iods );

    FUNC_0( VAR_3 );
    FUNC_0( VAR_3 );

    FUNC_1( VAR_2->data.p_iods->i_object_descriptor );

    FUNC_0( VAR_2->data.p_iods->i_OD_profile_level );
    FUNC_0( VAR_2->data.p_iods->i_scene_profile_level );
    FUNC_0( VAR_2->data.p_iods->i_audio_profile_level );
    FUNC_0( VAR_2->data.p_iods->i_visual_profile_level );
    FUNC_0( VAR_2->data.p_iods->i_graphics_profile_level );
    FUNC_4( 1 );
}
