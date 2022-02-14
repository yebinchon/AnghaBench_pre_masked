
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,void* const,size_t) ;
 void* FUNC_2 (size_t) ;

__attribute__((used)) static void* FUNC_3(const char* VAR_0, size_t* VAR_1) {
    size_t const VAR_2 = FUNC_0(VAR_0);
    *VAR_1 = VAR_2;
    void* const VAR_3 = FUNC_2(*VAR_1);
    FUNC_1(VAR_0, VAR_3, *VAR_1);
    return VAR_3;
}
