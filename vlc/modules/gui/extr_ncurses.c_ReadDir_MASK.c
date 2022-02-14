
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dir_entry_t {int * path; int file; } ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_8__ {scalar_t__ n_dir_entries; int dir_entries; int * current_dir; int show_hidden_files; } ;
typedef TYPE_2__ intf_sys_t ;
typedef int DIR ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (scalar_t__,int ,struct dir_entry_t*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct dir_entry_t*) ;
 struct dir_entry_t* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_8 (int ,scalar_t__,int,int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int * FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(intf_thread_t *VAR_2)
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;

    if (!VAR_3->current_dir || !*VAR_3->current_dir) {
        FUNC_6(VAR_2, "no current dir set");
        return;
    }

    DIR *VAR_4 = FUNC_12(VAR_3->current_dir);
    if (!VAR_4) {
        FUNC_7(VAR_2, "cannot open directory `%s' (%s)", VAR_3->current_dir,
                 FUNC_14(VAR_1));
        return;
    }

    FUNC_0(VAR_3);

    const char *VAR_5;
    while ((VAR_5 = FUNC_13(VAR_4))) {
        if (!VAR_3->show_hidden_files && *VAR_5 == '.' && FUNC_9(VAR_5, ".."))
            continue;

        struct dir_entry_t *VAR_6 = FUNC_5(sizeof *VAR_6);
        if (FUNC_11(VAR_6 == ((void*)0)))
            continue;

        VAR_6->file = FUNC_1(VAR_3->current_dir, VAR_5);
        VAR_6->path = FUNC_10(VAR_5);
        if (FUNC_11(VAR_6->path == ((void*)0)))
        {
            FUNC_4(VAR_6);
            continue;
        }
        FUNC_2(VAR_3->n_dir_entries, VAR_3->dir_entries, VAR_6);
        continue;
    }

    FUNC_3(VAR_4);

    if (VAR_3->n_dir_entries > 0)
        FUNC_8(VAR_3->dir_entries, VAR_3->n_dir_entries,
              sizeof(struct dir_entry_t*), &VAR_0);
}
