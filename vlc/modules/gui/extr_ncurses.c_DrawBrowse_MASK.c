
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dir_entry_t {int path; scalar_t__ file; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int n_dir_entries; scalar_t__ color; struct dir_entry_t** dir_entries; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,char*,char,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(intf_thread_t *VAR_2)
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;

    for (int VAR_4 = 0; VAR_4 < VAR_3->n_dir_entries; VAR_4++) {
        struct dir_entry_t *VAR_5 = VAR_3->dir_entries[VAR_4];
        char VAR_6 = VAR_5->file ? ' ' : '+';

        if (VAR_3->color)
            FUNC_1(VAR_5->file ? VAR_0 : VAR_1, ((void*)0));
        FUNC_0(VAR_3, VAR_4, " %c %s", VAR_6, VAR_5->path);
    }

    return VAR_3->n_dir_entries;
}
