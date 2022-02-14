
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t size; TYPE_1__* data; } ;
struct TYPE_7__ {TYPE_3__ vec; } ;
typedef TYPE_2__ vlc_media_source_meta_list_t ;
struct TYPE_6__ {TYPE_2__* longname; TYPE_2__* name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(vlc_media_source_meta_list_t *VAR_0) {
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->vec.size; ++VAR_1)
    {
        FUNC_0(VAR_0->vec.data[VAR_1].name);
        FUNC_0(VAR_0->vec.data[VAR_1].longname);
    }
    FUNC_1(&VAR_0->vec);
    FUNC_0(VAR_0);
}
