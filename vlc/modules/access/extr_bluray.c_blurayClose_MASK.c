
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_6__ {int lock; } ;
struct TYPE_8__ {unsigned int i_title; int i_attachments; int psz_bd_path; int read_block_lock; TYPE_1__ bdj; int pl_info_lock; int events_delayed; int * attachments; int * pp_title; scalar_t__ p_tf_out; int * p_out; scalar_t__ p_parser; scalar_t__ bluray; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(vlc_object_t *VAR_1)
{
    demux_t *VAR_2 = (demux_t*)VAR_1;
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_6(VAR_3, ((void*)0));






    if (VAR_3->bluray) {
        FUNC_2(VAR_3->bluray);
    }

    FUNC_12(&VAR_3->bdj.lock);
    for(int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_3(VAR_2, VAR_4);
    FUNC_13(&VAR_3->bdj.lock);

    if (VAR_3->p_parser)
        FUNC_8(VAR_3->p_parser);

    if (VAR_3->p_out != ((void*)0))
        FUNC_4(VAR_3->p_out);
    if(VAR_3->p_tf_out)
        FUNC_7(VAR_3->p_tf_out);


    for (unsigned int VAR_5 = 0; VAR_5 < VAR_3->i_title; VAR_5++)
        FUNC_10(VAR_3->pp_title[VAR_5]);
    FUNC_1(VAR_3->i_title, VAR_3->pp_title);

    for (int VAR_6 = 0; VAR_6 < VAR_3->i_attachments; VAR_6++)
      FUNC_9(VAR_3->attachments[VAR_6]);
    FUNC_1(VAR_3->i_attachments, VAR_3->attachments);

    FUNC_0(VAR_3->events_delayed);

    FUNC_11(&VAR_3->pl_info_lock);
    FUNC_11(&VAR_3->bdj.lock);
    FUNC_11(&VAR_3->read_block_lock);

    FUNC_5(VAR_3->psz_bd_path);
}
