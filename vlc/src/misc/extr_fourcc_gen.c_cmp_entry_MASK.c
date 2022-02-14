
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int fourcc; int alias; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const struct entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    int VAR_4 = FUNC_0(VAR_2->alias, VAR_3->alias, 4);
    if (VAR_4 == 0)
        VAR_4 = FUNC_0(VAR_2->fourcc, VAR_3->fourcc, 4);
    return VAR_4;
}
