
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (void*,int,size_t,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static size_t FUNC_4(void* VAR_1, size_t VAR_2, FILE* VAR_3)
{
    size_t const VAR_4 = FUNC_2(VAR_1, 1, VAR_2, VAR_3);
    if (VAR_4 == VAR_2) return VAR_4;
    if (FUNC_1(VAR_3)) return VAR_4;

    FUNC_3("fread");
    FUNC_0(VAR_0);
}
