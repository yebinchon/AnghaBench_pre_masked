
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_readdir_helper {size_t i_dirs; struct rdh_dir** pp_dirs; } ;
struct rdh_dir {char* psz_path; TYPE_1__* p_node; } ;
typedef int input_item_t ;
struct TYPE_5__ {int p_item; } ;
typedef TYPE_1__ input_item_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,struct rdh_dir**,struct rdh_dir*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdh_dir*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,char const*,int ,int ,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int *) ;
 struct rdh_dir* FUNC_7 (int) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*,char const*,size_t) ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static int FUNC_12(struct vlc_readdir_helper *VAR_5,
                         input_item_node_t **VAR_6, const char *VAR_7,
                         int VAR_8)
{




    FUNC_1(VAR_7 != ((void*)0));
    const char *VAR_9 = VAR_7;

    while ((VAR_9 = FUNC_8(VAR_9, '/')))
    {
        input_item_node_t *VAR_10 = ((void*)0);


        for (size_t VAR_11 = 0; VAR_11 < VAR_5->i_dirs && VAR_10 == ((void*)0); VAR_11++)
        {
            struct rdh_dir *VAR_12 = VAR_5->pp_dirs[VAR_11];
            if (!FUNC_9(VAR_12->psz_path, VAR_7, VAR_9 - VAR_7))
                VAR_10 = VAR_12->p_node;
        }


        if (VAR_10 == ((void*)0))
        {
            size_t VAR_13 = VAR_9 - VAR_7;
            struct rdh_dir *VAR_14 =
                FUNC_7(sizeof(struct rdh_dir) + 1 + VAR_13);
            if (VAR_14 == ((void*)0))
                return VAR_3;
            FUNC_10(VAR_14->psz_path, VAR_7, VAR_13);
            VAR_14->psz_path[VAR_13] = 0;

            const char *VAR_15 = FUNC_11(VAR_14->psz_path, '/');
            if (VAR_15 != ((void*)0))
                ++VAR_15;
            else
                VAR_15 = VAR_14->psz_path;

            input_item_t *VAR_16 =
                FUNC_4(VAR_1, VAR_15, VAR_0,
                                  VAR_2, VAR_8);
            if (VAR_16 == ((void*)0))
            {
                FUNC_2(VAR_14);
                return VAR_3;
            }
            FUNC_3(VAR_16, (*VAR_6)->p_item);
            *VAR_6 = FUNC_6(*VAR_6, VAR_16);
            FUNC_5(VAR_16);
            if (*VAR_6 == ((void*)0))
            {
                FUNC_2(VAR_14);
                return VAR_3;
            }
            VAR_14->p_node = *VAR_6;
            FUNC_0(VAR_5->i_dirs, VAR_5->pp_dirs, VAR_14);
        }
        else
            *VAR_6 = VAR_10;
        VAR_9++;
    }
    return VAR_4;
}
