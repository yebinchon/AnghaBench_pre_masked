
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_readdir_helper {size_t i_slaves; size_t i_dirs; struct rdh_slave** pp_dirs; struct rdh_slave** pp_slaves; struct rdh_slave* psz_ignored_exts; int p_node; } ;
struct rdh_slave {struct rdh_slave* psz_filename; int p_slave; } ;


 int FUNC_0 (size_t,struct rdh_slave**) ;
 int FUNC_1 (struct rdh_slave*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vlc_readdir_helper*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct vlc_readdir_helper *VAR_0, bool VAR_1)
{
    if (VAR_1)
    {
        FUNC_4(VAR_0->p_node);
        FUNC_3(VAR_0, VAR_0->p_node);
    }
    FUNC_1(VAR_0->psz_ignored_exts);


    for (size_t VAR_2 = 0; VAR_2 < VAR_0->i_slaves; VAR_2++)
    {
        struct rdh_slave *VAR_3 = VAR_0->pp_slaves[VAR_2];
        if (VAR_3 != ((void*)0))
        {
            FUNC_2(VAR_3->p_slave);
            FUNC_1(VAR_3->psz_filename);
            FUNC_1(VAR_3);
        }
    }
    FUNC_0(VAR_0->i_slaves, VAR_0->pp_slaves);

    for (size_t VAR_4 = 0; VAR_4 < VAR_0->i_dirs; VAR_4++)
        FUNC_1(VAR_0->pp_dirs[VAR_4]);
    FUNC_0(VAR_0->i_dirs, VAR_0->pp_dirs);
}
