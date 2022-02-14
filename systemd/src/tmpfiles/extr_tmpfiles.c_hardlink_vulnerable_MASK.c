
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stat const*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(const struct stat *VAR_0) {
        FUNC_1(VAR_0);

        return !FUNC_0(VAR_0->st_mode) && VAR_0->st_nlink > 1 && FUNC_2();
}
