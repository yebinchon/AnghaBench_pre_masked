
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vlc_readdir_helper {int pp_dirs; int i_dirs; int pp_slaves; int i_slaves; void* b_flatten; int i_sub_autodetect_fuzzy; int psz_ignored_exts; void* b_show_hiddenfiles; TYPE_1__* p_node; } ;
struct TYPE_3__ {int p_item; } ;
typedef TYPE_1__ input_item_node_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct vlc_readdir_helper *VAR_0,
                             vlc_object_t *VAR_1, input_item_node_t *VAR_2)
{




    vlc_object_t *VAR_3 = FUNC_5(VAR_1, sizeof(vlc_object_t));
    if (VAR_3 != ((void*)0))
    {
        FUNC_1(VAR_3, VAR_2->p_item);
        VAR_1 = VAR_3;
    }

    VAR_0->p_node = VAR_2;
    VAR_0->b_show_hiddenfiles = FUNC_2(VAR_1, "show-hiddenfiles");
    VAR_0->psz_ignored_exts = FUNC_4(VAR_1, "ignore-filetypes");
    bool VAR_4 = FUNC_2(VAR_1, "sub-autodetect-file");
    VAR_0->i_sub_autodetect_fuzzy = !VAR_4 ? 0 :
        FUNC_3(VAR_1, "sub-autodetect-fuzzy");
    VAR_0->b_flatten = FUNC_2(VAR_1, "extractor-flatten");
    FUNC_0(VAR_0->i_slaves, VAR_0->pp_slaves);
    FUNC_0(VAR_0->i_dirs, VAR_0->pp_dirs);

    if (VAR_3 != ((void*)0))
        FUNC_6(VAR_3);
}
