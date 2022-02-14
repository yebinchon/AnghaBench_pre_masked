
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_readdir_helper {scalar_t__ i_sub_autodetect_fuzzy; TYPE_1__* p_node; int pp_slaves; int i_slaves; int b_flatten; } ;
struct rdh_slave {TYPE_1__* p_node; struct rdh_slave* psz_filename; int p_slave; } ;
typedef int input_item_t ;
struct TYPE_5__ {int p_item; } ;
typedef TYPE_1__ input_item_node_t ;
typedef enum slave_type { ____Placeholder_slave_type } slave_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct rdh_slave*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rdh_slave*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (char const*,char const*,int ,int,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (char const*,int*) ;
 int FUNC_8 (char const*,int,int ) ;
 struct rdh_slave* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct vlc_readdir_helper*,char const*) ;
 int FUNC_11 (struct vlc_readdir_helper*,TYPE_1__**,char const*,int) ;
 struct rdh_slave* FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char) ;

int FUNC_14(struct vlc_readdir_helper *VAR_4,
                               const char *VAR_5, const char *VAR_6,
                               const char *VAR_7, int VAR_8, int VAR_9)
{
    enum slave_type VAR_10;
    struct rdh_slave *VAR_11 = ((void*)0);
    FUNC_1(VAR_6 || VAR_7);

    if (!VAR_4->b_flatten)
    {
        if (VAR_7 == ((void*)0))
        {
            VAR_7 = FUNC_13(VAR_6, '/');
            if (VAR_7 != ((void*)0))
                ++VAR_7;
            else
                VAR_7 = VAR_6;
        }
    }
    else
    {
        if (VAR_7 == ((void*)0))
            VAR_7 = VAR_6;
        VAR_6 = ((void*)0);
    }

    if (VAR_4->i_sub_autodetect_fuzzy != 0
     && FUNC_7(VAR_7, &VAR_10))
    {
        VAR_11 = FUNC_9(sizeof(*VAR_11));
        if (!VAR_11)
            return VAR_2;

        VAR_11->p_node = ((void*)0);
        VAR_11->psz_filename = FUNC_12(VAR_7);
        VAR_11->p_slave = FUNC_8(VAR_5, VAR_10,
                                                      VAR_1);
        if (!VAR_11->p_slave || !VAR_11->psz_filename)
        {
            FUNC_2(VAR_11->psz_filename);
            FUNC_2(VAR_11);
            return VAR_2;
        }

        FUNC_0(VAR_4->i_slaves, VAR_4->pp_slaves, VAR_11);
    }

    if (FUNC_10(VAR_4, VAR_7))
        return VAR_3;

    input_item_node_t *VAR_12 = VAR_4->p_node;

    if (VAR_6 != ((void*)0))
    {
        int VAR_13 = FUNC_11(VAR_4, &VAR_12, VAR_6, VAR_9);
        if (VAR_13 != VAR_3)
            return VAR_13;
    }

    input_item_t *VAR_14 = FUNC_4(VAR_5, VAR_7, VAR_0, VAR_8,
                                             VAR_9);
    if (VAR_14 == ((void*)0))
        return VAR_2;

    FUNC_3(VAR_14, VAR_12->p_item);
    VAR_12 = FUNC_6(VAR_12, VAR_14);
    FUNC_5(VAR_14);
    if (VAR_12 == ((void*)0))
        return VAR_2;




    if (VAR_11 != ((void*)0))
        VAR_11->p_node = VAR_12;
    return VAR_3;
}
