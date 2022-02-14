
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char uint8_t ;
struct shmid_ds {size_t shm_segsz; } ;
struct TYPE_16__ {char* p_text; TYPE_7__* p_pic; } ;
struct TYPE_17__ {int b_active; TYPE_2__ data; int format; } ;
typedef TYPE_3__ overlay_t ;
struct TYPE_18__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_19__ {int b_updated; int overlays; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_20__ {scalar_t__ fourcc; int i_height; int i_width; int i_shmid; int i_id; } ;
typedef TYPE_6__ const commandparams_t ;
struct TYPE_21__ {TYPE_1__* p; scalar_t__ i_planes; int format; } ;
struct TYPE_15__ {size_t i_visible_lines; size_t i_visible_pitch; char* p_pixels; int i_pitch; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__ const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_4__*,char*,...) ;
 TYPE_7__* FUNC_6 (scalar_t__,int,int,int,int) ;
 int FUNC_7 (TYPE_7__*) ;
 char* FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,int ,struct shmid_ds*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,scalar_t__,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_12( filter_t *VAR_6,
                               const commandparams_t *VAR_7,
                               commandparams_t *VAR_8 )
{
    FUNC_1(VAR_7);
    FUNC_1(VAR_8);

    FUNC_5( VAR_6, "system doesn't support shared memory" );
    return VAR_3;

}
