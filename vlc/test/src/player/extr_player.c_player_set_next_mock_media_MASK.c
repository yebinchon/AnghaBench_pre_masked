
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_params {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct ctx {int next_medias; TYPE_1__ played_medias; int player; } ;
typedef int input_item_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (char const*,struct media_params const*) ;
 int FUNC_2 (struct ctx*,char const*,struct media_params const*,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct ctx *VAR_0, const char *VAR_1,
                           const struct media_params *VAR_2)
{
    if (FUNC_3(VAR_0->player) == ((void*)0))
    {
        FUNC_0(VAR_0->played_medias.size == 0);
        FUNC_2(VAR_0, VAR_1, VAR_2, 0);
    }
    else
    {
        input_item_t *VAR_3 = FUNC_1(VAR_1, VAR_2);
        FUNC_0(*VAR_3);

        FUNC_0(VAR_0->played_medias.size > 0);
        bool VAR_4 = FUNC_4(&VAR_0->next_medias, VAR_3);
        FUNC_0(VAR_4);
    }
}
