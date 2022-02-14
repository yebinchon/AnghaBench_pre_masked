
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_4__ {int fd; int p_marks; int offsets; scalar_t__ p_meta; int file_sizes; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5( vlc_object_t * VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->fd != -1 )
        FUNC_2( VAR_2->fd );
    FUNC_0( VAR_2->file_sizes );

    if( VAR_2->p_meta )
        FUNC_4( VAR_2->p_meta );

    FUNC_1( VAR_2->offsets );
    FUNC_3( VAR_2->p_marks );
}
