
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t const size; int * data; } ;
typedef TYPE_4__ vec_on_current_media_changed ;
struct media_params {int dummy; } ;
struct TYPE_7__ {size_t size; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {TYPE_4__ on_current_media_changed; } ;
struct ctx {TYPE_3__ played_medias; TYPE_2__ next_medias; TYPE_1__ report; } ;


 size_t FUNC_0 (char const**) ;
 struct media_params FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (struct ctx*,char const*,struct media_params*) ;
 int FUNC_7 (struct ctx*,float) ;
 int FUNC_8 (struct ctx*) ;
 int FUNC_9 (struct ctx*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct ctx*) ;
 int FUNC_12 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_13(struct ctx *VAR_1)
{
    FUNC_10("next_media\n");
    const char *VAR_2[] = { "media1", "media2", "media3" };
    const size_t VAR_3 = FUNC_0(VAR_2);

    struct media_params VAR_4 = FUNC_1(FUNC_2(100));

    for (size_t VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
        FUNC_6(VAR_1, VAR_2[VAR_5], &VAR_4);
    FUNC_7(VAR_1, 4.f);
    FUNC_8(VAR_1);

    FUNC_11(VAR_1);
    FUNC_12(VAR_1, VAR_0);
    FUNC_5(VAR_1);

    {
        vec_on_current_media_changed *VAR_6 = &VAR_1->report.on_current_media_changed;

        FUNC_3(VAR_6->size == VAR_3);
        FUNC_3(VAR_1->next_medias.size == 0);
        for (size_t VAR_7 = 0; VAR_7 < VAR_1->played_medias.size; ++VAR_7)
            FUNC_4(VAR_6->data[VAR_7], VAR_2[VAR_7]);
    }

    FUNC_9(VAR_1);
}
