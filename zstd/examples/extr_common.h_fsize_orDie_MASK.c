
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_4(const char *VAR_3)
{
    struct stat VAR_4;
    if (FUNC_3(VAR_3, &VAR_4) != 0) {

        FUNC_2(VAR_3);
        FUNC_0(VAR_0);
    }

    off_t const VAR_5 = VAR_4.st_size;
    size_t const VAR_6 = (size_t)VAR_5;




    if ((VAR_5 < 0) || (VAR_5 != (off_t)VAR_6)) {
        FUNC_1(VAR_2, "%s : filesize too large \n", VAR_3);
        FUNC_0(VAR_1);
    }
    return VAR_6;
}
