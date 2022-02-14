
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_player_title_list ;
typedef int vlc_player_t ;
struct TYPE_8__ {scalar_t__ size; int ** data; } ;
typedef TYPE_2__ vec_on_titles_changed ;
struct TYPE_9__ {int size; int* data; } ;
typedef TYPE_3__ vec_on_title_selection_changed ;
struct TYPE_10__ {scalar_t__ size; } ;
typedef TYPE_4__ vec_on_chapter_selection_changed ;
struct vlc_player_title {int chapter_count; } ;
struct media_params {int title_count; int chapter_count; int null_names; } ;
struct TYPE_7__ {TYPE_4__ on_chapter_selection_changed; TYPE_3__ on_title_selection_changed; TYPE_2__ on_titles_changed; } ;
struct ctx {int wait; TYPE_1__ report; int * player; } ;
struct TYPE_11__ {size_t const chapter_idx; int title_idx; } ;


 struct media_params FUNC_0 (int ) ;
 TYPE_5__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ctx*) ;
 int FUNC_5 (struct ctx*,char*,struct media_params*) ;
 int FUNC_6 (struct ctx*) ;
 int FUNC_7 (struct ctx*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct ctx*) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,struct vlc_player_title const*,size_t const) ;
 int FUNC_13 (int *,struct vlc_player_title const*) ;
 struct vlc_player_title* FUNC_14 (int *,int) ;
 int FUNC_15 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_16(struct ctx *VAR_1, bool VAR_2)
{
    FUNC_8("titles (null_names: %d)\n", VAR_2);
    vlc_player_t *VAR_3 = VAR_1->player;

    struct media_params VAR_4 = FUNC_0(FUNC_2(100));
    VAR_4.title_count = 5;
    VAR_4.chapter_count = 2000;
    VAR_4.null_names = VAR_2;
    FUNC_5(VAR_1, "media1", &VAR_4);

    FUNC_6(VAR_1);


    vlc_player_title_list *VAR_5;
    {
        vec_on_titles_changed *VAR_6 = &VAR_1->report.on_titles_changed;
        while (VAR_6->size == 0)
            FUNC_10(VAR_3, &VAR_1->wait);
        VAR_5 = VAR_6->data[0];
        FUNC_3(VAR_5 != ((void*)0) && VAR_5 == FUNC_11(VAR_3));
    }


    const size_t VAR_7 = VAR_4.chapter_count - 1;
    {
        vec_on_title_selection_changed *VAR_8 =
            &VAR_1->report.on_title_selection_changed;
        while (VAR_8->size == 0)
            FUNC_10(VAR_3, &VAR_1->wait);
        FUNC_3(VAR_8->data[0] == 0);

        const struct vlc_player_title *VAR_9 =
            FUNC_14(VAR_5, 4);
        FUNC_13(VAR_3, VAR_9);

        while (VAR_8->size == 1)
            FUNC_10(VAR_3, &VAR_1->wait);
        FUNC_3(VAR_8->data[1] == 4);

        FUNC_3(VAR_9->chapter_count == VAR_4.chapter_count);
        FUNC_12(VAR_3, VAR_9, VAR_7);
    }


    {
        vec_on_chapter_selection_changed *VAR_10 =
            &VAR_1->report.on_chapter_selection_changed;

        while (VAR_10->size == 0 || FUNC_1(VAR_10).chapter_idx != VAR_7)
            FUNC_10(VAR_3, &VAR_1->wait);
        FUNC_3(FUNC_1(VAR_10).title_idx == 4);
    }

    FUNC_9(VAR_1);
    FUNC_15(VAR_1, VAR_0);
    FUNC_4(VAR_1);
    FUNC_7(VAR_1);
}
