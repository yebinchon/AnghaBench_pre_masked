
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (void*,int,size_t,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static size_t FUNC_4(void* VAR_0, size_t VAR_1, FILE* VAR_2)
{
    size_t const VAR_3 = FUNC_2(VAR_0, 1, VAR_1, VAR_2);
    if (VAR_3 == VAR_1) return VAR_3;
    if (FUNC_1(VAR_2)) return VAR_3;

    FUNC_3("fread");
    FUNC_0(4);
}
