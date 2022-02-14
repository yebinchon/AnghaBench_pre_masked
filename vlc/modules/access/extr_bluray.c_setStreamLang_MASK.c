
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int psz_language; int i_id; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_9__ {int pl_info_lock; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {scalar_t__ lang; } ;
typedef TYPE_3__ BLURAY_STREAM_INFO ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(demux_sys_t *VAR_0, es_format_t *VAR_1)
{
    FUNC_3(&VAR_0->pl_info_lock);

    BLURAY_STREAM_INFO *VAR_2 = FUNC_0(VAR_0, VAR_1->i_id);
    if(VAR_2)
    {
        FUNC_1(VAR_1->psz_language);
        VAR_1->psz_language = FUNC_2((const char *)VAR_2->lang, 3);
    }

    FUNC_4(&VAR_0->pl_info_lock);
}
