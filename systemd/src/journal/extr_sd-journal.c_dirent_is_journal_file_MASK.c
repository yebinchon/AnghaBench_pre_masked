
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; int d_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct dirent const*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(const struct dirent *VAR_3) {
        FUNC_1(VAR_3);

        if (!FUNC_0(VAR_3->d_type, VAR_1, VAR_0, VAR_2))
                return 0;

        return FUNC_2(VAR_3->d_name, ".journal") ||
                FUNC_2(VAR_3->d_name, ".journal~");
}
