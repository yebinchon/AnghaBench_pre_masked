
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, const char *VAR_2,
                         int (*VAR_3)(const char *, const char *))
{
    int VAR_4 = VAR_3(VAR_1, VAR_2);
    if (VAR_4 >= 0) {
        FUNC_1(VAR_0, "Failure: \"%s\" %s \"%s\"\n",
                VAR_1, VAR_4 ? ">" : "==", VAR_2);
        FUNC_0(1);
    }
}
