
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct vlc_readdir_helper {scalar_t__ i_sub_autodetect_fuzzy; size_t i_slaves; struct rdh_slave** pp_slaves; } ;
struct rdh_slave {TYPE_4__* p_slave; TYPE_2__* p_node; int psz_filename; } ;
struct TYPE_10__ {int psz_name; } ;
typedef TYPE_1__ input_item_t ;
typedef int input_item_slave_t ;
struct TYPE_11__ {int i_children; struct TYPE_11__** pp_children; TYPE_1__* p_item; } ;
typedef TYPE_2__ input_item_node_t ;
typedef enum slave_type { ____Placeholder_slave_type } slave_type ;
struct TYPE_12__ {scalar_t__ i_priority; scalar_t__ i_type; int psz_uri; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int * FUNC_6 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (struct vlc_readdir_helper*,struct rdh_slave*) ;

__attribute__((used)) static void FUNC_9(struct vlc_readdir_helper *VAR_3,
                              input_item_node_t *VAR_4)
{
    if (VAR_3->i_sub_autodetect_fuzzy == 0)
        return;


    for (int VAR_5 = 0; VAR_5 < VAR_4->i_children; VAR_5++)
    {
        input_item_node_t *VAR_6 = VAR_4->pp_children[VAR_5];
        input_item_t *VAR_7 = VAR_6->p_item;

        enum slave_type VAR_8;
        if (!FUNC_1(VAR_7->psz_name)
         || FUNC_5(VAR_7->psz_name, &VAR_8))
            continue;

        for (size_t VAR_9 = 0; VAR_9 < VAR_3->i_slaves; VAR_9++)
        {
            struct rdh_slave *VAR_10 = VAR_3->pp_slaves[VAR_9];



            if (VAR_10->p_node == VAR_6
             || VAR_10->p_slave->i_priority == VAR_0)
                continue;

            uint8_t VAR_11 =
                FUNC_7(VAR_7, VAR_10->p_slave,
                                         VAR_10->psz_filename);

            if (VAR_11 < VAR_3->i_sub_autodetect_fuzzy)
                continue;


            if (VAR_10->p_slave->i_type == VAR_1
             && FUNC_8(VAR_3, VAR_10))
                continue;

            input_item_slave_t *VAR_12 =
                FUNC_6(VAR_10->p_slave->psz_uri,
                                     VAR_10->p_slave->i_type,
                                     VAR_11);
            if (VAR_12 == ((void*)0))
                break;

            if (FUNC_0(VAR_7, VAR_12) != VAR_2)
            {
                FUNC_4(VAR_12);
                break;
            }



            if (VAR_10->p_node != ((void*)0))
            {
                FUNC_3(VAR_4, VAR_10->p_node);
                FUNC_2(VAR_10->p_node);
                VAR_10->p_node = ((void*)0);
            }

            VAR_10->p_slave->i_priority = VAR_11;
        }
    }


    for (int VAR_13 = 0; VAR_13 < VAR_4->i_children; VAR_13++)
        FUNC_9(VAR_3, VAR_4->pp_children[VAR_13]);
}
