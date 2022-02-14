
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_entry_t {scalar_t__ file; int path; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    struct dir_entry_t *VAR_2 = *(struct dir_entry_t**)VAR_0;
    struct dir_entry_t *VAR_3 = *(struct dir_entry_t**)VAR_1;

    if (VAR_2->file == VAR_3->file)
        return FUNC_0(VAR_2->path, VAR_3->path);

    return VAR_2->file ? 1 : -1;
}
